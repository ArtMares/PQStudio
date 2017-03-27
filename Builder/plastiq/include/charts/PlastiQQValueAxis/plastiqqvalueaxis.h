#ifndef PLASTIQQVALUEAXIS_H
#define PLASTIQQVALUEAXIS_H

#include "plastiqobject.h"

class PlastiQQValueAxis : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QValueAxis,QAbstractAxis)
    PLASTIQ_INHERITS(QAbstractAxis)
public:    ~PlastiQQValueAxis();
};

#endif // PLASTIQQVALUEAXIS_H