#ifndef QANDROIDWRAPPER_PACKAGEMANAGER_H
#define QANDROIDWRAPPER_PACKAGEMANAGER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class Context;
class PackageInfo;

class PackageManager : public Object
{
public:
friend Context;
	//TODO complete it and mb Q_Flags
	enum PackageInfoFlag
	{
		Zero = 0
	};

	explicit PackageManager();
	PackageInfo getPackageInfo(const String& packageName, PackageInfoFlag flags);

private:
	explicit PackageManager(const QAndroidJniObject& object);
};

};

#endif // PACKAGEMANAGER_H
