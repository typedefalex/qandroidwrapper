#include "qandroidwrapper_powermanager.h"

#include "java/lang/qandroidwrapper_string.h"
#include "powerManager/qandroidwrapper_wakelock.h"

QtAndroidWrapper::PowerManager::WakeLock QtAndroidWrapper::PowerManager::newWakeLock(jint levelAndFlags, const QtAndroidWrapper::String& tag)
{
	return WakeLock(callObjectMethod("newWakeLock", "(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;", levelAndFlags, tag.object<jstring>()));
}

QtAndroidWrapper::PowerManager::PowerManager(const QAndroidJniObject& object)
	: Object(object)
{

}
