#pragma once

#include <string>
#include "gdbus/gdbus.h"

namespace Glib
{
	enum Event
	{
		AGENT_REGISTERED,
		AUTHORIZE_SERVICE,
		REQUEST_AUTHORIZATION,
		REQUEST_CONFIRMATION,
		DISCOVERABILTY_CHANGE,
		DEVICE_CONNECTED,
		DEVICE_DISCONNECTED,
		PLAYER_STATUS_CHANGED,
	};
	
	bool postEvent(Event event, void* param);
	void setup(bool (*handler)(Event, void*));
	DBusConnection* getDbusConnection();
	void processIter(std::string name, DBusMessageIter* iter, void (*callback)(std::string, int, void*));
}

