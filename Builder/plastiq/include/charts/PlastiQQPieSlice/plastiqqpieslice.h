#ifndef PLASTIQQPIESLICE_H
#define PLASTIQQPIESLICE_H

#include "plastiqobject.h"

class PlastiQQPieSlice : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPieSlice,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQPieSlice();
};

#endif // PLASTIQQPIESLICE_H