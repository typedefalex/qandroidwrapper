#include "qandroidwrapper_context.h"

#include <QtAndroid>
#include <QAndroidJniEnvironment>

#include "android/content/res/qandroidwrapper_resources.h"
#include "qandroidwrapper_intent.h"
#include "qandroidwrapper_broadcastreceiver.h"
#include "qandroidwrapper_intentfilter.h"
#include "qandroidwrapper_componentname.h"
#include "android/content/pm/qandroidwrapper_packagemanager.h"
#include "java/io/qandroidwrapper_file.h"

QtAndroidWrapper::String QtAndroidWrapper::Context::LOCATION_SERVICE = QtAndroidWrapper::String("location");
QtAndroidWrapper::String QtAndroidWrapper::Context::NOTIFICATION_SERVICE = QtAndroidWrapper::String("notification");
QtAndroidWrapper::String QtAndroidWrapper::Context::POWER_SERVICE = QtAndroidWrapper::String("power");
QtAndroidWrapper::String QtAndroidWrapper::Context::TELEPHONY_SERVICE = QtAndroidWrapper::String("phone");
QtAndroidWrapper::String QtAndroidWrapper::Context::WIFI_SERVICE = QtAndroidWrapper::String("wifi");

//QtAndroidWrapper::String QtAndroidWrapper::Context::systemServicesToAndroid(QtAndroidWrapper::Context::SystemServices systemService)
//{
//	switch (systemService)
//	{
//		case NotificationService:
//			return String(QAndroidJniObject::getStaticObjectField<jstring>("android/content/Context", "NOTIFICATION_SERVICE"));
//	}

//	return String(QAndroidJniObject());
//}

QtAndroidWrapper::Context::Context(const QAndroidJniObject& object)
	: Object(object)
{

}

QtAndroidWrapper::Context QtAndroidWrapper::Context::androidContext()
{
	return Context(QtAndroid::androidContext());
}

QtAndroidWrapper::Resources QtAndroidWrapper::Context::getResources()
{
	return Resources(callObjectMethod("getResources", "()Landroid/content/res/Resources;"));
}

QString QtAndroidWrapper::Context::getPackageName()
{
	return callObjectMethod("getPackageName", "()Ljava/lang/String;").toString();
}

QtAndroidWrapper::PackageManager QtAndroidWrapper::Context::getPackageManager()
{
	return PackageManager(callObjectMethod("getPackageManager", "()Landroid/content/pm/PackageManager;"));
}

QtAndroidWrapper::Intent QtAndroidWrapper::Context::registerReceiver(const QtAndroidWrapper::BroadcastReceiver& receiver, const QtAndroidWrapper::IntentFilter& filter)
{
	return Intent(QAndroidJniObject(callObjectMethod("registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;", receiver.object(), filter.object())));
}

void QtAndroidWrapper::Context::startActivity(const QtAndroidWrapper::Intent& intent)
{
	return callMethod<void>("startActivity", "(Landroid/content/Intent;)V", intent.object());
}

QtAndroidWrapper::ComponentName QtAndroidWrapper::Context::startService(const QtAndroidWrapper::Intent& intent)
{
	return ComponentName(callObjectMethod("startService", "(Landroid/content/Intent;)Landroid/content/ComponentName;", intent.object()));
}

QtAndroidWrapper::ComponentName QtAndroidWrapper::Context::startForegroundService(const QtAndroidWrapper::Intent& intent)
{
	return ComponentName(callObjectMethod("startForegroundService", "(Landroid/content/Intent;)Landroid/content/ComponentName;", intent.object()));
}

bool QtAndroidWrapper::Context::stopService(const QtAndroidWrapper::Intent& intent)
{
	return callMethod<jboolean>("stopService", "(Landroid/content/Intent;)Z", intent.object());
}

QtAndroidWrapper::Context QtAndroidWrapper::Context::getApplicationContext()
{
	return Context(callObjectMethod("getApplicationContext", "()Landroid/content/Context;"));
}

QList<QtAndroidWrapper::File> QtAndroidWrapper::Context::getExternalMediaDirs()
{
	QAndroidJniObject array = callObjectMethod("getExternalMediaDirs", "()[Ljava/io/File;");

	QList<QtAndroidWrapper::File> list;

	if (!array.isValid())
		return list;

	QAndroidJniEnvironment env;

	int pathsArraySize = env->GetArrayLength(array.object<jarray>());

	for (int i = 0; i < pathsArraySize; i++)
	{
		QAndroidJniObject arrayElement = env->GetObjectArrayElement(array.object<jobjectArray>(), i);

		if (arrayElement.isValid())
			list << File(arrayElement);
	}

	return list;
}
