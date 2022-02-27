#ifndef QANDROIDWRAPPER_BUILD_H
#define QANDROIDWRAPPER_BUILD_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;

class Build : public Object
{
public:
	Build() = delete;

	static String BOARD();
	static String BOOTLOADER();
	static String BRAND();
	static String DEVICE();
	static String DISPLAY();
	static String FINGERPRINT();
	static String HARDWARE();
	static String HOST();
	static String ID();
	static String MANUFACTURER();
	static String MODEL();
	static String PRODUCT();
	static QVector<String> SUPPORTED_32_BIT_ABIS();
	static QVector<String> SUPPORTED_64_BIT_ABIS();
	static QVector<String> SUPPORTED_ABIS();
	static String TAGS();
	static jlong TIME();
	static String TYPE();
	static String USER();

	static String getRadioVersion();
	static String getSerial();

	class VERSION;
	class VERSION_CODES;

private:
	static QVector<String> fromJobjectArray(const QAndroidJniObject& array);
};

}

#endif // BUILD_H
