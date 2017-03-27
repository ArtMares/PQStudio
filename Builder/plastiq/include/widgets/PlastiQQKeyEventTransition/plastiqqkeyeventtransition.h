#ifndef PLASTIQQKEYEVENTTRANSITION_H
#define PLASTIQQKEYEVENTTRANSITION_H

#include "plastiqobject.h"

class PlastiQQKeyEventTransition : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QKeyEventTransition,QEventTransition)
    PLASTIQ_INHERITS(QEventTransition)
public:    ~PlastiQQKeyEventTransition();
};

#endif // PLASTIQQKEYEVENTTRANSITION_H