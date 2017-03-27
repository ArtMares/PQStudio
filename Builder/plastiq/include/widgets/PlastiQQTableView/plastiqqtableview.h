#ifndef PLASTIQQTABLEVIEW_H
#define PLASTIQQTABLEVIEW_H

#include "plastiqobject.h"

class PlastiQQTableView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTableView,QAbstractItemView)
    PLASTIQ_INHERITS(QAbstractItemView)
public:    ~PlastiQQTableView();
};

#endif // PLASTIQQTABLEVIEW_H