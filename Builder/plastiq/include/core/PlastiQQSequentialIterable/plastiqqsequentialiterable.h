#ifndef PLASTIQQSEQUENTIALITERABLE_H
#define PLASTIQQSEQUENTIALITERABLE_H

#include "plastiqobject.h"

class PlastiQQSequentialIterable : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSequentialIterable,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSequentialIterable();
};

#endif // PLASTIQQSEQUENTIALITERABLE_H