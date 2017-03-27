#ifndef PLASTIQQVALIDATOR_H
#define PLASTIQQVALIDATOR_H

#include "plastiqobject.h"

class PlastiQQValidator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QValidator,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQValidator();
};

#endif // PLASTIQQVALIDATOR_H