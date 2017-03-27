#ifndef PLASTIQQSTATEMACHINE_H
#define PLASTIQQSTATEMACHINE_H

#include "plastiqobject.h"

class PlastiQQStateMachine : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStateMachine,QState)
    PLASTIQ_INHERITS(QState)
public:    ~PlastiQQStateMachine();
};

#endif // PLASTIQQSTATEMACHINE_H