#ifndef PLASTIQQPOINTF_H
#define PLASTIQQPOINTF_H

#include "plastiqobject.h"

class PlastiQQPointF : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPointF,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPointF();
};

#endif // PLASTIQQPOINTF_H