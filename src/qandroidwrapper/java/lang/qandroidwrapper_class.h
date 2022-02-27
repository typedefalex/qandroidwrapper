#ifndef QANDROIDWRAPPER_CLASS_H
#define QANDROIDWRAPPER_CLASS_H

#include "jni.h"

class QString;

namespace QtAndroidWrapper
{

class Object;

class Class
{
public:
friend class Object;
	explicit Class(const char* className);
	~Class();

	QString getName();

	jclass clazz() const;
	void setClazz(jclass clazz);

private:
	jclass clazz_;

	explicit Class(const jclass clazz);
};

}

#endif // CLASS_H
