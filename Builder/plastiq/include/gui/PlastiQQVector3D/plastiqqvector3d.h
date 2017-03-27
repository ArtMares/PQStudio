#ifndef PLASTIQQVECTOR3D_H
#define PLASTIQQVECTOR3D_H

#include "plastiqobject.h"

class PlastiQQVector3D : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVector3D,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVector3D();
};

#endif // PLASTIQQVECTOR3D_H