#ifndef PLASTIQQGRAPHICSGRIDLAYOUT_H
#define PLASTIQQGRAPHICSGRIDLAYOUT_H

#include "plastiqobject.h"

class PlastiQQGraphicsGridLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsGridLayout,QGraphicsLayout)
    PLASTIQ_INHERITS(QGraphicsLayout)
public:    ~PlastiQQGraphicsGridLayout();
};

#endif // PLASTIQQGRAPHICSGRIDLAYOUT_H