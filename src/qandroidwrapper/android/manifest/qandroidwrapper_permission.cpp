#include "qandroidwrapper_permission.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::ACCESS_COARSE_LOCATION = QtAndroidWrapper::String("android.permission.ACCESS_COARSE_LOCATION");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::ACCESS_FINE_LOCATION = QtAndroidWrapper::String("android.permission.ACCESS_FINE_LOCATION");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::ACCESS_NETWORK_STATE = QtAndroidWrapper::String("android.permission.ACCESS_NETWORK_STATE");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::CALL_PHONE = QtAndroidWrapper::String("android.permission.CALL_PHONE");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::CAMERA = QtAndroidWrapper::String("android.permission.CAMERA");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::INTERNET = QtAndroidWrapper::String("android.permission.INTERNET");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::READ_EXTERNAL_STORAGE = QtAndroidWrapper::String("android.permission.READ_EXTERNAL_STORAGE");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::READ_PHONE_STATE = QtAndroidWrapper::String("android.permission.READ_PHONE_STATE");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::WAKE_LOCK = QtAndroidWrapper::String("android.permission.WAKE_LOCK");
QtAndroidWrapper::String QtAndroidWrapper::Manifest::permission::WRITE_EXTERNAL_STORAGE = QtAndroidWrapper::String("android.permission.WRITE_EXTERNAL_STORAGE");

QtAndroidWrapper::Manifest::permission::permission()
	: Object(QAndroidJniObject("android/Manifest$permission", "()V"))
{

}
