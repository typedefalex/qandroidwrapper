#ifndef QANDROIDWRAPPER_POWERMANAGER_H
#define QANDROIDWRAPPER_POWERMANAGER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class Context;

class PowerManager : public Object
{
public:
friend Context;
class WakeLock;

	enum WakeLockLevels
	{
		PARTIAL_WAKE_LOCK = 1,
		SCREEN_DIM_WAKE_LOCK = 6,
		SCREEN_BRIGHT_WAKE_LOCK = 10,
		FULL_WAKE_LOCK = 26
	};

	PowerManager() = delete;

	//TODO mb smart pointer for return
	WakeLock newWakeLock(jint levelAndFlags, const String& tag);

private:
	explicit PowerManager(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_POWERMANAGER_H
