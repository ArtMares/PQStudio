#ifndef PLASTIQQFOCUSEVENT_H
#define PLASTIQQFOCUSEVENT_H

#include "plastiqobject.h"

class PlastiQQFocusEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QFocusEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQFocusEvent();
};

#endif // PLASTIQQFOCUSEVENT_H