#include "qandroidwrapper_contextcompat.h"

#include <QAndroidJniEnvironment>

#include "java/io/qandroidwrapper_file.h"
#include "java/lang/qandroidwrapper_string.h"

#include "android/content/qandroidwrapper_context.h"

QList<QtAndroidWrapper::File> QtAndroidWrapper::ContextCompat::getExternalFilesDirs(const QtAndroidWrapper::Context& context, const QtAndroidWrapper::String& type)
{
	QAndroidJniObject filesArray = QAndroidJniObject::callStaticObjectMethod("android.support.v4.content.ContextCompat",
																			 "getExternalFilesDirs", "(Landroid/content/Context;Ljava/lang/String;)[Ljava/io/File;",
																			 context.object(), type.object<jstring>());

	QList<QtAndroidWrapper::File> list;

	if (!filesArray.isValid())
		return list;

	QAndroidJniEnvironment env;

	int filesArraySize = env->GetArrayLength(filesArray.object<jarray>());

	for (int i = 0; i < filesArraySize; i++)
	{
		QAndroidJniObject arrayElement = env->GetObjectArrayElement(filesArray.object<jobjectArray>(), i);

		if ( arrayElement.isValid() )
		list << QtAndroidWrapper::File(arrayElement);
	}

	return list;
}
