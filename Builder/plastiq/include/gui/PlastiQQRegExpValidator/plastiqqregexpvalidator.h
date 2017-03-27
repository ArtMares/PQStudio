#ifndef PLASTIQQREGEXPVALIDATOR_H
#define PLASTIQQREGEXPVALIDATOR_H

#include "plastiqobject.h"

class PlastiQQRegExpValidator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRegExpValidator,QValidator)
    PLASTIQ_INHERITS(QValidator)
public:    ~PlastiQQRegExpValidator();
};

#endif // PLASTIQQREGEXPVALIDATOR_H