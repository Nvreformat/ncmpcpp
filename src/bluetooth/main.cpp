#include "glibsetup.h"
#include "bluetooth.h"
#include "statusbar.h"
#include "mpdpp.h"
#include "player.h"
#include <iostream>

using namespace std;
using namespace Bluetooth;

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
		Player::PlayerStatus status = *((Player::PlayerStatus*)&param);
		
		Statusbar::printf(2, string("Bluetooth player status: ") + to_string(status));
	}
	
	return false;
}
