#ifndef PLASTIQQLOGVALUEAXIS_H
#define PLASTIQQLOGVALUEAXIS_H

#include "plastiqobject.h"

class PlastiQQLogValueAxis : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLogValueAxis,QAbstractAxis)
    PLASTIQ_INHERITS(QAbstractAxis)
public:    ~PlastiQQLogValueAxis();
};

#endif // PLASTIQQLOGVALUEAXIS_H