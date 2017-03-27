#ifndef PLASTIQQDOUBLEVALIDATOR_H
#define PLASTIQQDOUBLEVALIDATOR_H

#include "plastiqobject.h"

class PlastiQQDoubleValidator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDoubleValidator,QValidator)
    PLASTIQ_INHERITS(QValidator)
public:    ~PlastiQQDoubleValidator();
};

#endif // PLASTIQQDOUBLEVALIDATOR_H