#ifndef PLASTIQQABSTRACTITEMMODEL_H
#define PLASTIQQABSTRACTITEMMODEL_H

#include "plastiqobject.h"

class PlastiQQAbstractItemModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractItemModel,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractItemModel();
};

#endif // PLASTIQQABSTRACTITEMMODEL_H