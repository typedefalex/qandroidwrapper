#include "qandroidwrapper_locationmanager.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::String QtAndroidWrapper::LocationManager::GPS_PROVIDER = QtAndroidWrapper::String("gps");

jboolean QtAndroidWrapper::LocationManager::isProviderEnabled(const String& provider)
{
	return callMethod<jboolean>("isProviderEnabled", "(Ljava/lang/String;)Z", provider.object<jstring>());
}

QtAndroidWrapper::LocationManager::LocationManager(const QAndroidJniObject& object)
	: Object(object)
{

}
