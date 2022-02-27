#ifndef QANDROIDWRAPPER_MANIFEST_H
#define QANDROIDWRAPPER_MANIFEST_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Manifest : public Object
{
public:
	Manifest();
	Manifest(const QAndroidJniObject& object) = delete;

	class permission;
};

}

#endif // QANDROIDWRAPPER_MANIFEST_H
