#include "qandroidwrapper_notificationchannel.h"

#include "java/lang/qandroidwrapper_string.h"
#include "java/lang/qandroidwrapper_charsequence.h"

QtAndroidWrapper::NotificationChannel::NotificationChannel(const QAndroidJniObject& object)
	: Object(object)
{

}

QtAndroidWrapper::NotificationChannel::NotificationChannel(const String& id, const CharSequence& name, Importance importance)
	: Object(QAndroidJniObject("android/app/NotificationChannel", "(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
							   id.object<jstring>(),
							   name.object(),
							   jint(importance)))
{

}
