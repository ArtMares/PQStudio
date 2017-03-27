#ifndef PLASTIQQVARIANT_H
#define PLASTIQQVARIANT_H

#include "plastiqobject.h"

class PlastiQQVariant : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVariant,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVariant();
};

#endif // PLASTIQQVARIANT_H