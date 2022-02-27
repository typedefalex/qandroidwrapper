#ifndef QANDROIDWRAPPER_TELEPHONYMANAGER_H
#define QANDROIDWRAPPER_TELEPHONYMANAGER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class Context;

class TelephonyManager : public Object
{
public:
friend Context;
	TelephonyManager() = delete;

	String getDeviceId();			//This method was deprecated in API level 26.
	String getDeviceId(jint slotIndex);			//This method was deprecated in API level 26.
	String getImei();				//API26
	String getImei(jint slotIndex);	//API26
	String getMeid();				//API26
	String getMeid(jint slotIndex);	//API26

private:
	explicit TelephonyManager(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_TELEPHONYMANAGER_H
