#include "glibsetup.h"
#include "bluetooth.h"
#include "statusbar.h"
#include <iostream>

using namespace std;

bool eventHandler(Glib::Event event, void* param)
{
	if (event == Glib::Event::AGENT_REGISTERED)
	{
		Bluetooth::defaultAgent(); 
		Bluetooth::setDiscoverable(true);
	}
	else if (event == Glib::Event::AUTHORIZE_SERVICE)
	{
		return true;
	}
	else if (event == Glib::Event::REQUEST_CONFIRMATION)
	{
		return true;
	}
	else if (event == Glib::Event::DISCOVERABILTY_CHANGE)
	{
		if (!param)
			Bluetooth::setDiscoverable(true);
	}
	else if (event == Glib::Event::DEVICE_CONNECTED)
	{
		Statusbar::printf(2, "Bluetooth connected");
	}
	else if (event == Glib::Event::DEVICE_DISCONNECTED)
	{
		Statusbar::printf(2, "Bluetooth disconnected");
	}
	
	return false;
}
