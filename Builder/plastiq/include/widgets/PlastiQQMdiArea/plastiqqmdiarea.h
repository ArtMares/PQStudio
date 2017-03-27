#ifndef PLASTIQQMDIAREA_H
#define PLASTIQQMDIAREA_H

#include "plastiqobject.h"

class PlastiQQMdiArea : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QMdiArea,QAbstractScrollArea)
    PLASTIQ_INHERITS(QAbstractScrollArea)
public:    ~PlastiQQMdiArea();
};

#endif // PLASTIQQMDIAREA_H