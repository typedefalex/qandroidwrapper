#ifndef QANDROIDWRAPPER_INTENTFILTER_H
#define QANDROIDWRAPPER_INTENTFILTER_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class String;

class IntentFilter : public Object
{
public:
	explicit IntentFilter();
	explicit IntentFilter(String action);
	void addAction (String action);

private:
	explicit IntentFilter(const QAndroidJniObject& object);
};

}

#endif // INTENTFILTER_H
