#ifndef PLASTIQQASSOCIATIVEITERABLE_H
#define PLASTIQQASSOCIATIVEITERABLE_H

#include "plastiqobject.h"

class PlastiQQAssociativeIterable : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAssociativeIterable,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAssociativeIterable();
};

#endif // PLASTIQQASSOCIATIVEITERABLE_H