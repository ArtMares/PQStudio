#ifndef PLASTIQQACCESSIBLETEXTREMOVEEVENT_H
#define PLASTIQQACCESSIBLETEXTREMOVEEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleTextRemoveEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleTextRemoveEvent,QAccessibleTextCursorEvent)
    PLASTIQ_INHERITS(QAccessibleTextCursorEvent)
public:    ~PlastiQQAccessibleTextRemoveEvent();
};

#endif // PLASTIQQACCESSIBLETEXTREMOVEEVENT_H