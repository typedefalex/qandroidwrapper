#include "qandroidwrapper_intentfilter.h"

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::IntentFilter::IntentFilter()
	: Object(QAndroidJniObject("android/content/IntentFilter", "()V"))
{

}

QtAndroidWrapper::IntentFilter::IntentFilter(const QAndroidJniObject& object)
	: Object(object)
{

}

QtAndroidWrapper::IntentFilter::IntentFilter(QtAndroidWrapper::String action)
	: Object(QAndroidJniObject("android/content/IntentFilter", "(Ljava/lang/String;)V",
						  action.object<jstring>()))
{

}

void QtAndroidWrapper::IntentFilter::addAction(QtAndroidWrapper::String action)
{
	return callMethod<void>("addAction", "(Ljava/lang/String;)V", action.object<jstring>());
}
