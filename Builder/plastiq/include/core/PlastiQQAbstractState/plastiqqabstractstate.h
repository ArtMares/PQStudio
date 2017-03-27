#ifndef PLASTIQQABSTRACTSTATE_H
#define PLASTIQQABSTRACTSTATE_H

#include "plastiqobject.h"

class PlastiQQAbstractState : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractState,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractState();
};

#endif // PLASTIQQABSTRACTSTATE_H