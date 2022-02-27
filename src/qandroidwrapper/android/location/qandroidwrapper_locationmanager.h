#ifndef QANDROIDWRAPPER_LOCATIONMANAGER_H
#define QANDROIDWRAPPER_LOCATIONMANAGER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class Context;

class LocationManager : public Object
{
public:
friend Context;
	static String GPS_PROVIDER;

	LocationManager() = delete;

	jboolean isProviderEnabled(const String& provider);

private:
	LocationManager(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_LOCATIONMANAGER_H
