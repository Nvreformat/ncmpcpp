#include "glibsetup.h"
#include "bluetooth.h"
#include <iostream>

using namespace std;

bool eventHandler(Glib::Event event, void* param)
{
	cout << "eventirijillo " << event << endl;
	
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
	
	return false;
}

int main2(int argc, char** argv)
{
	Glib::setup(eventHandler);
	
	while(1);

	return 0;
}
