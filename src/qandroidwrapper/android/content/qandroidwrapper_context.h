#ifndef QANDROIDWRAPPER_CONTEXT_H
#define QANDROIDWRAPPER_CONTEXT_H

#include "java/lang/qandroidwrapper_string.h"
#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class File;
class Intent;
class Resources;
class IntentFilter;
class PowerManager;
class ComponentName;
class AndroidNative;
class PackageManager;
class LocationManager;
class BroadcastReceiver;
class NotificationManager;

class Context : public Object
{

public:
friend AndroidNative;

static String LOCATION_SERVICE;
static String NOTIFICATION_SERVICE;
static String POWER_SERVICE;
static String TELEPHONY_SERVICE;
static String WIFI_SERVICE;

//	enum SystemServices
//	{
//		NotificationService
//	};

//	String systemServicesToAndroid(SystemServices systemService);

	static Context androidContext();
	Resources getResources();
	QString getPackageName();
	PackageManager getPackageManager();

	Intent registerReceiver (const BroadcastReceiver& receiver, const IntentFilter& filter);

	void startActivity(const Intent& intent);
	ComponentName startService(const Intent& intent);
	ComponentName startForegroundService(const Intent& intent);
	bool stopService(const Intent& intent);

	Context getApplicationContext();
	QList<File> getExternalMediaDirs();

	template <typename T>
	T getSystemService(const String& name)
	{
		//static_assert(std::is_same<NotificationManager, T>::value || std::is_same<Object, T>::value, "std::is_same>");

		if (std::is_same<LocationManager, T>::value && name == LOCATION_SERVICE)
					return T(callObjectMethod("getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;", name.object<jstring>()));

		if (std::is_same<NotificationManager, T>::value && name == NOTIFICATION_SERVICE)
					return T(callObjectMethod("getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;", name.object<jstring>()));

		if (std::is_same<PowerManager, T>::value && name == POWER_SERVICE)
					return T(callObjectMethod("getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;", name.object<jstring>()));

		if (std::is_same<TelephonyManager, T>::value && name == TELEPHONY_SERVICE)
					return T(callObjectMethod("getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;", name.object<jstring>()));

		if (std::is_same<WifiManager, T>::value && name == WIFI_SERVICE)
					return T(callObjectMethod("getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;", name.object<jstring>()));

		Q_ASSERT_X(false, "getSystemService", "There is no T and name combination");
	}

//	template <typename T>
//	T getSystemService(SystemServices service)
//	{
//		static_assert(std::is_same<NotificationManager, T>::value || std::is_same<Object, T>::value, "std::is_same>");

//		return T(callObjectMethod("getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;", systemServicesToAndroid(service).object<jstring>()));
//	}

protected:
	explicit Context(const QAndroidJniObject& object);
};

}

#endif // CONTEXT_H
