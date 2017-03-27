#ifndef PLASTIQQCOLUMNVIEW_H
#define PLASTIQQCOLUMNVIEW_H

#include "plastiqobject.h"

class PlastiQQColumnView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QColumnView,QAbstractItemView)
    PLASTIQ_INHERITS(QAbstractItemView)
public:    ~PlastiQQColumnView();
};

#endif // PLASTIQQCOLUMNVIEW_H