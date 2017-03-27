#ifndef PLASTIQQACCESSIBLETEXTSELECTIONEVENT_H
#define PLASTIQQACCESSIBLETEXTSELECTIONEVENT_H

#include "plastiqobject.h"

class PlastiQQAccessibleTextSelectionEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QAccessibleTextSelectionEvent,QAccessibleTextCursorEvent)
    PLASTIQ_INHERITS(QAccessibleTextCursorEvent)
public:    ~PlastiQQAccessibleTextSelectionEvent();
};

#endif // PLASTIQQACCESSIBLETEXTSELECTIONEVENT_H