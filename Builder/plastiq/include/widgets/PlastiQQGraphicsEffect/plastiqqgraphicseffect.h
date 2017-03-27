#ifndef PLASTIQQGRAPHICSEFFECT_H
#define PLASTIQQGRAPHICSEFFECT_H

#include "plastiqobject.h"

class PlastiQQGraphicsEffect : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsEffect,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQGraphicsEffect();
};

#endif // PLASTIQQGRAPHICSEFFECT_H