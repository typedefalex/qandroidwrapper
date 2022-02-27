#include "qandroidwrapper_activityinfo.h"

QtAndroidWrapper::ActivityInfo::ActivityInfo()
	: Object(QAndroidJniObject("android/content/pm/ActivityInfo", "()V"))
{

}

QtAndroidWrapper::ActivityInfo::ActivityInfo(const QAndroidJniObject& object)
	: Object(object)
{

}
