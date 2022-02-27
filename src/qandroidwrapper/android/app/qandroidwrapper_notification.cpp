#include "qandroidwrapper_notification.h"

QtAndroidWrapper::Notification::Notification()
	: Object(QAndroidJniObject("android/app/Notification"))
{

}

QtAndroidWrapper::Notification::Notification(const QAndroidJniObject& object)
	: Object(object)
{

}
