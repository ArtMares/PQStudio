#ifndef PLASTIQQGRAPHICSROTATION_H
#define PLASTIQQGRAPHICSROTATION_H

#include "plastiqobject.h"

class PlastiQQGraphicsRotation : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGraphicsRotation,QGraphicsTransform)
    PLASTIQ_INHERITS(QGraphicsTransform)
public:    ~PlastiQQGraphicsRotation();
};

#endif // PLASTIQQGRAPHICSROTATION_H