#ifndef QANDROIDWRAPPER_ENVIRONMENT_H
#define QANDROIDWRAPPER_ENVIRONMENT_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class File;

class Environment : public Object
{
public:
	explicit Environment();

	static File getExternalStorageDirectory();

private:
	explicit Environment(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_ENVIRONMENT_H
