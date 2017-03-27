#ifndef PLASTIQQCONICALGRADIENT_H
#define PLASTIQQCONICALGRADIENT_H

#include "plastiqobject.h"

class PlastiQQConicalGradient : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QConicalGradient,QGradient)
    PLASTIQ_INHERITS(QGradient)
public:    ~PlastiQQConicalGradient();
};

#endif // PLASTIQQCONICALGRADIENT_H