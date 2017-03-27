#ifndef PLASTIQQCOLLATOR_H
#define PLASTIQQCOLLATOR_H

#include "plastiqobject.h"

class PlastiQQCollator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCollator,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCollator();
};

#endif // PLASTIQQCOLLATOR_H