#ifndef PLASTIQQACCESSIBLEVALUECHANGEEVENT_H
#define PLASTIQQACCESSIBLEVALUECHANGEEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleValueChangeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleValueChangeEvent,QAccessibleEvent)
    PLASTIQ_INHERITS(QAccessibleEvent)
public:    ~PlastiQQAccessibleValueChangeEvent();
};

#endif // PLASTIQQACCESSIBLEVALUECHANGEEVENT_H