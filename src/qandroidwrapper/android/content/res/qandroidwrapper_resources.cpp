#include "qandroidwrapper_resources.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::Resources::Resources(const QAndroidJniObject& object)
	: Object(object)
{

}

int QtAndroidWrapper::Resources::getIdentifier(const String& name, const String& defType, const String& defPackage)
{
	return callMethod<jint>("getIdentifier", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
					 name.object<jstring>(),
					 defType.object<jstring>(),
					 defPackage.object<jstring>());
}
