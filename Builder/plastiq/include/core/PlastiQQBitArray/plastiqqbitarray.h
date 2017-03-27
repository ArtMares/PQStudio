#ifndef PLASTIQQBITARRAY_H
#define PLASTIQQBITARRAY_H

#include "plastiqobject.h"

class PlastiQQBitArray : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QBitArray,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQBitArray();
};

#endif // PLASTIQQBITARRAY_H