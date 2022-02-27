#ifndef QANDROIDWRAPPER_PACKAGEINFO_H
#define QANDROIDWRAPPER_PACKAGEINFO_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class PackageManager;

class PackageInfo : public Object
{
public:
friend PackageManager;
	explicit PackageInfo();

	String versionName();

private:
	explicit PackageInfo(const QAndroidJniObject& object);
};

};

#endif // PACKAGEINFO_H
