#ifndef QANDROIDWRAPPER_VERSION_H
#define QANDROIDWRAPPER_VERSION_H

#include "java/lang/qandroidwrapper_object.h"
#include "../qandroidwrapper_build.h"

namespace QtAndroidWrapper
{

class Build::VERSION : public Object
{
public:
	explicit VERSION();

	static jint SDK_INT();

	//static int fromString(const QString& string); //TODO mb remove it

private:
	explicit VERSION(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_VERSION_H
