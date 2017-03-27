#ifndef PLASTIQQGRAPHICSPOLYGONITEM_H
#define PLASTIQQGRAPHICSPOLYGONITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsPolygonItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsPolygonItem,QAbstractGraphicsShapeItem)
    PLASTIQ_INHERITS(QAbstractGraphicsShapeItem)
public:    ~PlastiQQGraphicsPolygonItem();
};

#endif // PLASTIQQGRAPHICSPOLYGONITEM_H