#include "qandroidwrapper_class.h"

#include <QString>

#include <QAndroidJniObject>
#include <QAndroidJniEnvironment>

QtAndroidWrapper::Class::Class(const jclass clazz)
	: clazz_(clazz)
{

}

QtAndroidWrapper::Class::Class(const char* className)
{
	QAndroidJniEnvironment env;

	jclass fclazz = env->FindClass(className);
	clazz_ = static_cast<jclass>(env->NewGlobalRef(fclazz));
	env->DeleteLocalRef(fclazz);
}

QtAndroidWrapper::Class::~Class()
{
	QAndroidJniEnvironment env;
	env->DeleteGlobalRef(clazz_);
}

QString QtAndroidWrapper::Class::getName()
{
	return QAndroidJniObject(clazz_).callObjectMethod("getName", "()Ljava/lang/String;").toString();
}

jclass QtAndroidWrapper::Class::clazz() const
{
	return clazz_;
}

void QtAndroidWrapper::Class::setClazz(jclass clazz)
{
	clazz_ = clazz;
}
