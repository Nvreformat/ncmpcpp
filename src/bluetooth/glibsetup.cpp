#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <pthread.h>
#include "player.h"
#include <sys/signalfd.h>
#include <glib.h>
#include <iostream>
#include "gdbus/gdbus.h"
#include "glibsetup.h"
#include "bluetooth.h"

using namespace std;

struct GDBusClient {
	int ref_count;
	DBusConnection *dbus_conn;
	char *service_name;
	char *base_path;
	guint watch;
	guint added_watch;
	guint removed_watch;
	GPtrArray *match_rules;
	DBusPendingCall *pending_call;
	DBusPendingCall *get_objects_call;
	GDBusWatchFunction connect_func;
	void *connect_data;
	GDBusWatchFunction disconn_func;
	void *disconn_data;
	GDBusMessageFunction signal_func;
	void *signal_data;
	GDBusProxyFunction proxy_added;
	GDBusProxyFunction proxy_removed;
	GDBusPropertyFunction property_changed;
	void *user_data;
	GList *proxy_list;
};

struct GDBusProxy {
	int ref_count;
	GDBusClient *client;
	char *obj_path;
	char *interface;
	GHashTable *prop_list;
	guint watch;
	GDBusPropertyFunction prop_func;
	void *prop_data;
	GDBusProxyFunction removed_func;
	void *removed_data;
};

namespace Glib
{
	pthread_t glibThread;
	GMainLoop* mainLoop;
	DBusConnection* dbusConnection;
	GDBusClient* client;
	boost::lockfree::queue<PendingEvent> pendingEvents(128);

	static void get_all_properties_reply(DBusPendingCall *call, void *user_data)
	{
		DBusMessage *reply = dbus_pending_call_steal_reply(call);
		DBusMessageIter iter;
		DBusError error;

		dbus_error_init(&error);

		if (dbus_set_error_from_message(&error, reply) == TRUE) {
			dbus_error_free(&error);
			dbus_message_unref(reply);

			g_dbus_client_unref(client);
		}

		dbus_message_iter_init(reply, &iter);

		Glib::processIter(string("DFSD"), &iter, Bluetooth::Player::onPlayerPropertyChangedCallback);
	}

	void get_all_properties(GDBusProxy *proxy)
	{
		const char *service_name = client->service_name;
		DBusMessage *msg;
		DBusPendingCall *call;

		msg = dbus_message_new_method_call(service_name, proxy->obj_path,
						DBUS_INTERFACE_PROPERTIES, "GetAll");
							
		if (msg == NULL)
			return;

		dbus_message_append_args(msg, DBUS_TYPE_STRING, &proxy->interface,
								DBUS_TYPE_INVALID);

		if (g_dbus_send_message_with_reply(dbusConnection, msg,
								&call, -1) == FALSE) {
			dbus_message_unref(msg);
			
			return;
		}

		g_dbus_client_ref(client);

		dbus_pending_call_set_notify(call, get_all_properties_reply,
									proxy, NULL);
		dbus_pending_call_unref(call);

		dbus_message_unref(msg);
	}

	void onConnect(DBusConnection* connection, void* userData){}
	void onDisconnect(DBusConnection* connection, void* serData) {}

	gboolean onSignal(GIOChannel* channel, GIOCondition condition, gpointer userData)
	{
		static unsigned int __terminated = 0;
		struct signalfd_siginfo si;
		ssize_t result;
		int fd;

		if (condition & (G_IO_NVAL | G_IO_ERR | G_IO_HUP))
		{
			g_main_loop_quit(mainLoop);
			return FALSE;
		}

		fd = g_io_channel_unix_get_fd(channel);

		result = read(fd, &si, sizeof(si));
		if (result != sizeof(si))
			return FALSE;

		switch (si.ssi_signo)
		{
		case SIGINT:
			break;
		case SIGTERM:
			if (__terminated == 0)
				g_main_loop_quit(mainLoop);

			__terminated = 1;
			break;
		}

		return TRUE;
	}

	guint setupSignal(void)
	{
		GIOChannel* channel;
		guint source;
		sigset_t mask;
		int fd;

		sigemptyset(&mask);
		sigaddset(&mask, SIGINT);
		sigaddset(&mask, SIGTERM);

		if (sigprocmask(SIG_BLOCK, &mask, NULL) < 0)
		{
			perror("Failed to set signal mask");
			return 0;
		}

		fd = signalfd(-1, &mask, 0);
		if (fd < 0)
		{
			perror("Failed to create signal descriptor");
			return 0;
		}

		channel = g_io_channel_unix_new(fd);

		g_io_channel_set_close_on_unref(channel, TRUE);
		g_io_channel_set_encoding(channel, NULL, NULL);
		g_io_channel_set_buffered(channel, FALSE);

		source = g_io_add_watch(channel, (GIOCondition) (G_IO_IN | G_IO_HUP | G_IO_ERR | G_IO_NVAL), onSignal, NULL);

		g_io_channel_unref(channel);

		return source;
	}
	
	void processIter(string name, DBusMessageIter* iter, void (*callback)(string, int, void*))
	{
		dbus_bool_t valbool;
		dbus_uint32_t valu32;
		dbus_uint16_t valu16;
		dbus_int16_t vals16;
		const char *valstr;
		string str;
		DBusMessageIter subiter;
		if (iter == NULL)
		{
			//cout << "A " << name << "is nil" << endl;
			return;
		}

		int type = dbus_message_iter_get_arg_type(iter);
			
		switch (type)
		{
		case DBUS_TYPE_INVALID:
			//cout << "B " << name << "is invalid" << endl;
			break;
		case DBUS_TYPE_STRING:
		case DBUS_TYPE_OBJECT_PATH:
			dbus_message_iter_get_basic(iter, &valstr);
			str = string(valstr);
			callback(name, type, (void*) valstr);
			//cout << "C " << name << ": " << valstr << endl;
			break;
		case DBUS_TYPE_BOOLEAN:
			dbus_message_iter_get_basic(iter, &valbool);
			callback(name, type, (void*) valbool);
			//cout << "D " << name << ": " << (valbool == TRUE ? "yes" : "no") << endl;
			break;
		case DBUS_TYPE_UINT32:
			dbus_message_iter_get_basic(iter, &valu32);
			callback(name, type, (void*) valu32);
			//cout << "E " << name << ": " << valu32 << endl;
			break;
		case DBUS_TYPE_UINT16:
			dbus_message_iter_get_basic(iter, &valu16);
			callback(name, type, (void*) valu16);
			//cout << "F " << name << ": " << valu16 << endl;
			break;
		case DBUS_TYPE_INT16:
			dbus_message_iter_get_basic(iter, &vals16);
			callback(name, type, (void*) vals16);
			//cout << "G " << name << ": " << vals16 << endl;
			break;
		case DBUS_TYPE_VARIANT:
			dbus_message_iter_recurse(iter, &subiter);
			processIter(name, &subiter, callback);
			break;
		case DBUS_TYPE_ARRAY:
			dbus_message_iter_recurse(iter, &subiter);
			while (dbus_message_iter_get_arg_type(&subiter) != DBUS_TYPE_INVALID)
			{
				processIter(name, &subiter, callback);
				dbus_message_iter_next(&subiter);
			}
			break;
		case DBUS_TYPE_DICT_ENTRY:
			dbus_message_iter_recurse(iter, &subiter);
			dbus_message_iter_get_basic(&subiter, &valstr);
			dbus_message_iter_next(&subiter);
			processIter(valstr, &subiter, callback);
			break;
		default:
			//cout << name << " has unsupported type" << endl;
			break;
		}
	}

	gboolean onInput(GIOChannel* channel, GIOCondition condition, gpointer userData)
	{
		if (condition & (G_IO_HUP | G_IO_ERR | G_IO_NVAL))
		{
			g_main_loop_quit(mainLoop);
			
			return FALSE;
		}

		return TRUE;
	}

	guint setupInput(void)
	{
		GIOChannel* channel;
		guint source;

		channel = g_io_channel_unix_new(fileno(stdin));

		source = g_io_add_watch(channel, (GIOCondition) (G_IO_IN | G_IO_HUP | G_IO_ERR | G_IO_NVAL), onInput, NULL);

		g_io_channel_unref(channel);

		return source;
	}

	void onPropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter, void* userData)
	{
		const char* interface;

		interface = g_dbus_proxy_get_interface(proxy);

		if (!strcmp(interface, "org.bluez.MediaPlayer1"))
			Bluetooth::Player::onPlayerPropertyChanged(proxy, name, iter);
		else if (!strcmp(interface, "org.bluez.Adapter1"))
			Bluetooth::onAdapterPropertyChanged(proxy, name, iter);
		else if (!strcmp(interface, "org.bluez.Device1"))
			Bluetooth::onDevicePropertyChanged(proxy, name, iter);
	}

	void onProxyAdded(GDBusProxy* proxy, void* userData)
	{
		const char* interface = g_dbus_proxy_get_interface(proxy);

		//cout << "New proxy: (" << interface << ") " << g_dbus_proxy_get_path(proxy) << endl; 

		if (!strcmp(interface, "org.bluez.MediaPlayer1"))
			Bluetooth::Player::onPlayerLoaded(proxy);
		else if (!strcmp(interface, "org.bluez.Adapter1"))
			Bluetooth::onAdapterLoaded(proxy);
		else if (!strcmp(interface, "org.bluez.Device1"))
			Bluetooth::onDeviceLoaded(proxy);
		else if (!strcmp(interface, "org.bluez.AgentManager1"))
			Bluetooth::onAgentManagerLoaded(proxy);
	}

	void onProxyRemoved(GDBusProxy* proxy, void* userData)
	{
		const char* interface = g_dbus_proxy_get_interface(proxy);

		if (!strcmp(interface, "org.bluez.MediaPlayer1"))
			Bluetooth::Player::onPlayerUnloaded(proxy);
		else if (!strcmp(interface, "org.bluez.Adapter1"))
			Bluetooth::onAdapterUnloaded(proxy);
		else if (!strcmp(interface, "org.bluez.Device1"))
			Bluetooth::onDeviceUnloaded(proxy);
		else if (!strcmp(interface, "org.bluez.AgentManager1"))
			Bluetooth::onAgentManagerUnloaded(proxy);
	}

	void* glibThreadFunction(void* param)
	{
		mainLoop = g_main_loop_new(NULL, FALSE);
		dbusConnection = g_dbus_setup_bus(DBUS_BUS_SYSTEM, NULL, NULL);
		guint input = setupInput();
		guint signal = setupSignal();
		client = g_dbus_client_new(dbusConnection, "org.bluez", "/org/bluez");

		g_dbus_client_set_connect_watch(client, onConnect, NULL);
		g_dbus_client_set_disconnect_watch(client, onDisconnect, NULL);
		g_dbus_client_set_proxy_handlers(client, onProxyAdded, onProxyRemoved, onPropertyChanged, NULL);

		g_main_loop_run(mainLoop);

		g_dbus_client_unref(client);
		g_source_remove(signal);
		g_source_remove(input);
		dbus_connection_unref(dbusConnection);
		g_main_loop_unref(mainLoop);
		
		return 0;
	}
	
	void postEvent(Event event, void* param)
	{
		pendingEvents.push((PendingEvent) {event, param});
	}

	void setup() { pthread_create(&glibThread, NULL, glibThreadFunction, NULL); }
	DBusConnection* getDbusConnection() { return dbusConnection; }
}


