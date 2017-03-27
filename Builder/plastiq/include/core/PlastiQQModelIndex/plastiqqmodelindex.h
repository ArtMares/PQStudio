#ifndef PLASTIQQMODELINDEX_H
#define PLASTIQQMODELINDEX_H

#include "plastiqobject.h"

class PlastiQQModelIndex : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QModelIndex,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQModelIndex();
};

#endif // PLASTIQQMODELINDEX_H