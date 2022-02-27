#ifndef QANDROIDWRAPPER_NOTIFICATIONCHANNEL_H
#define QANDROIDWRAPPER_NOTIFICATIONCHANNEL_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;
class CharSequence;

class NotificationChannel : public Object
{
public:
	enum Importance
	{
		ImportanceDefault = 3,
		ImportanceHigh = 4,
		ImportanceLow = 2,
		ImportanceMax = 5,
		ImportanceMin = 1,
		ImportanceNone = 0,
		ImportanceUnspecified = -1000
	};

	explicit NotificationChannel(const String& id, const CharSequence& name, Importance importance);

private:
	explicit NotificationChannel(const QAndroidJniObject& object);
};

}

#endif // NOTIFICATIONCHANNEL_H
