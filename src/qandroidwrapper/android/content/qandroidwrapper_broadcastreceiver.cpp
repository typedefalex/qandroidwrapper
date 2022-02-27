#include "qandroidwrapper_broadcastreceiver.h"

QtAndroidWrapper::BroadcastReceiver::BroadcastReceiver()
	: Object(QAndroidJniObject("org/qtproject/example/QtWrapperBroadcastReceiver", "(J)V", jlong(this)))
{

}

QtAndroidWrapper::BroadcastReceiver::~BroadcastReceiver()
{

}

QtAndroidWrapper::BroadcastReceiver::BroadcastReceiver(const QAndroidJniObject& object)
	: Object(object)
{

}
