#ifndef PLASTIQQABSTRACTSCROLLAREA_H
#define PLASTIQQABSTRACTSCROLLAREA_H

#include "plastiqobject.h"

class PlastiQQAbstractScrollArea : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QAbstractScrollArea,QFrame)
    PLASTIQ_INHERITS(QFrame)
public:    ~PlastiQQAbstractScrollArea();
};

#endif // PLASTIQQABSTRACTSCROLLAREA_H