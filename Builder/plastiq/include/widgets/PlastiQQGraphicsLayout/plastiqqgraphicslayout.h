#ifndef PLASTIQQGRAPHICSLAYOUT_H
#define PLASTIQQGRAPHICSLAYOUT_H

#include "plastiqobject.h"

class PlastiQQGraphicsLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsLayout,QGraphicsLayoutItem)
    PLASTIQ_INHERITS(QGraphicsLayoutItem)
public:    ~PlastiQQGraphicsLayout();
};

#endif // PLASTIQQGRAPHICSLAYOUT_H