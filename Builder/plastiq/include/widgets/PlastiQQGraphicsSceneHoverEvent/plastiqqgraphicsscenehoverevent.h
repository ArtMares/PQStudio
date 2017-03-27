#ifndef PLASTIQQGRAPHICSSCENEHOVEREVENT_H
#define PLASTIQQGRAPHICSSCENEHOVEREVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneHoverEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneHoverEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneHoverEvent();
};

#endif // PLASTIQQGRAPHICSSCENEHOVEREVENT_H