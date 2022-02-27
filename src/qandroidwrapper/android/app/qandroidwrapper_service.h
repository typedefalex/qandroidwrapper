#ifndef QANDROIDWRAPPER_SERVICE_H
#define QANDROIDWRAPPER_SERVICE_H

#include "android/content/qandroidwrapper_context.h"

namespace QtAndroidWrapper
{

class Notification;

class Service : public Context
{

public:
	static Service androidService();

	void startForeground(jint id, const Notification& notification);
	void stopForeground(int flags);
	void stopSelf();

private:
	explicit Service(const QAndroidJniObject& object);
};

}

#endif // SERVICE_H
