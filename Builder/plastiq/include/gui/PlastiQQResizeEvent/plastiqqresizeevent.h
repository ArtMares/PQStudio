#ifndef PLASTIQQRESIZEEVENT_H
#define PLASTIQQRESIZEEVENT_H

#include "plastiqobject.h"

class PlastiQQResizeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QResizeEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQResizeEvent();
};

#endif // PLASTIQQRESIZEEVENT_H