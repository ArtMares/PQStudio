#ifndef PLASTIQQBARSET_H
#define PLASTIQQBARSET_H

#include "plastiqobject.h"

class PlastiQQBarSet : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBarSet,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQBarSet();
};

#endif // PLASTIQQBARSET_H