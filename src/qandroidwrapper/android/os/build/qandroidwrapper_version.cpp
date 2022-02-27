#include "qandroidwrapper_version.h"

QtAndroidWrapper::Build::VERSION::VERSION()
	: Object(QAndroidJniObject("android/os/Build$VERSION", "()V"))
{

}

jint QtAndroidWrapper::Build::VERSION::SDK_INT()
{
	return getStaticField<jint>("android/os/Build$VERSION", "SDK_INT");
}

//int QtAndroidWrapper::Build::VERSION::fromString(const QString& string)
//{
//	return getStaticField<jint>("android/os/Build$VERSION", string.toLatin1().data());
//}

QtAndroidWrapper::Build::VERSION::VERSION(const QAndroidJniObject& object)
	: Object(object)
{

}
