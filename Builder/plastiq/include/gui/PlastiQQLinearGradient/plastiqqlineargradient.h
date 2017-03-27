#ifndef PLASTIQQLINEARGRADIENT_H
#define PLASTIQQLINEARGRADIENT_H

#include "plastiqobject.h"

class PlastiQQLinearGradient : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QLinearGradient,QGradient)
    PLASTIQ_INHERITS(QGradient)
public:    ~PlastiQQLinearGradient();
};

#endif // PLASTIQQLINEARGRADIENT_H