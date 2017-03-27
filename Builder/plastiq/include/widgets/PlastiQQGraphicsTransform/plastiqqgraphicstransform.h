#ifndef PLASTIQQGRAPHICSTRANSFORM_H
#define PLASTIQQGRAPHICSTRANSFORM_H

#include "plastiqobject.h"

class PlastiQQGraphicsTransform : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsTransform,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQGraphicsTransform();
};

#endif // PLASTIQQGRAPHICSTRANSFORM_H