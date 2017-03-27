#ifndef PLASTIQQTRANSFORM_H
#define PLASTIQQTRANSFORM_H

#include "plastiqobject.h"

class PlastiQQTransform : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTransform,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTransform();
};

#endif // PLASTIQQTRANSFORM_H