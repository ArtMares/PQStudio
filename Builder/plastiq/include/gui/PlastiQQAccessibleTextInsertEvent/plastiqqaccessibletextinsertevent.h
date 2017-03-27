#ifndef PLASTIQQACCESSIBLETEXTINSERTEVENT_H
#define PLASTIQQACCESSIBLETEXTINSERTEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleTextInsertEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleTextInsertEvent,QAccessibleTextCursorEvent)
    PLASTIQ_INHERITS(QAccessibleTextCursorEvent)
public:    ~PlastiQQAccessibleTextInsertEvent();
};

#endif // PLASTIQQACCESSIBLETEXTINSERTEVENT_H