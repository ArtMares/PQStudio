#ifndef PLASTIQQACCESSIBLETABLECELLINTERFACE_H
#define PLASTIQQACCESSIBLETABLECELLINTERFACE_H

#include "plastiqobject.h"

class PlastiQQAccessibleTableCellInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleTableCellInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessibleTableCellInterface();
};

#endif // PLASTIQQACCESSIBLETABLECELLINTERFACE_H