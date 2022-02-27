#ifndef QANDROIDWRAPPER_RINGTONE_H
#define QANDROIDWRAPPER_RINGTONE_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class RingtoneManager;

class Ringtone : public Object
{
public:
friend RingtoneManager;

	Ringtone() = delete;

	void play();
	void stop();

private:
	explicit Ringtone(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_RINGTONE_H
