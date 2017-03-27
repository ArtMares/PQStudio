#ifndef PLASTIQQLAYOUTITEM_H
#define PLASTIQQLAYOUTITEM_H

#include "plastiqobject.h"

class PlastiQQLayoutItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QLayoutItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQLayoutItem();
};

#endif // PLASTIQQLAYOUTITEM_H