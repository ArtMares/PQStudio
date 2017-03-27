#ifndef PLASTIQQWIDGETITEM_H
#define PLASTIQQWIDGETITEM_H

#include "plastiqobject.h"

class PlastiQQWidgetItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QWidgetItem,QLayoutItem)
    PLASTIQ_INHERITS(QLayoutItem)
public:    ~PlastiQQWidgetItem();
};

#endif // PLASTIQQWIDGETITEM_H