#ifndef PLASTIQQLISTWIDGETITEM_H
#define PLASTIQQLISTWIDGETITEM_H

#include "plastiqobject.h"

class PlastiQQListWidgetItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QListWidgetItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQListWidgetItem();
};

#endif // PLASTIQQLISTWIDGETITEM_H