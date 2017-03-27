#ifndef PLASTIQQACCESSIBLETEXTUPDATEEVENT_H
#define PLASTIQQACCESSIBLETEXTUPDATEEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleTextUpdateEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleTextUpdateEvent,QAccessibleTextCursorEvent)
    PLASTIQ_INHERITS(QAccessibleTextCursorEvent)
public:    ~PlastiQQAccessibleTextUpdateEvent();
};

#endif // PLASTIQQACCESSIBLETEXTUPDATEEVENT_H