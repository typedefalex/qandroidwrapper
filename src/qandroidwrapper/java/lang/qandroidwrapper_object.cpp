#include "qandroidwrapper_object.h"

#include <QAndroidJniEnvironment>

#include "qandroidwrapper_class.h"

QtAndroidWrapper::Object::Object(const QAndroidJniObject& object)
	: QAndroidJniObject(object)
{

}

QtAndroidWrapper::Class QtAndroidWrapper::Object::getClass()
{
	QAndroidJniObject obj = callObjectMethod("getClass", "()Ljava/lang/Class;");
	QAndroidJniEnvironment env;
	jclass clazz = static_cast<jclass>(env->NewGlobalRef(obj.object<jclass>()));

	return QtAndroidWrapper::Class(clazz);
}
