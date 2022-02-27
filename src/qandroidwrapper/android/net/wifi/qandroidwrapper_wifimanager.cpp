#include "qandroidwrapper_wifimanager.h"

#include "java/lang/qandroidwrapper_string.h"
#include "wifiManager/qandroidwrapper_wifilock.h"

QtAndroidWrapper::WifiManager::WifiLock QtAndroidWrapper::WifiManager::createWifiLock(QtAndroidWrapper::WifiManager::WifiMode lockType, const QtAndroidWrapper::String& tag)
{
	return WifiLock(callObjectMethod("createWifiLock", "(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;", static_cast<jint>(lockType), tag.object<jstring>()));
}

QtAndroidWrapper::WifiManager::WifiManager(const QAndroidJniObject& object)
	: Object(object)
{

}
