#ifndef PLASTIQQGRAPHICSSCENECONTEXTMENUEVENT_H
#define PLASTIQQGRAPHICSSCENECONTEXTMENUEVENT_H

#include "plastiqobject.h"

class PlastiQQGraphicsSceneContextMenuEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QGraphicsSceneContextMenuEvent,QGraphicsSceneEvent)
    PLASTIQ_INHERITS(QGraphicsSceneEvent)
public:    ~PlastiQQGraphicsSceneContextMenuEvent();
};

#endif // PLASTIQQGRAPHICSSCENECONTEXTMENUEVENT_H