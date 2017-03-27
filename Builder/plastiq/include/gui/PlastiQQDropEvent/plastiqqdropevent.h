#ifndef PLASTIQQDROPEVENT_H
#define PLASTIQQDROPEVENT_H

#include "plastiqobject.h"

class PlastiQQDropEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QDropEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQDropEvent();
};

#endif // PLASTIQQDROPEVENT_H