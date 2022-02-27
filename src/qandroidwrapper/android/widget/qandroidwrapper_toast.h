#ifndef QANDROIDWRAPPER_TOAST_H
#define QANDROIDWRAPPER_TOAST_H

#include "java/lang/qandroidwrapper_object.h"

namespace QtAndroidWrapper
{

class Context;
class CharSequence;

class Toast : public Object
{
public:
	enum Duration
	{
		LenghtLong = 1,
		LenghtShort = 0
	};

	Toast() = delete;
	explicit Toast(const Context& context);

	void cancel();
	Duration getDuration();
	static Toast makeText(const Context& context, jint resId, Duration duration);
	static Toast makeText(const Context& context, const CharSequence& text, Duration duration);
	void setDuration(Duration duration);
	void setText(jint resId);
	void setText(const CharSequence& text);
	void show();

private:
	explicit Toast(const QAndroidJniObject& object);
};

}

#endif // TOAST_H
