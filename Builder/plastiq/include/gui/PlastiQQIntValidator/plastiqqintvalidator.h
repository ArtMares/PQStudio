#ifndef PLASTIQQINTVALIDATOR_H
#define PLASTIQQINTVALIDATOR_H

#include "plastiqobject.h"

class PlastiQQIntValidator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QIntValidator,QValidator)
    PLASTIQ_INHERITS(QValidator)
public:    ~PlastiQQIntValidator();
};

#endif // PLASTIQQINTVALIDATOR_H