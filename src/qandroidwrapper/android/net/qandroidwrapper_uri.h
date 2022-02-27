#ifndef QANDROIDWRAPPER_URI_H
#define QANDROIDWRAPPER_URI_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class File;
class Intent;
class String;
class RingtoneManager;

class Uri : public Object
{
public:
friend Intent;
friend RingtoneManager;

	Uri() = delete;

	static Uri parse(const String& uriString);
	static Uri fromFile(const File& file);

private:
	explicit Uri(const QAndroidJniObject& object);
};

}

#endif // URI_H
