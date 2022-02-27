#ifndef QANDROIDWRAPPER_CHARSEQUENCE_H
#define QANDROIDWRAPPER_CHARSEQUENCE_H

#include <QAndroidJniObject>

//TODO will it be refactoring?

namespace QtAndroidWrapper
{

class CharSequence : public QAndroidJniObject
{
public:
	explicit CharSequence(const QString& string);

private:
	explicit CharSequence(const QAndroidJniObject& object);
};

}

#endif // CHARSEQUENCE_H
