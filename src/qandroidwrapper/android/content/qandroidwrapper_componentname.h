#ifndef QANDROIDWRAPPER_COMPONENTNAME_H
#define QANDROIDWRAPPER_COMPONENTNAME_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Context;

class ComponentName : public Object
{
friend Context;
public:

private:
	explicit ComponentName(const QAndroidJniObject& object);
};

}

#endif // COMPONENTNAME_H
