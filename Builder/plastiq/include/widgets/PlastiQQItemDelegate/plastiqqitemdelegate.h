#ifndef PLASTIQQITEMDELEGATE_H
#define PLASTIQQITEMDELEGATE_H

#include "plastiqobject.h"

class PlastiQQItemDelegate : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QItemDelegate,QAbstractItemDelegate)
    PLASTIQ_INHERITS(QAbstractItemDelegate)
public:    ~PlastiQQItemDelegate();
};

#endif // PLASTIQQITEMDELEGATE_H