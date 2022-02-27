#include "qandroidwrapper_notificationmanager.h"

#include "qandroidwrapper_notification.h"
#include "qandroidwrapper_notificationchannel.h"

QtAndroidWrapper::NotificationManager::NotificationManager(const QAndroidJniObject& object)
	: Object(object)
{

}

void QtAndroidWrapper::NotificationManager::createNotificationChannel(const NotificationChannel& notificationChannel)
{
	return callMethod<void>("createNotificationChannel", "(Landroid/app/NotificationChannel;)V", notificationChannel.object<jobject>());
}

void QtAndroidWrapper::NotificationManager::notify(jint id, QtAndroidWrapper::Notification notification)
{
	return callMethod<void>("notify", "(ILandroid/app/Notification;)V", id, notification.object());
}

void QtAndroidWrapper::NotificationManager::cancel(jint id)
{
	return callMethod<void>("cancel", "(I)V", id);
}

void QtAndroidWrapper::NotificationManager::cancelAll()
{
	return callMethod<void>("cancelAll", "()V");
}
