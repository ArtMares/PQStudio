#ifndef PLASTIQQVECTOR4D_H
#define PLASTIQQVECTOR4D_H

#include "plastiqobject.h"

class PlastiQQVector4D : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVector4D,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVector4D();
};

#endif // PLASTIQQVECTOR4D_H