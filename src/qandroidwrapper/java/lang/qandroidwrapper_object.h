#ifndef QANDROIDWRAPPER_OBJECT_H
#define QANDROIDWRAPPER_OBJECT_H

#include <QAndroidJniObject>

namespace QtAndroidWrapper
{

class Class;

class Object : public QAndroidJniObject
{
public:
	Object() = delete;

	Class getClass();

protected:
	explicit Object(const QAndroidJniObject& object);
};

}

#endif // OBJECT_H
