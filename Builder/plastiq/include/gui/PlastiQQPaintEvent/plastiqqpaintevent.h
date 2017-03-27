#ifndef PLASTIQQPAINTEVENT_H
#define PLASTIQQPAINTEVENT_H

#include "plastiqobject.h"

class PlastiQQPaintEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QPaintEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQPaintEvent();
};

#endif // PLASTIQQPAINTEVENT_H