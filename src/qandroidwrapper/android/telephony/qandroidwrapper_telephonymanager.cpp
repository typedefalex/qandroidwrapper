#include "qandroidwrapper_telephonymanager.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::String QtAndroidWrapper::TelephonyManager::getDeviceId()
{
	return String(callObjectMethod("getDeviceId", "()Ljava/lang/String;"));
}

QtAndroidWrapper::String QtAndroidWrapper::TelephonyManager::getDeviceId(jint slotIndex)
{
	return String(callObjectMethod("getDeviceId", "(I)Ljava/lang/String;", slotIndex));
}

QtAndroidWrapper::String QtAndroidWrapper::TelephonyManager::getImei()
{
	return String(callObjectMethod("getImei", "()Ljava/lang/String;"));
}

QtAndroidWrapper::String QtAndroidWrapper::TelephonyManager::getImei(jint slotIndex)
{
	return String(callObjectMethod("getImei", "(I)Ljava/lang/String;", slotIndex));
}

QtAndroidWrapper::String QtAndroidWrapper::TelephonyManager::getMeid()
{
	return String(callObjectMethod("getMeid", "()Ljava/lang/String;"));
}

QtAndroidWrapper::String QtAndroidWrapper::TelephonyManager::getMeid(jint slotIndex)
{
	return String(callObjectMethod("getMeid", "(I)Ljava/lang/String;", slotIndex));
}

QtAndroidWrapper::TelephonyManager::TelephonyManager(const QAndroidJniObject& object)
	: Object(object)
{

}
