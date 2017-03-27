#ifndef PLASTIQQSCROLLAREA_H
#define PLASTIQQSCROLLAREA_H

#include "plastiqobject.h"

class PlastiQQScrollArea : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QScrollArea,QAbstractScrollArea)
    PLASTIQ_INHERITS(QAbstractScrollArea)
public:    ~PlastiQQScrollArea();
};

#endif // PLASTIQQSCROLLAREA_H