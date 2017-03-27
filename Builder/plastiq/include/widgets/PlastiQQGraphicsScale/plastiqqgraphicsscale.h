#ifndef PLASTIQQGRAPHICSSCALE_H
#define PLASTIQQGRAPHICSSCALE_H

#include "plastiqobject.h"

class PlastiQQGraphicsScale : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsScale,QGraphicsTransform)
    PLASTIQ_INHERITS(QGraphicsTransform)
public:    ~PlastiQQGraphicsScale();
};

#endif // PLASTIQQGRAPHICSSCALE_H