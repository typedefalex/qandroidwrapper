#include "qandroidwrapper_string.h"

QtAndroidWrapper::String::String(const QAndroidJniObject& object)
	: Object(object)
{

}

QtAndroidWrapper::String::String()
	: Object(QAndroidJniObject("java/lang/String"))
{

}

QtAndroidWrapper::String::String(const QString& string)
	: Object(QAndroidJniObject::fromString(string))
{

}
