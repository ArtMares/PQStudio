#ifndef PLASTIQQABSTRACTANIMATION_H
#define PLASTIQQABSTRACTANIMATION_H

#include "plastiqobject.h"

class PlastiQQAbstractAnimation : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractAnimation,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractAnimation();
};

#endif // PLASTIQQABSTRACTANIMATION_H