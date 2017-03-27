#ifndef PLASTIQQABSTRACTPROXYMODEL_H
#define PLASTIQQABSTRACTPROXYMODEL_H

#include "plastiqobject.h"

class PlastiQQAbstractProxyModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractProxyModel,QAbstractItemModel)
    PLASTIQ_INHERITS(QAbstractItemModel)
public:    ~PlastiQQAbstractProxyModel();
};

#endif // PLASTIQQABSTRACTPROXYMODEL_H