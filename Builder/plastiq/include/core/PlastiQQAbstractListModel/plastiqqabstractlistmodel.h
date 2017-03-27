#ifndef PLASTIQQABSTRACTLISTMODEL_H
#define PLASTIQQABSTRACTLISTMODEL_H

#include "plastiqobject.h"

class PlastiQQAbstractListModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractListModel,QAbstractItemModel)
    PLASTIQ_INHERITS(QAbstractItemModel)
public:    ~PlastiQQAbstractListModel();
};

#endif // PLASTIQQABSTRACTLISTMODEL_H