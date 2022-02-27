#include "qandroidwrapper_manifest.h"

QtAndroidWrapper::Manifest::Manifest()
	: Object(QAndroidJniObject("android/Manifest", "()V"))
{

}
