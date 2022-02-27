#include "qandroidwrapper_wakelock.h"

#include "java/lang/qandroidwrapper_string.h"

void QtAndroidWrapper::PowerManager::WakeLock::acquire()
{
	callMethod<void>("acquire", "()V");
}

bool QtAndroidWrapper::PowerManager::WakeLock::isHeld()
{
	return callMethod<jboolean>("isHeld", "()Z");
}

void QtAndroidWrapper::PowerManager::WakeLock::release()
{
	callMethod<void>("release", "()V");
}

QtAndroidWrapper::String QtAndroidWrapper::PowerManager::WakeLock::toString()
{
	return String(callObjectMethod("toString", "(Ljava/lang/String;)V"));
}

QtAndroidWrapper::PowerManager::WakeLock::WakeLock(const QAndroidJniObject& object)
	: Object(object)
{

}
