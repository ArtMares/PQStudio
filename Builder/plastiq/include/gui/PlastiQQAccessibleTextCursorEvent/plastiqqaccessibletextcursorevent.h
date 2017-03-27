#ifndef PLASTIQQACCESSIBLETEXTCURSOREVENT_H
#define PLASTIQQACCESSIBLETEXTCURSOREVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleTextCursorEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleTextCursorEvent,QAccessibleEvent)
    PLASTIQ_INHERITS(QAccessibleEvent)
public:    ~PlastiQQAccessibleTextCursorEvent();
};

#endif // PLASTIQQACCESSIBLETEXTCURSOREVENT_H