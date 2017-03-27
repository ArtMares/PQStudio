#ifndef PLASTIQQACCESSIBLESTATECHANGEEVENT_H
#define PLASTIQQACCESSIBLESTATECHANGEEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleStateChangeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleStateChangeEvent,QAccessibleEvent)
    PLASTIQ_INHERITS(QAccessibleEvent)
public:    ~PlastiQQAccessibleStateChangeEvent();
};

#endif // PLASTIQQACCESSIBLESTATECHANGEEVENT_H