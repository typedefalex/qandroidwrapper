#include "qandroidwrapper_packagemanager.h"

#include "java/lang/qandroidwrapper_string.h"
#include "qandroidwrapper_packageinfo.h"

QtAndroidWrapper::PackageManager::PackageManager()
	: Object(QAndroidJniObject("android/content/pm/PackageManager", "()V"))
{

}

QtAndroidWrapper::PackageInfo QtAndroidWrapper::PackageManager::getPackageInfo(const QtAndroidWrapper::String& packageName, QtAndroidWrapper::PackageManager::PackageInfoFlag flags)
{
	return PackageInfo(callObjectMethod("getPackageInfo", "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;", packageName.object(), static_cast<jint>(flags)));
}

QtAndroidWrapper::PackageManager::PackageManager(const QAndroidJniObject& object)
	: Object(object)
{

}
