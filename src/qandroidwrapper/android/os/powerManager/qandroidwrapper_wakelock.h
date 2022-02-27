#ifndef QANDROIDWRAPPER_WAKELOCK_H
#define QANDROIDWRAPPER_WAKELOCK_H

#include "java/lang/qandroidwrapper_object.h"
#include  "../qandroidwrapper_powermanager.h"

namespace QtAndroidWrapper
{

class PowerManager::WakeLock : public Object
{
public:
friend PowerManager;
	void acquire();
	bool isHeld();
	void release();
	String toString();

private:
	explicit WakeLock(const QAndroidJniObject& object);
	explicit WakeLock() = delete;
};

}

#endif // QANDROIDWRAPPER_WAKELOCK_H
