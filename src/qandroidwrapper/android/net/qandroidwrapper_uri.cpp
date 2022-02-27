#include "qandroidwrapper_uri.h"

#include "java/io/qandroidwrapper_file.h"
#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::Uri QtAndroidWrapper::Uri::parse(const QtAndroidWrapper::String& uriString)
{
	return QtAndroidWrapper::Uri(callStaticObjectMethod("android/net/Uri", "parse", "(Ljava/lang/String;)Landroid/net/Uri;", uriString.object()));
}

QtAndroidWrapper::Uri QtAndroidWrapper::Uri::fromFile(const QtAndroidWrapper::File& file)
{
	return QtAndroidWrapper::Uri(callStaticObjectMethod("android/net/Uri", "fromFile", "(Ljava/io/File;)Landroid/net/Uri;", file.object()));
}

QtAndroidWrapper::Uri::Uri(const QAndroidJniObject& object)
	: Object(object)
{

}
