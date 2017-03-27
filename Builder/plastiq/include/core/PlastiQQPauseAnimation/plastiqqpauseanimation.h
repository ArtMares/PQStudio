#ifndef PLASTIQQPAUSEANIMATION_H
#define PLASTIQQPAUSEANIMATION_H

#include "plastiqobject.h"

class PlastiQQPauseAnimation : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPauseAnimation,QAbstractAnimation)
    PLASTIQ_INHERITS(QAbstractAnimation)
public:    ~PlastiQQPauseAnimation();
};

#endif // PLASTIQQPAUSEANIMATION_H