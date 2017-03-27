#ifndef PLASTIQQICONDRAGEVENT_H
#define PLASTIQQICONDRAGEVENT_H

#include "plastiqobject.h"

class PlastiQQIconDragEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QIconDragEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQIconDragEvent();
};

#endif // PLASTIQQICONDRAGEVENT_H