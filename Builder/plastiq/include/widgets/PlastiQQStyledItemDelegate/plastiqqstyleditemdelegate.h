#ifndef PLASTIQQSTYLEDITEMDELEGATE_H
#define PLASTIQQSTYLEDITEMDELEGATE_H

#include "plastiqobject.h"

class PlastiQQStyledItemDelegate : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QStyledItemDelegate,QAbstractItemDelegate)
    PLASTIQ_INHERITS(QAbstractItemDelegate)
public:    ~PlastiQQStyledItemDelegate();
};

#endif // PLASTIQQSTYLEDITEMDELEGATE_H