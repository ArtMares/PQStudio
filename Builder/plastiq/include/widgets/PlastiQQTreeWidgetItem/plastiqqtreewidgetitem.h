#ifndef PLASTIQQTREEWIDGETITEM_H
#define PLASTIQQTREEWIDGETITEM_H

#include "plastiqobject.h"

class PlastiQQTreeWidgetItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QTreeWidgetItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTreeWidgetItem();
};

#endif // PLASTIQQTREEWIDGETITEM_H