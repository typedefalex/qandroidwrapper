#ifndef QANDROIDWRAPPER_WIFILOCK_H
#define QANDROIDWRAPPER_WIFILOCK_H

#include "java/lang/qandroidwrapper_object.h"
#include  "../qandroidwrapper_wifimanager.h"

namespace QtAndroidWrapper
{

class String;
class WifiManager;

class WifiManager::WifiLock : public Object
{
public:
friend WifiManager;
	explicit WifiLock() = delete;

	void acquire();
	bool isHeld();
	void release();
	String toString();

private:
	explicit WifiLock(const QAndroidJniObject& object);

};

}

#endif // QANDROIDWRAPPER_WIFILOCK_H
