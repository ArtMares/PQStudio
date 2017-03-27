#ifndef PLASTIQQWINJUMPLISTITEM_H
#define PLASTIQQWINJUMPLISTITEM_H

#include "plastiqobject.h"

class PlastiQQWinJumpListItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QWinJumpListItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWinJumpListItem();
};

#endif // PLASTIQQWINJUMPLISTITEM_H