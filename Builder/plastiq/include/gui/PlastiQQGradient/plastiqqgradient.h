#ifndef PLASTIQQGRADIENT_H
#define PLASTIQQGRADIENT_H

#include "plastiqobject.h"

class PlastiQQGradient : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QGradient,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQGradient();
};

#endif // PLASTIQQGRADIENT_H