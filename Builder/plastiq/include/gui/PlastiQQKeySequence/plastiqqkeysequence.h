#ifndef PLASTIQQKEYSEQUENCE_H
#define PLASTIQQKEYSEQUENCE_H

#include "plastiqobject.h"

class PlastiQQKeySequence : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QKeySequence,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQKeySequence();
};

#endif // PLASTIQQKEYSEQUENCE_H