#ifndef PLASTIQQEVENTLOOPLOCKER_H
#define PLASTIQQEVENTLOOPLOCKER_H

#include "plastiqobject.h"

class PlastiQQEventLoopLocker : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QEventLoopLocker,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQEventLoopLocker();
};

#endif // PLASTIQQEVENTLOOPLOCKER_H