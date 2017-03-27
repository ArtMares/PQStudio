#ifndef PLASTIQQGRAPHICSSCENEMOVEEVENT_H
#define PLASTIQQGRAPHICSSCENEMOVEEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneMoveEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneMoveEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneMoveEvent();
};

#endif // PLASTIQQGRAPHICSSCENEMOVEEVENT_H