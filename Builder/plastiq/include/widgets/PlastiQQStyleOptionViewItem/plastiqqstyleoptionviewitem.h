#ifndef PLASTIQQSTYLEOPTIONVIEWITEM_H
#define PLASTIQQSTYLEOPTIONVIEWITEM_H

#include "plastiqobject.h"

class PlastiQQStyleOptionViewItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QStyleOptionViewItem,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionViewItem();
};

#endif // PLASTIQQSTYLEOPTIONVIEWITEM_H