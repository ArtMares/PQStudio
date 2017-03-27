#ifndef PLASTIQQMATRIX4X4_H
#define PLASTIQQMATRIX4X4_H

#include "plastiqobject.h"

class PlastiQQMatrix4x4 : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMatrix4x4,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMatrix4x4();
};

#endif // PLASTIQQMATRIX4X4_H