#ifndef PLASTIQQFINALSTATE_H
#define PLASTIQQFINALSTATE_H

#include "plastiqobject.h"

class PlastiQQFinalState : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QFinalState,QAbstractState)
    PLASTIQ_INHERITS(QAbstractState)
public:    ~PlastiQQFinalState();
};

#endif // PLASTIQQFINALSTATE_H