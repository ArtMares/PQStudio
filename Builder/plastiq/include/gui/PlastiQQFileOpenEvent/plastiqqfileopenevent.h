#ifndef PLASTIQQFILEOPENEVENT_H
#define PLASTIQQFILEOPENEVENT_H

#include "plastiqobject.h"

class PlastiQQFileOpenEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QFileOpenEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQFileOpenEvent();
};

#endif // PLASTIQQFILEOPENEVENT_H