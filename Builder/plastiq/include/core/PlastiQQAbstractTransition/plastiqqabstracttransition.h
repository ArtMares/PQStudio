#ifndef PLASTIQQABSTRACTTRANSITION_H
#define PLASTIQQABSTRACTTRANSITION_H

#include "plastiqobject.h"

class PlastiQQAbstractTransition : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractTransition,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractTransition();
};

#endif // PLASTIQQABSTRACTTRANSITION_H