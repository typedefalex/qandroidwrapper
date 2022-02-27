#include "qandroidwrapper_service.h"

#include <QtAndroid>

#include "qandroidwrapper_notification.h"

QtAndroidWrapper::Service QtAndroidWrapper::Service::androidService()
{
	return QtAndroidWrapper::Service(QtAndroid::androidService());
}

void QtAndroidWrapper::Service::startForeground(jint id, const QtAndroidWrapper::Notification& notification)
{
	return callMethod<void>("startForeground", "(ILandroid/app/Notification;)V", id, notification.object());
}

void QtAndroidWrapper::Service::stopForeground(int flags)
{
	return callMethod<void>("stopForeground", "(I)V", flags);
}

void QtAndroidWrapper::Service::stopSelf()
{
	return callMethod<void>("stopSelf", "()V");
}

QtAndroidWrapper::Service::Service(const QAndroidJniObject& object)
	: Context(object)
{

}
