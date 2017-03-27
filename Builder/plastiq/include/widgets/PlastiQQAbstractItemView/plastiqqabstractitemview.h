#ifndef PLASTIQQABSTRACTITEMVIEW_H
#define PLASTIQQABSTRACTITEMVIEW_H

#include "plastiqobject.h"

class PlastiQQAbstractItemView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QAbstractItemView,QAbstractScrollArea)
    PLASTIQ_INHERITS(QAbstractScrollArea)
public:    ~PlastiQQAbstractItemView();
};

#endif // PLASTIQQABSTRACTITEMVIEW_H