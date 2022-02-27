#include "qandroidwrapper_intent.h"

#include "android/net/qandroidwrapper_uri.h"
#include "java/lang/qandroidwrapper_string.h"
#include "java/lang/qandroidwrapper_class.h"
#include "qandroidwrapper_context.h"

QtAndroidWrapper::String QtAndroidWrapper::Intent::ACTION_CALL = QtAndroidWrapper::String("android.intent.action.CALL");
QtAndroidWrapper::String QtAndroidWrapper::Intent::ACTION_VIEW = QtAndroidWrapper::String("android.intent.action.VIEW");

QtAndroidWrapper::Intent::Intent()
	: Object(QAndroidJniObject("android/content/Intent", "()V"))
{

}

QtAndroidWrapper::Intent::Intent(const QtAndroidWrapper::String& action)
	: Object(QAndroidJniObject("android/content/Intent", "(Ljava/lang/String;)V", action.object()))
{

}

QtAndroidWrapper::Intent::Intent(const QAndroidJniObject& object)
	: Object(object)
{

}

QtAndroidWrapper::Intent::Intent(const QtAndroidWrapper::Context& context, const QtAndroidWrapper::Class& clazz)
	: Object(QAndroidJniObject("android/content/Intent", "(Landroid/content/Context;Ljava/lang/Class;)V", context.object(), clazz.clazz()))
{

}

QtAndroidWrapper::String QtAndroidWrapper::Intent::getAction() const
{
	return String(QAndroidJniObject(callObjectMethod("getAction", "()Ljava/lang/String;")));
}

QtAndroidWrapper::Intent QtAndroidWrapper::Intent::setAction(const String& action)
{
	return Intent(QAndroidJniObject(callObjectMethod("setAction", "(Ljava/lang/String;)Landroid/content/Intent;", action.object<jstring>())));
}

QtAndroidWrapper::Uri QtAndroidWrapper::Intent::getData()
{
	return Uri(QAndroidJniObject(callObjectMethod("getData", "()Landroid/content/Intent;")));
}

QtAndroidWrapper::Intent QtAndroidWrapper::Intent::setData(const QtAndroidWrapper::Uri& data)
{
	return Intent(QAndroidJniObject(callObjectMethod("setData", "(Landroid/net/Uri;)Landroid/content/Intent;", data.object<jstring>())));
}

QtAndroidWrapper::Intent QtAndroidWrapper::Intent::setDataAndType(const QtAndroidWrapper::Uri& data, const QtAndroidWrapper::String& type)
{
	return Intent(callObjectMethod("setDataAndType", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;", data.object(), type.object<jstring>()));
}

QtAndroidWrapper::Intent QtAndroidWrapper::Intent::setFlags(Flags flags)
{
	return Intent(callObjectMethod("setFlags", "(I)Landroid/content/Intent;", static_cast<jint>(flags)));
}
