#ifndef PLASTIQQTABLEWIDGET_H
#define PLASTIQQTABLEWIDGET_H

#include "plastiqobject.h"

class PlastiQQTableWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTableWidget,QTableView)
    PLASTIQ_INHERITS(QTableView)
public:    ~PlastiQQTableWidget();
};

#endif // PLASTIQQTABLEWIDGET_H