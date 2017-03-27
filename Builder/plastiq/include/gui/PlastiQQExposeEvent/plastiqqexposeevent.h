#ifndef PLASTIQQEXPOSEEVENT_H
#define PLASTIQQEXPOSEEVENT_H

#include "plastiqobject.h"

class PlastiQQExposeEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QExposeEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQExposeEvent();
};

#endif // PLASTIQQEXPOSEEVENT_H