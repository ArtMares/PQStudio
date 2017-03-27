#ifndef PLASTIQQSTANDARDITEM_H
#define PLASTIQQSTANDARDITEM_H

#include "plastiqobject.h"

class PlastiQQStandardItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QStandardItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStandardItem();
};

#endif // PLASTIQQSTANDARDITEM_H