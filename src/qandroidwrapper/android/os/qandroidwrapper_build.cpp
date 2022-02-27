#include "qandroidwrapper_build.h"

#include <QVector>
#include <QAndroidJniEnvironment>

#include "java/lang/qandroidwrapper_string.h"

QtAndroidWrapper::String QtAndroidWrapper::Build::BOARD()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "BOARD", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::BOOTLOADER()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "BOOTLOADER", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::BRAND()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "BRAND", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::DEVICE()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "DEVICE", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::DISPLAY()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "DISPLAY", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::FINGERPRINT()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "FINGERPRINT", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::HARDWARE()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "HARDWARE", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::HOST()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "HOST", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::ID()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "ID", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::MANUFACTURER()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "MANUFACTURER", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::MODEL()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "MODEL", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::PRODUCT()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "PRODUCT", "Ljava/lang/String;").object<jstring>());
}

QVector<QtAndroidWrapper::String> QtAndroidWrapper::Build::SUPPORTED_32_BIT_ABIS()
{
	QAndroidJniObject brandObject = QAndroidJniObject::getStaticObjectField("android/os/Build", "SUPPORTED_32_BIT_ABIS", "[Ljava/lang/String;");

	return fromJobjectArray(brandObject);
}

QVector<QtAndroidWrapper::String> QtAndroidWrapper::Build::SUPPORTED_64_BIT_ABIS()
{
	QAndroidJniObject brandObject = QAndroidJniObject::getStaticObjectField("android/os/Build", "SUPPORTED_64_BIT_ABIS", "[Ljava/lang/String;");

	return fromJobjectArray(brandObject);
}

QVector<QtAndroidWrapper::String> QtAndroidWrapper::Build::SUPPORTED_ABIS()
{
	QAndroidJniObject brandObject = QAndroidJniObject::getStaticObjectField("android/os/Build", "SUPPORTED_ABIS", "[Ljava/lang/String;");

	return fromJobjectArray(brandObject);
}

QtAndroidWrapper::String QtAndroidWrapper::Build::TAGS()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "TAGS", "Ljava/lang/String;").object<jstring>());
}

jlong QtAndroidWrapper::Build::TIME()
{
	return QAndroidJniObject::getStaticField<jlong>("android/os/Build", "BOARD");
}

QtAndroidWrapper::String QtAndroidWrapper::Build::TYPE()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "TYPE", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::USER()
{
	return String(QAndroidJniObject::getStaticObjectField("android/os/Build", "USER", "Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::getRadioVersion()
{
	return String(QAndroidJniObject::callStaticObjectMethod("android/os/Build", "getRadioVersion", "()Ljava/lang/String;").object<jstring>());
}

QtAndroidWrapper::String QtAndroidWrapper::Build::getSerial()
{
	return String(QAndroidJniObject::callStaticObjectMethod("android/os/Build", "getSerial", "()Ljava/lang/String;").object<jstring>());
}

QVector<QtAndroidWrapper::String> QtAndroidWrapper::Build::fromJobjectArray(const QAndroidJniObject& array)
{
	QAndroidJniEnvironment env;
	QVector<String> vector;

	int arraySize = env->GetArrayLength(array.object<jarray>());

	for (int i = 0; i < arraySize; i++)
	{
		QAndroidJniObject arrayElement = env->GetObjectArrayElement(array.object<jobjectArray>(), i);

		if (arrayElement.isValid())
			vector << String(arrayElement.object<jstring>());
	}

	return vector;
}

