#ifndef QANDROIDWRAPPER_CONTEXTCOMPAT_H
#define QANDROIDWRAPPER_CONTEXTCOMPAT_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class File;
class String;
class Context;

class ContextCompat : public Object
{
public:
	ContextCompat() = delete;
	ContextCompat(const QAndroidJniObject& object) = delete;

	static QList<File> getExternalFilesDirs(const Context& context, const String& type);
};

}

#endif // QANDROIDWRAPPER_CONTEXTCOMPAT_H
