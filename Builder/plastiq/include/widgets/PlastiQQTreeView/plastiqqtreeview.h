#ifndef PLASTIQQTREEVIEW_H
#define PLASTIQQTREEVIEW_H

#include "plastiqobject.h"

class PlastiQQTreeView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTreeView,QAbstractItemView)
    PLASTIQ_INHERITS(QAbstractItemView)
public:    ~PlastiQQTreeView();
};

#endif // PLASTIQQTREEVIEW_H