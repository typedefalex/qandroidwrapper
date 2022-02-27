#include "qandroidwrapper_file.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::File::File(const QtAndroidWrapper::String& pathname)
	: Object(QAndroidJniObject("java/io/File", "(Ljava/lang/String;)V", pathname.object<jstring>()))
{

}

QtAndroidWrapper::File::File(const QtAndroidWrapper::String& parent, const QtAndroidWrapper::String& child)
	: Object(QAndroidJniObject("java/io/File", "(Ljava/lang/String;Ljava/lang/String;)V", parent.object<jstring>(), child.object<jstring>()))
{

}

QtAndroidWrapper::File::File(const QtAndroidWrapper::File& parent, QtAndroidWrapper::String child)
	: Object(QAndroidJniObject("java/io/File", "(Ljava/io/File;)V", parent.object(), child.object<jstring>()))
{

}

jboolean QtAndroidWrapper::File::mkdir()
{
	return callMethod<jboolean>("mkdir", "()Z");
}

jboolean QtAndroidWrapper::File::mkdirs()
{
	return callMethod<jboolean>("mkdirs", "()Z");
}

QtAndroidWrapper::String QtAndroidWrapper::File::getAbsolutePath()
{
	return String(callObjectMethod("getAbsolutePath", "()Ljava/lang/String;"));
}

QtAndroidWrapper::String QtAndroidWrapper::File::getCanonicalPath()
{
	return String(callObjectMethod("getCanonicalPath", "()Ljava/lang/String;"));
}

QtAndroidWrapper::String QtAndroidWrapper::File::getPath()
{
	return String(callObjectMethod("getPath", "()Ljava/lang/String;"));
}

QtAndroidWrapper::String QtAndroidWrapper::File::toString()
{
	return String(callObjectMethod("toString", "()Ljava/lang/String;"));
}

QtAndroidWrapper::File::File(const QAndroidJniObject& object)
	: Object(object)
{

}
