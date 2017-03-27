#ifndef PLASTIQQSORTFILTERPROXYMODEL_H
#define PLASTIQQSORTFILTERPROXYMODEL_H

#include "plastiqobject.h"

class PlastiQQSortFilterProxyModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSortFilterProxyModel,QAbstractProxyModel)
    PLASTIQ_INHERITS(QAbstractProxyModel)
public:    ~PlastiQQSortFilterProxyModel();
};

#endif // PLASTIQQSORTFILTERPROXYMODEL_H