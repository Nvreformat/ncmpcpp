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
#include "gdbus/gdbus.h"
#include "glibsetup.h"
#include <string>
#include <iostream>

using namespace std;

namespace Bluetooth
{
	namespace Player
	{
		GDBusProxy* player = NULL;
		Status status;
		
		void dbusCallback(DBusMessage* message, void* userData)
		{
			DBusError error;
			dbus_error_init(&error);

			dbus_set_error_from_message(&error, message); //!= TRUE)
				//printf("%s SUCCESS\n", (char*) userData);
			//else
				//printf("%s FAILED\n", (char*) userData);
		}

		void pause()
		{
			if (player == NULL) return;

			g_dbus_proxy_method_call(player, "Pause", NULL, dbusCallback, (char*) "PAUSE", NULL);
		}

		void stop()
		{
			if (player == NULL) return;

			g_dbus_proxy_method_call(player, "Stop", NULL, dbusCallback, (char*) "STOP", NULL);
		}

		void play()
		{
			if (player == NULL) return;

			g_dbus_proxy_method_call(player, "Play", NULL, dbusCallback, (char*) "PLAY", NULL);
		}

		void previous()
		{
			if (player == NULL) return;

			g_dbus_proxy_method_call(player, "Previous", NULL, dbusCallback, (char*) "PREVIOUS", NULL);
		}

		void next()
		{
			if (player == NULL) return;

			g_dbus_proxy_method_call(player, "Next", NULL, dbusCallback, (char*) "NEXT", NULL);
		}
		
		void onPlayerPropertyChangedCallback(string name, int type, void* value)
		{
			if (type == DBUS_TYPE_STRING)
			{
				string str = string((char*) value);
				
				if (name == "Status")
				{
					static PlayerStatus lastStatus = STOPPED;
					
					if (str == "playing")
						status.status = PLAYING;
					else if (str == "paused")
						status.status = PAUSED;
					else
						status.status = STOPPED;
						
					if (status.status != lastStatus)
					{
						lastStatus = status.status;
						Glib::postEvent(Glib::Event::PLAYER_STATUS_CHANGED, (void*) status.status);
					}
				}
				else if (name == "Title")
					status.title = str;
				else if (name == "Album")
					status.album = str;
				else if (name == "Artist")
					status.artist = str;
				else if (name == "Genre")
					status.genre = str;
				
				//cout << "" << status.status << " " << status.title << " " << status.album << " " << status.artist << " " << status.genre << " " << endl;
			}
			else if (type == DBUS_TYPE_UINT32)
			{
				unsigned int uintValue = *((unsigned int*)(&value));
				
				if (name == "Position")
					status.position = uintValue;
				else if (name == "Duration")
					status.duration = uintValue;
				else if (name == "TrackNumber")
					status.trackNumber = uintValue;
				else if (name == "NumberOfTracks")
					status.trackCount = uintValue;
					
				//cout << "" << status.position << " " << status.duration << " " << status.trackNumber << " " << status.trackCount << " " << endl;
			}
		}

		void onPlayerPropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter){ Glib::processIter(string(name), iter, onPlayerPropertyChangedCallback); }
		void onPlayerLoaded(GDBusProxy* proxy) { player = proxy; Glib::postEvent(Glib::Event::DEVICE_CONNECTED, (void*) proxy); }
		void onPlayerUnloaded(GDBusProxy* proxy) { player = NULL; Glib::postEvent(Glib::Event::DEVICE_DISCONNECTED, (void*) proxy); }
		GDBusProxy* getPlayer() { return player; }
		bool isPlaying() { return player != NULL && status.status == PLAYING; }
		Status& getStatus() { return status; }
	}
}
