#ifndef PLASTIQQHEADERVIEW_H
#define PLASTIQQHEADERVIEW_H

#include "plastiqobject.h"

class PlastiQQHeaderView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QHeaderView,QAbstractItemView)
    PLASTIQ_INHERITS(QAbstractItemView)
public:    ~PlastiQQHeaderView();
};

#endif // PLASTIQQHEADERVIEW_H