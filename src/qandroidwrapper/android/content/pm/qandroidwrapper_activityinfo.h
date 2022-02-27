#ifndef QANDROIDWRAPPER_ACTIVITYINFO_H
#define QANDROIDWRAPPER_ACTIVITYINFO_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

//TODO 	android.content.pm.PackageItemInfo ↳	android.content.pm.ComponentInfo ↳	android.content.pm.ActivityInfo
/*
		case AbstractPlatformDependentApplication::ScreenOrientationUnspecified:
			return QString("SCREEN_ORIENTATION_UNSPECIFIED");
		case AbstractPlatformDependentApplication::ScreenOrientationFullUser:
			return QString("SCREEN_ORIENTATION_FULL_USER");
		case AbstractPlatformDependentApplication::ScreenOrientationFullSensor:
			return QString("SCREEN_ORIENTATION_FULL_SENSOR");
		case AbstractPlatformDependentApplication::ScreenOrientationUser:
			return QString("SCREEN_ORIENTATION_USER");
		case AbstractPlatformDependentApplication::ScreenOrientationSensor:
			return QString("SCREEN_ORIENTATION_SENSOR");
		case AbstractPlatformDependentApplication::ScreenOrientationPortrait:
			return QString("SCREEN_ORIENTATION_PORTRAIT");
		case AbstractPlatformDependentApplication::ScreenOrientationLandscape:
			return QString("SCREEN_ORIENTATION_LANDSCAPE");
		case AbstractPlatformDependentApplication::ScreenOrientationReverseLandscape:
			return QString("SCREEN_ORIENTATION_REVERSE_LANDSCAPE");
		case AbstractPlatformDependentApplication::ScreenOrientationReversePortrait:
			return QString("SCREEN_ORIENTATION_REVERSE_PORTRAIT");
	}

	jint orientation = QAndroidJniObject::getStaticField<jint>("android/content/pm/ActivityInfo", orientationField.toUtf8().constData());
 */
class ActivityInfo : public Object
{
public:
	enum ScreenOrientation
	{
		ScreenOrientationUnspecified = -1,
		ScreenOrientationFullUser = 13,
		ScreenOrientationFullSensor = 10,
		ScreenOrientationUser = 2,
		ScreenOrientationSensor = 4,
		ScreenOrientationPortrait = 1,
		ScreenOrientationLandscape = 0,
		ScreenOrientationReverseLandscape = 8,
		ScreenOrientationReversePortrait  = 9
	};

	explicit ActivityInfo();

private:
	explicit ActivityInfo(const QAndroidJniObject& object);
};

};

#endif // ACTIVITYINFO_H
