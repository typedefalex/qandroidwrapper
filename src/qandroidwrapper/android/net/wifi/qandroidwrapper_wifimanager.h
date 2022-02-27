#ifndef QANDROIDWRAPPER_WIFIMANAGER_H
#define QANDROIDWRAPPER_WIFIMANAGER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class Context;

class WifiManager : public Object
{
public:
friend Context;
	class WifiLock;

	enum WifiMode
	{
		WIFI_MODE_FULL = 1,
		WIFI_MODE_FULL_HIGH_PERF = 3,
		WIFI_MODE_SCAN_ONLY = 2
	};

	WifiManager() = delete;

	WifiLock createWifiLock(WifiMode lockType, const String& tag);

private:
	explicit WifiManager(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_WIFIMANAGER_H
