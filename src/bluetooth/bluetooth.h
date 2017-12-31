#pragma once

#include "gdbus/gdbus.h"

namespace Bluetooth
{
	void defaultAgent();
	void setAgentEnabled(bool enabled);
	void setDiscoverable(bool discoverable);
	void setPairable(bool pairable);
	
	void onDeviceLoaded(GDBusProxy* proxy);
	void onAdapterLoaded(GDBusProxy* proxy);
	void onAgentManagerLoaded(GDBusProxy* proxy);
	void onDeviceUnloaded(GDBusProxy* proxy);
	void onAdapterUnloaded(GDBusProxy* proxy);
	void onAgentManagerUnloaded(GDBusProxy* proxy);
	void onDevicePropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter);
	void onAdapterPropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter);
}
