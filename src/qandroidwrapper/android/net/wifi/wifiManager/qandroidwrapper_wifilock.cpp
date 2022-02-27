#include "qandroidwrapper_wifilock.h"

#include "java/lang/qandroidwrapper_string.h"

void QtAndroidWrapper::WifiManager::WifiLock::acquire()
{
	callMethod<void>("acquire", "()V");
}

bool QtAndroidWrapper::WifiManager::WifiLock::isHeld()
{
	return callMethod<jboolean>("isHeld", "()Z");
}

void QtAndroidWrapper::WifiManager::WifiLock::release()
{
	callMethod<void>("release", "()V");
}

QtAndroidWrapper::String QtAndroidWrapper::WifiManager::WifiLock::toString()
{
	return String(callObjectMethod("toString", "(Ljava/lang/String;)V"));
}

QtAndroidWrapper::WifiManager::WifiLock::WifiLock(const QAndroidJniObject& object)
	: Object(object)
{

}
