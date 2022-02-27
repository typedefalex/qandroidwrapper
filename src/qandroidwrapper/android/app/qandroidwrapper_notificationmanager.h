#ifndef QANDROIDWRAPPER_NOTIFICATIONMANAGER_H
#define QANDROIDWRAPPER_NOTIFICATIONMANAGER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Context;
class Notification;
class NotificationChannel;

class NotificationManager : public Object
{
public:
friend Context;
	NotificationManager() = delete;

	void createNotificationChannel(const NotificationChannel& notificationChannel);
	void notify(jint id, Notification notification);
	void cancel(jint id);
	void cancelAll();

private:
	explicit NotificationManager(const QAndroidJniObject& object);
};

}

#endif // NOTIFICATIONMANAGER_H
