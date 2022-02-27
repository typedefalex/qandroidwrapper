#include "qandroidwrapper_settings.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::String QtAndroidWrapper::Settings::ACTION_APPLICATION_DETAILS_SETTINGS = QtAndroidWrapper::String("android.settings.APPLICATION_DETAILS_SETTINGS");
QtAndroidWrapper::String QtAndroidWrapper::Settings::ACTION_LOCATION_SOURCE_SETTINGS = QtAndroidWrapper::String("android.settings.LOCATION_SOURCE_SETTINGS");

QtAndroidWrapper::Settings::Settings()
	: Object(QAndroidJniObject("android/provider/Settings", "()V"))
{

}

QtAndroidWrapper::Settings::Settings(const QAndroidJniObject& object)
	: Object(object)
{

}
