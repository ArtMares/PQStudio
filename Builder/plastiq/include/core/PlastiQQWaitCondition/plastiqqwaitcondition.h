#ifndef PLASTIQQWAITCONDITION_H
#define PLASTIQQWAITCONDITION_H

#include "plastiqobject.h"

class PlastiQQWaitCondition : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWaitCondition,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWaitCondition();
};

#endif // PLASTIQQWAITCONDITION_H