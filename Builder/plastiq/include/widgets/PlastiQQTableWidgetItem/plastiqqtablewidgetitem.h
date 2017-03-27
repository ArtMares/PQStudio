#ifndef PLASTIQQTABLEWIDGETITEM_H
#define PLASTIQQTABLEWIDGETITEM_H

#include "plastiqobject.h"

class PlastiQQTableWidgetItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QTableWidgetItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTableWidgetItem();
};

#endif // PLASTIQQTABLEWIDGETITEM_H