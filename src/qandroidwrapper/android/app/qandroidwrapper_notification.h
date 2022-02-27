#ifndef QANDROIDWRAPPER_NOTIFICATION_H
#define QANDROIDWRAPPER_NOTIFICATION_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class NotificationCompatBuilder;

class Notification : public Object
{
public:
friend NotificationCompatBuilder;
	explicit Notification();

private:
	explicit Notification(const QAndroidJniObject& object);
};

}

#endif // NOTIFICATION_H
