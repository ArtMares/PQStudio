#ifndef PLASTIQQSTATE_H
#define PLASTIQQSTATE_H

#include "plastiqobject.h"

class PlastiQQState : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QState,QAbstractState)
    PLASTIQ_INHERITS(QAbstractState)
public:    ~PlastiQQState();
};

#endif // PLASTIQQSTATE_H