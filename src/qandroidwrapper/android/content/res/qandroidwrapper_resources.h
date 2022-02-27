#ifndef QANDROIDWRAPPER_RESOURCES_H
#define QANDROIDWRAPPER_RESOURCES_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class Context;

class Resources : public Object
{
public:
friend Context;
	Resources() = delete;

	int getIdentifier(const String& name, const String& defType, const String& defPackage);

private:
	explicit Resources(const QAndroidJniObject& object);
};

}

#endif // RESOURCES_H
