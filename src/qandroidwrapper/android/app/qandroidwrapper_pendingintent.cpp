#include "qandroidwrapper_pendingintent.h"

#include "android/content/qandroidwrapper_intent.h"
#include "android/content/qandroidwrapper_context.h"

QtAndroidWrapper::PendingIntent QtAndroidWrapper::PendingIntent::getActivity(const QtAndroidWrapper::Context& context, jint requestCode, const QtAndroidWrapper::Intent& intent, Flag flags)
{
	return PendingIntent(callStaticObjectMethod("android/app/PendingIntent", "getActivity", "(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
												context.object(), requestCode, intent.object(), flags));
}

QtAndroidWrapper::PendingIntent QtAndroidWrapper::PendingIntent::getBroadcast(const QtAndroidWrapper::Context& context, jint requestCode, const QtAndroidWrapper::Intent& intent, Flag flags)
{
	return PendingIntent(callStaticObjectMethod("android/app/PendingIntent", "getBroadcast", "(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
												context.object(), requestCode, intent.object(), flags));
}

QtAndroidWrapper::PendingIntent::PendingIntent(const QAndroidJniObject& object)
	: Object(object)
{

}
