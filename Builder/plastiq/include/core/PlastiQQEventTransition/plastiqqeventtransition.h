#ifndef PLASTIQQEVENTTRANSITION_H
#define PLASTIQQEVENTTRANSITION_H

#include "plastiqobject.h"

class PlastiQQEventTransition : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QEventTransition,QAbstractTransition)
    PLASTIQ_INHERITS(QAbstractTransition)
public:    ~PlastiQQEventTransition();
};

#endif // PLASTIQQEVENTTRANSITION_H