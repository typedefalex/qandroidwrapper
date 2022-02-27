#ifndef QANDROIDWRAPPER_BROADCASTRECEIVER_H
#define QANDROIDWRAPPER_BROADCASTRECEIVER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Intent;
class Context;

class BroadcastReceiver : public Object
{
public:
	explicit BroadcastReceiver();
	virtual ~BroadcastReceiver();

	virtual void onRecive(const Context& context, const Intent& intent) = 0;

private:
	explicit BroadcastReceiver(const QAndroidJniObject& object);
};

}

#endif // BROADCASTRECEIVER_H
