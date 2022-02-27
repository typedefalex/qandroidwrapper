#ifndef QANDROIDWRAPPER_RINGTONEMANAGER_H
#define QANDROIDWRAPPER_RINGTONEMANAGER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Uri;
class Context;
class Activity;
class Ringtone;

class RingtoneManager : public Object
{
public:
	enum Type
	{
		TypeRingtone = 1,
		TypeNotification = 2,
		TypeAlarm = 4,
		TypeAll = 7
	};

	RingtoneManager() = delete;
	explicit RingtoneManager(const Context& context);
	explicit RingtoneManager(const Activity& activity);

	static Uri getDefaultUri(Type type);
	static Ringtone getRingtone(const Context& context, const Uri& ringtoneUri);

private:
	explicit RingtoneManager(const QAndroidJniObject& object);
};

}

#endif // RINGTONEMANAGER_H
