#ifndef PLASTIQQSIZEPOLICY_H
#define PLASTIQQSIZEPOLICY_H

#include "plastiqobject.h"

class PlastiQQSizePolicy : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSizePolicy,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSizePolicy();
};

#endif // PLASTIQQSIZEPOLICY_H