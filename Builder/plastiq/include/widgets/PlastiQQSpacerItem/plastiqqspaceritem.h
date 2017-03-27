#ifndef PLASTIQQSPACERITEM_H
#define PLASTIQQSPACERITEM_H

#include "plastiqobject.h"

class PlastiQQSpacerItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QSpacerItem,QLayoutItem)
    PLASTIQ_INHERITS(QLayoutItem)
public:    ~PlastiQQSpacerItem();
};

#endif // PLASTIQQSPACERITEM_H