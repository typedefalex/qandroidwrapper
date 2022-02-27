#ifndef QANDROIDWRAPPER_PERMISSION_H
#define QANDROIDWRAPPER_PERMISSION_H

#include "../qandroidwrapper_manifest.h"

namespace QtAndroidWrapper
{

class String;

class Manifest::permission : public Object
{
public:
	static String ACCESS_COARSE_LOCATION;
	static String ACCESS_FINE_LOCATION;
	static String ACCESS_NETWORK_STATE;
	static String CALL_PHONE;
	static String CAMERA;
	static String INTERNET;
	static String READ_EXTERNAL_STORAGE;
	static String READ_PHONE_STATE;
	static String WAKE_LOCK;
	static String WRITE_EXTERNAL_STORAGE;

	permission();
	permission(const QAndroidJniObject& object) = delete;
};

}

#endif // QANDROIDWRAPPER_PERMISSION_H
