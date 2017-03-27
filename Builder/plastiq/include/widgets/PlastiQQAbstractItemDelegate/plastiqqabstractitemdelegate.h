#ifndef PLASTIQQABSTRACTITEMDELEGATE_H
#define PLASTIQQABSTRACTITEMDELEGATE_H

#include "plastiqobject.h"

class PlastiQQAbstractItemDelegate : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractItemDelegate,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractItemDelegate();
};

#endif // PLASTIQQABSTRACTITEMDELEGATE_H