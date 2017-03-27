#ifndef PLASTIQQGRAPHICSOBJECT_H
#define PLASTIQQGRAPHICSOBJECT_H

#include "plastiqobject.h"

class PlastiQQGraphicsObject : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsObject,QObject)
    PLASTIQ_INHERITS(QObject,QGraphicsItem)
public:    ~PlastiQQGraphicsObject();
};

#endif // PLASTIQQGRAPHICSOBJECT_H