#ifndef PLASTIQQTREEWIDGET_H
#define PLASTIQQTREEWIDGET_H

#include "plastiqobject.h"

class PlastiQQTreeWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTreeWidget,QTreeView)
    PLASTIQ_INHERITS(QTreeView)
public:    ~PlastiQQTreeWidget();
};

#endif // PLASTIQQTREEWIDGET_H