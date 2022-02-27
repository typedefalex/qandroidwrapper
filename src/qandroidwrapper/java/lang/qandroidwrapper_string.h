#ifndef QANDROIDWRAPPER_STRING_H
#define QANDROIDWRAPPER_STRING_H

#include "qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class File;
class Build;
class Intent;
class Context;
class WifiManager;
class PackageInfo;
class PowerManager;
class TelephonyManager;


class String : public Object
{
public:
friend File;
friend Build;
friend Intent;
friend Context;
friend WifiManager;
friend PackageInfo;
friend PowerManager;
friend TelephonyManager;

	explicit String();
	explicit String(const QString& string);

private:
	explicit String(const QAndroidJniObject& object);
};

}

#endif // STRING_H
