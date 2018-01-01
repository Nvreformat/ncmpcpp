#include <string>
#include "bluetooth.h"
#include "glibsetup.h"
#include "player.h"
#include <iostream>

using namespace std;

#define AGENT_PATH "/org/bluez/agent"
#define AGENT_INTERFACE "org.bluez.Agent1"

namespace Bluetooth
{
	GDBusProxy* device = NULL;
	GDBusProxy* adapter = NULL;
	GDBusProxy* agentManager = NULL;
	bool agentRegistered = false;
	bool discoverable = false;
	
	static DBusMessage *release_agent(DBusConnection *conn, DBusMessage *msg, void *user_data) { return dbus_message_new_method_return(msg); }
	static DBusMessage *request_pincode(DBusConnection *conn, DBusMessage *msg, void *user_data) { return NULL; }
	static DBusMessage *display_pincode(DBusConnection *conn, DBusMessage *msg, void *user_data) { return dbus_message_new_method_return(msg); }
	static DBusMessage *request_passkey(DBusConnection *conn, DBusMessage *msg, void *user_data) { return NULL; }
	static DBusMessage *display_passkey(DBusConnection *conn, DBusMessage *msg, void *user_data) { return dbus_message_new_method_return(msg); }
	
	static DBusMessage *request_confirmation(DBusConnection *conn, DBusMessage *msg, void *user_data)
	{
		const char *device;
		dbus_uint32_t passkey;

		//printf("Request confirmation\n");
		//printf("Passkey %u\n", passkey);

		dbus_message_get_args(msg, NULL, DBUS_TYPE_OBJECT_PATH, &device,DBUS_TYPE_UINT32, &passkey, DBUS_TYPE_INVALID);
	
		if (Glib::postEvent(Glib::Event::REQUEST_CONFIRMATION, 0))
			g_dbus_send_reply(conn, msg, DBUS_TYPE_INVALID);
		else
			g_dbus_send_error(conn, msg, "org.bluez.Error.Rejected", NULL);
			
		dbus_message_ref(msg);

		return NULL;
	}

	static DBusMessage *request_authorization(DBusConnection *conn, DBusMessage *msg, void *user_data)
	{
		const char *device;

		//printf("Request authorization\n");

		dbus_message_get_args(msg, NULL, DBUS_TYPE_OBJECT_PATH, &device, DBUS_TYPE_INVALID);
		
		if (Glib::postEvent(Glib::Event::REQUEST_AUTHORIZATION, 0))
			g_dbus_send_reply(conn, msg, DBUS_TYPE_INVALID);
		else
			g_dbus_send_error(conn, msg, "org.bluez.Error.Rejected", NULL);
		
		dbus_message_ref(msg);

		return NULL;
	}

	static DBusMessage* authorize_service(DBusConnection *conn, DBusMessage *msg, void *user_data)
	{
		const char *device, *uuid;

		dbus_message_get_args(msg, NULL, DBUS_TYPE_OBJECT_PATH, &device, DBUS_TYPE_STRING, &uuid, DBUS_TYPE_INVALID);
		
		//printf("Authorize service %s %s\n", device, uuid);
		if (Glib::postEvent(Glib::Event::AUTHORIZE_SERVICE, 0) && Player::getPlayer() == NULL)
			g_dbus_send_reply(conn, msg, DBUS_TYPE_INVALID);
		else
			g_dbus_send_error(conn, msg, "org.bluez.Error.Rejected", NULL);
		dbus_message_ref(msg);

		return NULL;
	}

	DBusMessage* cancel_request(DBusConnection *conn, DBusMessage *msg, void *user_data)
	{
		//printf("Request canceled\n");
		
		dbus_message_unref(msg);

		return dbus_message_new_method_return(msg);
	}
	
	const GDBusMethodTable methods[] =
	{
		{"Release", release_agent, (GDBusMethodFlags)0, 0, 0, 0},
		{"RequestPinCode", request_pincode, G_DBUS_METHOD_FLAG_ASYNC, 0, (const GDBusArgInfo[]) { { "device", "o" }, { } }, (const GDBusArgInfo[]) { { "pincode", "s" }, { } }},
		{"DisplayPinCode", display_pincode, (GDBusMethodFlags)0, 0, (const GDBusArgInfo[]) { { "device", "o" }, { "pincode", "s" }, { } }, 0},
		{"RequestPasskey", request_passkey, (GDBusMethodFlags)G_DBUS_METHOD_FLAG_ASYNC, 0, (const GDBusArgInfo[]) { { "device", "o" }, { } }, (const GDBusArgInfo[]) { { "passkey", "u" }, { } }},
		{"DisplayPasskey", display_passkey, (GDBusMethodFlags)0, 0, (const GDBusArgInfo[]) { { "device", "o" }, { "passkey", "u" }, { "entered", "q" }, { } }, 0},
		{"RequestConfirmation", request_confirmation, (GDBusMethodFlags)G_DBUS_METHOD_FLAG_ASYNC, 0, (const GDBusArgInfo[]) { { "device", "o" }, { "passkey", "u" }, { } }, 0},
		{"RequestAuthorization", request_authorization, (GDBusMethodFlags)G_DBUS_METHOD_FLAG_ASYNC, 0, (const GDBusArgInfo[]) { { "device", "o" }, { } }, 0},
		{"AuthorizeService", authorize_service, (GDBusMethodFlags)G_DBUS_METHOD_FLAG_ASYNC, 0, (const GDBusArgInfo[]) { { "device", "o" }, { "uuid", "s" }, { } }, 0},
		{"Cancel", cancel_request, (GDBusMethodFlags)0, 0, 0, 0},
		{ }
	};
	
	void generic_callback(const DBusError* error, void* userData)
	{
		char* str = (char*) userData;

		//if (dbus_error_is_set(error))
			//printf("Failed to set %s: %s\n", str, error->name);
		//else
			//printf("Changing %s succeeded\n", str);
	}
	
	void register_agent_setup(DBusMessageIter* iter, void* userData)
	{
		const char* path = AGENT_PATH;
		const char* capability = "";

		dbus_message_iter_append_basic(iter, DBUS_TYPE_OBJECT_PATH, &path);
		dbus_message_iter_append_basic(iter, DBUS_TYPE_STRING, &capability);
	}

	void register_agent_reply(DBusMessage *message, void* userData)
	{
		DBusConnection* conn = Glib::getDbusConnection();
		DBusError error;

		dbus_error_init(&error);

		if (dbus_set_error_from_message(&error, message) == FALSE)
		{
			agentRegistered = true;
			//printf("Agent registered\n");
			
			Glib::postEvent(Glib::Event::AGENT_REGISTERED, 0);
		}
		else
		{
			//printf("Failed to register agent: %s\n", error.name);
			dbus_error_free(&error);

			g_dbus_unregister_interface(conn, AGENT_PATH, AGENT_INTERFACE);
				//printf("Failed to unregister agent object\n");
		}
	}
	
	void unregister_agent_setup(DBusMessageIter* iter, void* userData)
	{
		const char* path = AGENT_PATH;
		dbus_message_iter_append_basic(iter, DBUS_TYPE_OBJECT_PATH, &path);
	}

	void unregister_agent_reply(DBusMessage* message, void* userData)
	{
		DBusConnection* conn = Glib::getDbusConnection();
		DBusError error;

		dbus_error_init(&error);

		if (dbus_set_error_from_message(&error, message) == FALSE)
		{
			agentRegistered = false;
			//printf("Agent unregistered\n");

			g_dbus_unregister_interface(conn, AGENT_PATH, AGENT_INTERFACE);
				//printf("Failed to unregister agent object\n");
		}
		else
		{
			//printf("Failed to unregister agent: %s\n", error.name);
			dbus_error_free(&error);
		}
	}

	void setAgentEnabled(bool enabled)
	{
		DBusConnection* connection = Glib::getDbusConnection();
		
		if (connection != NULL && agentManager != NULL)
		{
			if (enabled)
			{
				if (g_dbus_register_interface(connection, AGENT_PATH, AGENT_INTERFACE, (const GDBusMethodTable*)(methods), NULL, NULL, NULL, NULL) == FALSE)
				{
					//printf("Failed to register agent object\n");
					return;
				}

				if (g_dbus_proxy_method_call(agentManager, "RegisterAgent", register_agent_setup, register_agent_reply, NULL, NULL) == FALSE)
				{
					//printf("Failed to call register agent method\n");
					return;
				}
			}
			else
			{
				if (g_dbus_proxy_method_call(agentManager, "UnregisterAgent", unregister_agent_setup, unregister_agent_reply, NULL, NULL) == FALSE)
				{
					//printf("Failed to call unregister agent method\n");
					return;
				}
			}
		}
	}
	
	void request_default_setup(DBusMessageIter* iter, void* userData)
	{
		const char* path = AGENT_PATH;

		dbus_message_iter_append_basic(iter, DBUS_TYPE_OBJECT_PATH, &path);
	}

	void request_default_reply(DBusMessage* message, void* userData)
	{
		DBusError error;

		dbus_error_init(&error);

		if (dbus_set_error_from_message(&error, message) == TRUE)
		{
			//printf("Failed to request default agent: %s\n", error.name);
			dbus_error_free(&error);
			return;
		}

		//printf("Default agent request successful\n");
	}

	void defaultAgent()
	{
		if (!agentRegistered)
		{
			//printf("No agent is registered\n");
			return;
		}

		if (g_dbus_proxy_method_call(agentManager, "RequestDefaultAgent", request_default_setup, request_default_reply, NULL, NULL) == FALSE)
		{
			//printf("Failed to call request default agent method\n");
			return;
		}
	}
	
	void setDiscoverable(bool dis)
	{
		dbus_bool_t d = dis;
		discoverable = dis;
		
		if (g_dbus_proxy_set_property_basic(adapter, "Discoverable", DBUS_TYPE_BOOLEAN, &d, generic_callback, (void*) "discoverable", NULL) == TRUE)
			return;
	}
	
	void onDevicePropertyChangedCallback(string name, int type, void* value)
	{
		if (type == DBUS_TYPE_STRING)
		{
			
		}
	}
	
	void onAdapterPropertyChangedCallback(string name, int type, void* value)
	{
		if (type == DBUS_TYPE_BOOLEAN)
		{
			if (name == "Discoverable")
				Glib::postEvent(Glib::Event::DISCOVERABILTY_CHANGE, value);
		}
	}
	
	void onDevicePropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter) { Glib::processIter(string(name), iter, onDevicePropertyChangedCallback); }
	void onAdapterPropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter) { Glib::processIter(string(name), iter, onAdapterPropertyChangedCallback); }
	void onDeviceLoaded(GDBusProxy* proxy) { device = proxy; }
	void onAdapterLoaded(GDBusProxy* proxy) { adapter = proxy; }
	void onAgentManagerLoaded(GDBusProxy* proxy) { agentManager = proxy; setAgentEnabled(true); }
	void onDeviceUnloaded(GDBusProxy* proxy) { device = NULL; }
	void onAdapterUnloaded(GDBusProxy* proxy) { adapter = NULL; }
	void onAgentManagerUnloaded(GDBusProxy* proxy) { agentManager = NULL; }
}
