#ifndef PLASTIQQACCESSIBLEEVENT_H
#define PLASTIQQACCESSIBLEEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleEvent,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessibleEvent();
};

#endif // PLASTIQQACCESSIBLEEVENT_H