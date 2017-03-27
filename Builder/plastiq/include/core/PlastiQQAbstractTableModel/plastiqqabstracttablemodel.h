#ifndef PLASTIQQABSTRACTTABLEMODEL_H
#define PLASTIQQABSTRACTTABLEMODEL_H

#include "plastiqobject.h"

class PlastiQQAbstractTableModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractTableModel,QAbstractItemModel)
    PLASTIQ_INHERITS(QAbstractItemModel)
public:    ~PlastiQQAbstractTableModel();
};

#endif // PLASTIQQABSTRACTTABLEMODEL_H