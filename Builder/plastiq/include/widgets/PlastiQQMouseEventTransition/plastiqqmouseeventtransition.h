#ifndef PLASTIQQMOUSEEVENTTRANSITION_H
#define PLASTIQQMOUSEEVENTTRANSITION_H

#include "plastiqobject.h"

class PlastiQQMouseEventTransition : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMouseEventTransition,QEventTransition)
    PLASTIQ_INHERITS(QEventTransition)
public:    ~PlastiQQMouseEventTransition();
};

#endif // PLASTIQQMOUSEEVENTTRANSITION_H