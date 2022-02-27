#ifndef QANDROIDWRAPPER_SETTINGS_H
#define QANDROIDWRAPPER_SETTINGS_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;

class Settings : public Object
{
public:
	static String ACTION_APPLICATION_DETAILS_SETTINGS;
	static String ACTION_LOCATION_SOURCE_SETTINGS;

	explicit Settings();

private:
	explicit Settings(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_SETTINGS_H
