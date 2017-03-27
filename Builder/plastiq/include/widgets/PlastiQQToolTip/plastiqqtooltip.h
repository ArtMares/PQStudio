#ifndef PLASTIQQTOOLTIP_H
#define PLASTIQQTOOLTIP_H

#include "plastiqobject.h"

class PlastiQQToolTip : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QToolTip,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQToolTip();
};

#endif // PLASTIQQTOOLTIP_H