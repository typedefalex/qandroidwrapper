#include "qandroidwrapper_version_codes.h"

QtAndroidWrapper::Build::VERSION_CODES::VERSION_CODES()
	: Object(QAndroidJniObject("android/os/Build$VERSION_CODES", "()V"))
{

}

QtAndroidWrapper::Build::VERSION_CODES::VERSION_CODES(const QAndroidJniObject& object)
	: Object(object)
{

}
