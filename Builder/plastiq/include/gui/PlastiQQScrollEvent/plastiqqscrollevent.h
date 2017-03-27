#ifndef PLASTIQQSCROLLEVENT_H
#define PLASTIQQSCROLLEVENT_H

#include "plastiqobject.h"

class PlastiQQScrollEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QScrollEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQScrollEvent();
};

#endif // PLASTIQQSCROLLEVENT_H