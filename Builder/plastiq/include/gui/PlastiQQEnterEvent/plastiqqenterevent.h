#ifndef PLASTIQQENTEREVENT_H
#define PLASTIQQENTEREVENT_H

#include "plastiqobject.h"

class PlastiQQEnterEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QEnterEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQEnterEvent();
};

#endif // PLASTIQQENTEREVENT_H