#ifndef PLASTIQQABSTRACTGRAPHICSSHAPEITEM_H
#define PLASTIQQABSTRACTGRAPHICSSHAPEITEM_H

#include "plastiqobject.h"

class PlastiQQAbstractGraphicsShapeItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QAbstractGraphicsShapeItem,QGraphicsItem)
    PLASTIQ_INHERITS(QGraphicsItem)
public:    ~PlastiQQAbstractGraphicsShapeItem();
};

#endif // PLASTIQQABSTRACTGRAPHICSSHAPEITEM_H