#ifndef QANDROIDWRAPPER_VERSION_CODES_H
#define QANDROIDWRAPPER_VERSION_CODES_H

#include "java/lang/qandroidwrapper_object.h"
#include "../qandroidwrapper_build.h"

namespace QtAndroidWrapper
{

class Build::VERSION_CODES : public Object
{
public:
	enum Code
	{
		JELLY_BEAN = 16,
		JELLY_BEAN_MR1 = 17,
		JELLY_BEAN_MR2 = 18,
		KITKAT = 19,
		KITKAT_WATCH = 20,
		LOLLIPOP = 21,
		LOLLIPOP_MR1 = 22,
		M = 23,
		N = 24,
		N_MR1 = 25,
		O = 26,
		O_MR1 = 27,
		P = 28
	};

	explicit VERSION_CODES();

private:
	explicit VERSION_CODES(const QAndroidJniObject& object);

};

}

#endif // QANDROIDWRAPPER_VERSION_CODES_H
