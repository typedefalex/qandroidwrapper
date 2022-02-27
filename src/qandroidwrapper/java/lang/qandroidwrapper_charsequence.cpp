#include "qandroidwrapper_charsequence.h"

QtAndroidWrapper::CharSequence::CharSequence(const QString& string)
	: QAndroidJniObject(QAndroidJniObject::fromString(string))
{

}

QtAndroidWrapper::CharSequence::CharSequence(const QAndroidJniObject& object)
	: QAndroidJniObject(object)
{

}
