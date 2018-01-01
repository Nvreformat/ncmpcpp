#pragma once

#include <string>
#include "gdbus/gdbus.h"
#include <boost/lockfree/queue.hpp>

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
	
	struct PendingEvent
	{
		Event event;
		void* param;
	};
	
	extern boost::lockfree::queue<PendingEvent> pendingEvents;
	
	void postEvent(Event event, void* param);
	void setup();
	DBusConnection* getDbusConnection();
	void processIter(std::string name, DBusMessageIter* iter, void (*callback)(std::string, int, void*));
}

