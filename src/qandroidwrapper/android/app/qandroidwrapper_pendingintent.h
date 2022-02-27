#ifndef QANDROIDWRAPPER_PENDINGINTENT_H
#define QANDROIDWRAPPER_PENDINGINTENT_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Intent;
class Context;

class PendingIntent : public Object
{
public:
	enum Flag
	{
		Zero = 0,
		FlagCancelCurrent = 268435456,
		FlagImmutable = 67108864,
		FlagNoCreate = 536870912,
		FlagOneShot = 1073741824,
		FlagUpdateCurrent = 134217728
	};

	PendingIntent() = delete;

	//TODO or any of the flags as supported by Intent.fillIn()
	static PendingIntent getActivity(const Context& context, jint requestCode, const Intent& intent, Flag flags);
	//TODO or any of the flags as supported by Intent.fillIn()
	static PendingIntent getBroadcast(const Context& context, jint requestCode, const Intent& intent, Flag flags);

private:
	explicit PendingIntent(const QAndroidJniObject& object);
};

}

#endif // PENDINGINTENT_H
