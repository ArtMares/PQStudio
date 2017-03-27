#ifndef PLASTIQQGRAPHICSLAYOUTITEM_H
#define PLASTIQQGRAPHICSLAYOUTITEM_H

#include "plastiqobject.h"

class PlastiQQGraphicsLayoutItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QGraphicsLayoutItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQGraphicsLayoutItem();
};

#endif // PLASTIQQGRAPHICSLAYOUTITEM_H