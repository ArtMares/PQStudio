#ifndef PLASTIQQEASINGCURVE_H
#define PLASTIQQEASINGCURVE_H

#include "plastiqobject.h"

class PlastiQQEasingCurve : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QEasingCurve,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQEasingCurve();
};

#endif // PLASTIQQEASINGCURVE_H