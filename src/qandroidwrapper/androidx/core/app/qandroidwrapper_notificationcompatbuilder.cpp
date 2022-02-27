#include "qandroidwrapper_notificationcompatbuilder.h"

#include "android/net/qandroidwrapper_uri.h"
#include "java/lang/qandroidwrapper_string.h"
#include "android/content/qandroidwrapper_context.h"
#include "java/lang/qandroidwrapper_charsequence.h"
#include "android/app/qandroidwrapper_notification.h"
#include "android/app/qandroidwrapper_pendingintent.h"

QtAndroidWrapper::NotificationCompatBuilder::NotificationCompatBuilder(const QAndroidJniObject& object)
	: Object(object)
{

}

QtAndroidWrapper::NotificationCompatBuilder::NotificationCompatBuilder(const QtAndroidWrapper::Context& context, const String& channelId)
	: Object(QAndroidJniObject("android/support/v4/app/NotificationCompat$Builder", "(Landroid/content/Context;Ljava/lang/String;)V",
						  context.object(), channelId.object<jstring>()))
{

}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setAutoCancel(bool autoCancel)
{
	return NotificationCompatBuilder(callObjectMethod("setAutoCancel", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;", autoCancel));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setContentTitle(const CharSequence& title)
{
	return NotificationCompatBuilder(callObjectMethod("setContentTitle", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;",
					 title.object()));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setSmallIcon(jint icon)
{
	return NotificationCompatBuilder(callObjectMethod("setSmallIcon", "(I)Landroid/support/v4/app/NotificationCompat$Builder;", icon));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setContentText(const CharSequence& text)
{
	return NotificationCompatBuilder(callObjectMethod("setContentText", "(Ljava/lang/CharSequence;)Landroid/support/v4/app/NotificationCompat$Builder;",
							text.object()));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setContentIntent(const QtAndroidWrapper::PendingIntent& pendingIntent)
{
	return NotificationCompatBuilder(callObjectMethod("setContentIntent", "(Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;",
													  pendingIntent.object()));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setOnlyAlertOnce(bool onlyAlertOnce)
{
	return NotificationCompatBuilder(callObjectMethod("setOnlyAlertOnce", "(Z)Landroid/support/v4/app/NotificationCompat$Builder;", onlyAlertOnce));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setLights(jint argb, jint onMs, jint offMs)
{
	return NotificationCompatBuilder(callObjectMethod("setLights", "(III)Landroid/support/v4/app/NotificationCompat$Builder;", argb, onMs, offMs));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setVibrate(jlongArray pattern)
{
	return NotificationCompatBuilder(callObjectMethod("setVibrate", "([J)Landroid/support/v4/app/NotificationCompat$Builder;", pattern));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setSound(const QtAndroidWrapper::Uri& sound)
{
	return NotificationCompatBuilder(callObjectMethod("setSound", "(Landroid/net/Uri;)Landroid/support/v4/app/NotificationCompat$Builder;", sound.object()));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::setSound(const QtAndroidWrapper::Uri& sound, jint streamType)
{
	return NotificationCompatBuilder(callObjectMethod("setSound", "(Landroid/net/Uri;I)Landroid/support/v4/app/NotificationCompat$Builder;", sound.object(), streamType));
}

QtAndroidWrapper::NotificationCompatBuilder QtAndroidWrapper::NotificationCompatBuilder::addAction(jint icon, const CharSequence& title, const QtAndroidWrapper::PendingIntent& intent)
{
	return NotificationCompatBuilder(callObjectMethod("addAction", "(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Landroid/support/v4/app/NotificationCompat$Builder;",
													  icon, title.object(), intent.object()));
}

QtAndroidWrapper::Notification QtAndroidWrapper::NotificationCompatBuilder::build()
{
	return Notification(callObjectMethod("build", "()Landroid/app/Notification;"));
}
