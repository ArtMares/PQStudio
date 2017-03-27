#ifndef PLASTIQQGRAPHICSPIXMAPITEM_H
#define PLASTIQQGRAPHICSPIXMAPITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsPixmapItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsPixmapItem,QGraphicsItem)
    PLASTIQ_INHERITS(QGraphicsItem)
public:    ~PlastiQQGraphicsPixmapItem();
};

#endif // PLASTIQQGRAPHICSPIXMAPITEM_H