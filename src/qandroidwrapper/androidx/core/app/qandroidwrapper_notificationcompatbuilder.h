#ifndef QANDROIDWRAPPER_NOTIFICATIONCOMPATBUILDER_H
#define QANDROIDWRAPPER_NOTIFICATIONCOMPATBUILDER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Uri;
class String;
class Context;
class CharSequence;
class Notification;
class PendingIntent;

class NotificationCompatBuilder : public Object
{

public:
	NotificationCompatBuilder() = delete;
	explicit NotificationCompatBuilder(const Context& context, const String& channelId);

	NotificationCompatBuilder addAction(jint icon, const CharSequence& title, const PendingIntent& intent);
	NotificationCompatBuilder setAutoCancel(bool autoCancel);
	NotificationCompatBuilder setContentTitle(const CharSequence& title);
	NotificationCompatBuilder setSmallIcon(jint icon);
	NotificationCompatBuilder setContentText(const CharSequence& text);
	NotificationCompatBuilder setContentIntent(const PendingIntent& pendingIntent);
	NotificationCompatBuilder setOnlyAlertOnce(bool onlyAlertOnce);
	NotificationCompatBuilder setLights(jint argb, jint onMs, jint offMs);
	NotificationCompatBuilder setVibrate (jlongArray pattern);
	NotificationCompatBuilder setSound (const Uri& sound);
	NotificationCompatBuilder setSound (const Uri& sound, jint streamType);

	Notification build();

private:
	explicit NotificationCompatBuilder(const QAndroidJniObject& object);
};

}

#endif // NOTIFICATIONCOMPATBUILDER_H
