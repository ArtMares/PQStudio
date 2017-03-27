#ifndef PLASTIQQRADIALGRADIENT_H
#define PLASTIQQRADIALGRADIENT_H

#include "plastiqobject.h"

class PlastiQQRadialGradient : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRadialGradient,QGradient)
    PLASTIQ_INHERITS(QGradient)
public:    ~PlastiQQRadialGradient();
};

#endif // PLASTIQQRADIALGRADIENT_H