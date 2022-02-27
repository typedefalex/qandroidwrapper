#ifndef QANDROIDWRAPPER_FILE_H
#define QANDROIDWRAPPER_FILE_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class Context;
class Environment;
class ContextCompat;

class File : public Object
{
public:
friend Context;
friend Environment;
friend ContextCompat;

	File() = delete;
	explicit File(const String& pathname);
	explicit File(const String& pathname, const String& child);
	explicit File(const File& parent, String child);

	jboolean mkdir();
	jboolean mkdirs();

	String getAbsolutePath();
	String getCanonicalPath();
	String getPath();
	String toString();

private:
	explicit File(const QAndroidJniObject& object);
};

}

#endif // QANDROIDWRAPPER_FILE_H
