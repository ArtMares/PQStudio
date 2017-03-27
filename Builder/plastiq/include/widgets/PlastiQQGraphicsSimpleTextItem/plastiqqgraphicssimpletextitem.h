#ifndef PLASTIQQGRAPHICSSIMPLETEXTITEM_H
#define PLASTIQQGRAPHICSSIMPLETEXTITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsSimpleTextItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsSimpleTextItem,QAbstractGraphicsShapeItem)
    PLASTIQ_INHERITS(QAbstractGraphicsShapeItem)
public:    ~PlastiQQGraphicsSimpleTextItem();
};

#endif // PLASTIQQGRAPHICSSIMPLETEXTITEM_H