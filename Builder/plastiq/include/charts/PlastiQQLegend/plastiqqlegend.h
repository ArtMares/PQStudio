#ifndef PLASTIQQLEGEND_H
#define PLASTIQQLEGEND_H

#include "plastiqobject.h"

class PlastiQQLegend : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLegend,QGraphicsWidget)
    PLASTIQ_INHERITS(QGraphicsWidget)
public:    ~PlastiQQLegend();
};

#endif // PLASTIQQLEGEND_H