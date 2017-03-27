#ifndef PLASTIQQSCROLLERPROPERTIES_H
#define PLASTIQQSCROLLERPROPERTIES_H

#include "plastiqobject.h"

class PlastiQQScrollerProperties : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QScrollerProperties,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQScrollerProperties();
};

#endif // PLASTIQQSCROLLERPROPERTIES_H