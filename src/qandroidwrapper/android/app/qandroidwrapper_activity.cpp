#include "qandroidwrapper_activity.h"

#include <QtAndroid>

QtAndroidWrapper::Activity::Activity()
	: Context(QAndroidJniObject("android/app/Activity", "()V"))
{

}

QtAndroidWrapper::Activity QtAndroidWrapper::Activity::androidActivity()
{
	return QtAndroidWrapper::Activity(QtAndroid::androidActivity());
}

void QtAndroidWrapper::Activity::setRequestedOrientation(QtAndroidWrapper::ActivityInfo::ScreenOrientation requestedOrientation)
{
	return callMethod<void>("setRequestedOrientation","(I)V", requestedOrientation);
}

void QtAndroidWrapper::Activity::finish()
{
	return callMethod<void>("finish", "()V");
}

QtAndroidWrapper::Activity::Activity(const QAndroidJniObject& object)
	: Context(object)
{

}
