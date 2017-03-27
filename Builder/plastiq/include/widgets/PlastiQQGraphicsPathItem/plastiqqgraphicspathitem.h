#ifndef PLASTIQQGRAPHICSPATHITEM_H
#define PLASTIQQGRAPHICSPATHITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsPathItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsPathItem,QAbstractGraphicsShapeItem)
    PLASTIQ_INHERITS(QAbstractGraphicsShapeItem)
public:    ~PlastiQQGraphicsPathItem();
};

#endif // PLASTIQQGRAPHICSPATHITEM_H