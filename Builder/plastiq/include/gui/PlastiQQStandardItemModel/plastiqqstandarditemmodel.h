#ifndef PLASTIQQSTANDARDITEMMODEL_H
#define PLASTIQQSTANDARDITEMMODEL_H

#include "plastiqobject.h"

class PlastiQQStandardItemModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QStandardItemModel,QAbstractItemModel)
    PLASTIQ_INHERITS(QAbstractItemModel)
public:    ~PlastiQQStandardItemModel();
};

#endif // PLASTIQQSTANDARDITEMMODEL_H