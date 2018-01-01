#include "glibsetup.h"
#include "bluetooth.h"
#include "statusbar.h"
#include "mpdpp.h"
#include "player.h"
#include <iostream>

using namespace std;
using namespace Bluetooth;
using namespace Bluetooth::Player;

bool eventHandler(Glib::Event event, void* param)
{
	if (event == Glib::Event::AGENT_REGISTERED)
	{
		defaultAgent(); 
		setDiscoverable(true);
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
			setDiscoverable(true);
	}
	else if (event == Glib::Event::DEVICE_CONNECTED)
	{
		Statusbar::printf(2, "Bluetooth connected");
	}
	else if (event == Glib::Event::DEVICE_DISCONNECTED)
	{
		Statusbar::printf(2, "Bluetooth disconnected");
	}
	else if (event == Glib::Event::PLAYER_STATUS_CHANGED)
	{
		PlayerStatus status = *((PlayerStatus*)&param);
		
		
		
		Statusbar::printf(2, "Bluetooth player status: %i", (int) status);
	}
	
	return false;
}
