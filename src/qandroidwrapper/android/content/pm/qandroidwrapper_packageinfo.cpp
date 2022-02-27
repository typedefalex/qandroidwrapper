#include "qandroidwrapper_packageinfo.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::PackageInfo::PackageInfo()
	: Object(QAndroidJniObject("android/content/pm/PackageInfo", "()V"))
{

}

QtAndroidWrapper::String QtAndroidWrapper::PackageInfo::versionName()
{
	return String(getObjectField("versionName", "Ljava/lang/String;"));
}

QtAndroidWrapper::PackageInfo::PackageInfo(const QAndroidJniObject& object)
	: Object(object)
{

}
