#ifndef PLASTIQQLISTVIEW_H
#define PLASTIQQLISTVIEW_H

#include "plastiqobject.h"

class PlastiQQListView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QListView,QAbstractItemView)
    PLASTIQ_INHERITS(QAbstractItemView)
public:    ~PlastiQQListView();
};

#endif // PLASTIQQLISTVIEW_H