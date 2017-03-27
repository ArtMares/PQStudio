#ifndef PLASTIQQVECTOR2D_H
#define PLASTIQQVECTOR2D_H

#include "plastiqobject.h"

class PlastiQQVector2D : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVector2D,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVector2D();
};

#endif // PLASTIQQVECTOR2D_H