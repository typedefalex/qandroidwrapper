#ifndef QANDROIDWRAPPER_INTENT_H
#define QANDROIDWRAPPER_INTENT_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Uri;
class Class;
class String;
class Context;
class AndroidNative;

class Intent : public Object
{
public:
static String ACTION_CALL;
static String ACTION_VIEW;

friend Context;
friend AndroidNative;

	enum Flag
	{
		ZERO = 0,
		FLAG_ACTIVITY_NEW_TASK = 268435456
	};
	Q_DECLARE_FLAGS(Flags, Flag)

	explicit Intent();
	explicit Intent(const String& action);
	explicit Intent(const Context& context, const Class& clazz);

	String getAction() const;
	Intent setAction(const String& action);

	Uri getData();
	Intent setData(const Uri& data);
	Intent setDataAndType(const Uri& data, const String& type);

	Intent setFlags(Flags flags);

private:
	explicit Intent(const QAndroidJniObject& object);
};

Q_DECLARE_OPERATORS_FOR_FLAGS(Intent::Flags)

}

#endif // INTENT_H
