#ifndef PLASTIQQSHORTCUTEVENT_H
#define PLASTIQQSHORTCUTEVENT_H

#include "plastiqobject.h"

class PlastiQQShortcutEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QShortcutEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQShortcutEvent();
};

#endif // PLASTIQQSHORTCUTEVENT_H