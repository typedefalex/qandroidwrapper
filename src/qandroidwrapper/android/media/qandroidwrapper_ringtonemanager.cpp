#include "qandroidwrapper_ringtonemanager.h"

#include "android/net/qandroidwrapper_uri.h"
#include "android/content/qandroidwrapper_context.h"
#include "android/app/qandroidwrapper_activity.h"
#include "android/media/qandroidwrapper_ringtone.h"

QtAndroidWrapper::RingtoneManager::RingtoneManager(const QtAndroidWrapper::Context& context)
	: Object(QAndroidJniObject("android/media/RingtoneManager", "(Landroid/content/Context;)V", context.object()))
{

}

QtAndroidWrapper::RingtoneManager::RingtoneManager(const QtAndroidWrapper::Activity& activity)
	: Object(QAndroidJniObject("android/media/RingtoneManager", "(Landroid/app/Activity;)V", activity.object()))
{

}

QtAndroidWrapper::Uri QtAndroidWrapper::RingtoneManager::getDefaultUri(Type type)
{
	return QtAndroidWrapper::Uri(callStaticObjectMethod("android/media/RingtoneManager", "getDefaultUri", "(I)Landroid/net/Uri;", jint(type)));
}

QtAndroidWrapper::Ringtone QtAndroidWrapper::RingtoneManager::getRingtone(const QtAndroidWrapper::Context& context, const QtAndroidWrapper::Uri& ringtoneUri)
{
	return QtAndroidWrapper::Ringtone(callStaticObjectMethod("android/media/RingtoneManager", "getRingtone", "(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/Ringtone;", context.object(), ringtoneUri.object()));
}

QtAndroidWrapper::RingtoneManager::RingtoneManager(const QAndroidJniObject& object)
	: Object(object)
{

}
