#ifndef PLASTIQQGRAPHICSSCENEEVENT_H
#define PLASTIQQGRAPHICSSCENEEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneEvent,QEvent)
    PLASTIQ_INHERITS(QEvent)
public:    ~PlastiQQGraphicsSceneEvent();
};

#endif // PLASTIQQGRAPHICSSCENEEVENT_H