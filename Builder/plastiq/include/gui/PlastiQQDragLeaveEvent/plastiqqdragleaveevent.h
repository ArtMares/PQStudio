#ifndef PLASTIQQDRAGLEAVEEVENT_H
#define PLASTIQQDRAGLEAVEEVENT_H

#include "plastiqobject.h"

class PlastiQQDragLeaveEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QDragLeaveEvent,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDragLeaveEvent();
};

#endif // PLASTIQQDRAGLEAVEEVENT_H