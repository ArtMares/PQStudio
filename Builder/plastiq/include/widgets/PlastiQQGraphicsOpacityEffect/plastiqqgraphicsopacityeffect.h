#ifndef PLASTIQQGRAPHICSOPACITYEFFECT_H
#define PLASTIQQGRAPHICSOPACITYEFFECT_H

#include "plastiqobject.h"

class PlastiQQGraphicsOpacityEffect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsOpacityEffect,QGraphicsEffect)
    PLASTIQ_INHERITS(QGraphicsEffect)
public:    ~PlastiQQGraphicsOpacityEffect();
};

#endif // PLASTIQQGRAPHICSOPACITYEFFECT_H