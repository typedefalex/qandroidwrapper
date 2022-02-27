#include "qandroidwrapper_ringtone.h"

QtAndroidWrapper::Ringtone::Ringtone(const QAndroidJniObject& object)
	: Object(object)
{

}

void QtAndroidWrapper::Ringtone::play()
{
	callMethod<void>("play", "()V");
}

void QtAndroidWrapper::Ringtone::stop()
{
	callMethod<void>("stop", "()V");
}
