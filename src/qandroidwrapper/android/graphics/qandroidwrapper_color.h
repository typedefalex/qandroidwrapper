#ifndef QANDROIDWRAPPER_COLOR_H
#define QANDROIDWRAPPER_COLOR_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Color : public Object
{
public:
	enum Colors
	{
		Black = -16777216,
		Blue = -16776961,
		Cyan = -16711681,
		Dkgray = -12303292,
		Gray = -7829368,
		Green = -16711936,
		Ltgray = -3355444,
		Magenta = -65281,
		Red = -65536,
		Transparent = 0,
		White = -1,
		Yellow = -256
	};

private:
	explicit Color(const QAndroidJniObject& object);
};

}

#endif // COLOR_H
