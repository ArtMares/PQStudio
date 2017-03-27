#ifndef PLASTIQQLISTWIDGET_H
#define PLASTIQQLISTWIDGET_H

#include "plastiqobject.h"

class PlastiQQListWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QListWidget,QListView)
    PLASTIQ_INHERITS(QListView)
public:    ~PlastiQQListWidget();
};

#endif // PLASTIQQLISTWIDGET_H