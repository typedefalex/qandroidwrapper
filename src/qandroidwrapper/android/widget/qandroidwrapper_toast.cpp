#include "qandroidwrapper_toast.h"

#include "android/content/qandroidwrapper_context.h"
#include "java/lang/qandroidwrapper_charsequence.h"

QtAndroidWrapper::Toast::Toast(const QtAndroidWrapper::Context& context)
	: Object(QAndroidJniObject("android/widget/Toast", "(Landroid/content/Context;)V", context.object()))
{

}

void QtAndroidWrapper::Toast::cancel()
{
	return callMethod<void>("cancel", "()V");
}

QtAndroidWrapper::Toast::Duration QtAndroidWrapper::Toast::getDuration()
{
	return static_cast<Duration>(callMethod<jint>("getDuration", "()I"));
}

QtAndroidWrapper::Toast QtAndroidWrapper::Toast::makeText(const QtAndroidWrapper::Context& context, jint resId, QtAndroidWrapper::Toast::Duration duration)
{
	return Toast(QAndroidJniObject::callStaticObjectMethod("android/widget/Toast", "makeText", "(Landroid/content/Context;II)Landroid/widget/Toast;",
														   context.object(), resId, jint(duration)));
}

QtAndroidWrapper::Toast QtAndroidWrapper::Toast::makeText(const QtAndroidWrapper::Context& context, const CharSequence& text, Duration duration)
{
	return Toast(QAndroidJniObject::callStaticObjectMethod("android/widget/Toast", "makeText", "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
														   context.object(), text.object(), jint(duration)));
}

void QtAndroidWrapper::Toast::setDuration(QtAndroidWrapper::Toast::Duration duration)
{
	return callMethod<void>("setDuration", "(I)V", jint(duration));
}

void QtAndroidWrapper::Toast::setText(jint resId)
{
	return callMethod<void>("setText", "(I)V", resId);
}

void QtAndroidWrapper::Toast::setText(const QtAndroidWrapper::CharSequence& text)
{
	return callMethod<void>("setText", "(Ljava/lang/CharSequence;)V", text.object());
}

void QtAndroidWrapper::Toast::show()
{
	return callMethod<void>("show", "()V");
}

QtAndroidWrapper::Toast::Toast(const QAndroidJniObject& object)
	: Object(object)
{

}
