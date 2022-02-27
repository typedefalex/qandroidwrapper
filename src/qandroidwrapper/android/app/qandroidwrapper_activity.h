#ifndef QANDROIDWRAPPER_ACTIVITY_H
#define QANDROIDWRAPPER_ACTIVITY_H

#include "android/content/qandroidwrapper_context.h"
#include "android/content/pm/qandroidwrapper_activityinfo.h"

namespace QtAndroidWrapper
{

class Activity : public Context
{
public:
	explicit Activity();

	void finish();

	static Activity androidActivity();
	void setRequestedOrientation(ActivityInfo::ScreenOrientation requestedOrientation);

protected:
	explicit Activity(const QAndroidJniObject& object);
};

}

#endif // ACTIVITY_H
