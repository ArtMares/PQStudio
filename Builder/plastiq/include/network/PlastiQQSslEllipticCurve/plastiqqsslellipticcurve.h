#ifndef PLASTIQQSSLELLIPTICCURVE_H
#define PLASTIQQSSLELLIPTICCURVE_H

#include "plastiqobject.h"

class PlastiQQSslEllipticCurve : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslEllipticCurve,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslEllipticCurve();
};

#endif // PLASTIQQSSLELLIPTICCURVE_H