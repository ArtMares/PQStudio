#ifndef PLASTIQQICONENGINE_H
#define PLASTIQQICONENGINE_H

#include "plastiqobject.h"

class PlastiQQIconEngine : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QIconEngine,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQIconEngine();
};

#endif // PLASTIQQICONENGINE_H