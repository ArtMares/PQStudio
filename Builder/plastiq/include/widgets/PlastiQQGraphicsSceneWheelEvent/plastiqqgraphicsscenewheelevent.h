#ifndef PLASTIQQGRAPHICSSCENEWHEELEVENT_H
#define PLASTIQQGRAPHICSSCENEWHEELEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneWheelEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneWheelEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneWheelEvent();
};

#endif // PLASTIQQGRAPHICSSCENEWHEELEVENT_H