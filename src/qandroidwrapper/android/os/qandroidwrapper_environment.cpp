#include "qandroidwrapper_environment.h"

#include "java/io/qandroidwrapper_file.h"

QtAndroidWrapper::Environment::Environment()
	: Object(QAndroidJniObject("android/os/Environment", "()V"))
{

}

QtAndroidWrapper::File QtAndroidWrapper::Environment::getExternalStorageDirectory()
{
	return File(callStaticObjectMethod("android/os/Environment", "getExternalStorageDirectory", "()Ljava/io/File;"));
}

QtAndroidWrapper::Environment::Environment(const QAndroidJniObject& object)
	: Object(object)
{

}
