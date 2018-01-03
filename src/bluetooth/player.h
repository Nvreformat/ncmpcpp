#pragma once

#include "gdbus/gdbus.h"
#include <string>

namespace Bluetooth
{
	namespace Player
	{
		enum PlayerStatus
		{
			PLAYING,
			PAUSED,
			STOPPED
		};
		
		class Status
		{
			public:
			
			std::string title = "N/Adfsgsdfgdsfgsdfgdsfgsdfgdsfgfdsgdfsgsdfgdsfgsdfgfdsg";
			std::string album = "N/Asdfgsdfgsdfgdsfgdfsgsdfgsdfgdsfgdsfgdfsgsdfgsdfgfs";
			std::string artist = "N/Agdfsgdsfgdsfgdsfgdsfgsdfgsdgsdfg";
			std::string genre = "N/A";
			
			int trackNumber = 0;
			int trackCount = 0;
			int duration = 0;
			int position = 0;
			PlayerStatus status = STOPPED;
		};
		
		void onPlayerLoaded(GDBusProxy* proxy);
		void onPlayerUnloaded(GDBusProxy* proxy);
		void onPlayerPropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter);
		
		void play();
		void pause();
		void stop();
		void next();
		void previous();
		GDBusProxy* getPlayer();
		bool mpdCheck();
		bool isPlaying();
		
		Status& getStatus();
	}
}
