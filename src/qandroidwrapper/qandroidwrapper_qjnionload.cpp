#include <android/log.h>
#include <QAndroidJniObject>
#include <jni.h>

#include <QDebug>

#include "android/content/qandroidwrapper_intent.h"
#include "android/content/qandroidwrapper_context.h"
#include "android/content/qandroidwrapper_broadcastreceiver.h"

namespace QtAndroidWrapper
{

class AndroidNative
{
public:
	AndroidNative() = delete;

	static void BroadcastReceiverOnRecive(JNIEnv* env, jobject thiz, jlong id, jobject context, jobject intent)
	{
		Q_UNUSED(env)
		Q_UNUSED(thiz)

		if (!id)
			return;

		return reinterpret_cast<BroadcastReceiver*>(id)->onRecive(Context(context), Intent(intent));
	}
};

}

static JNINativeMethod methods[] = {
	{"receive", "(JLandroid/content/Context;Landroid/content/Intent;)V", reinterpret_cast<void *>(QtAndroidWrapper::AndroidNative::BroadcastReceiverOnRecive)}
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* /*reserved*/)
{
	static bool initialized = false;
	if (initialized)
		return JNI_VERSION_1_6;
	initialized = true;

	typedef union {
		JNIEnv *nativeEnvironment;
		void *venv;
	} UnionJNIEnvToVoid;

	UnionJNIEnvToVoid uenv;
	uenv.venv = nullptr;

	if (vm->GetEnv(&uenv.venv, JNI_VERSION_1_4) != JNI_OK) {
		__android_log_print(ANDROID_LOG_FATAL, "Qt", "GetEnv failed");
		return -1;
	}

	JNIEnv *env = uenv.nativeEnvironment;
	jclass clazz;
	clazz = env->FindClass("org/qtproject/example/QtWrapperBroadcastReceiver");
	if (!clazz) {
		__android_log_print(ANDROID_LOG_FATAL,"Qt", "Can't find \"org/qtproject/example/QtWrapperBroadcastReceiver\" class");
		return -1;
	}

	if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) < 0) {
		__android_log_print(ANDROID_LOG_FATAL,"Qt", "RegisterNatives failed");
		return -1;
	}

	/*

	QAndroidJniObject javaClass("org/qtproject/example/QtWrapperBroadcastReceiver");
	QAndroidJniEnvironment env;
	jclass objectClass = env->GetObjectClass(javaClass.object<jobject>());
	env->RegisterNatives(objectClass,
						 methods,
						 sizeof(methods) / sizeof(methods[0]));
	env->DeleteLocalRef(objectClass);

	*/


	return JNI_VERSION_1_6;
}
