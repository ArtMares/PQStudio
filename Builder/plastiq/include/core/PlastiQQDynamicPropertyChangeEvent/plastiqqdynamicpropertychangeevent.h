#ifndef PLASTIQQDYNAMICPROPERTYCHANGEEVENT_H
#define PLASTIQQDYNAMICPROPERTYCHANGEEVENT_H

#include "plastiqobject.h"

class PlastiQQDynamicPropertyChangeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QDynamicPropertyChangeEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQDynamicPropertyChangeEvent();
};

#endif // PLASTIQQDYNAMICPROPERTYCHANGEEVENT_H