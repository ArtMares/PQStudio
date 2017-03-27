#ifndef PLASTIQQPEN_H
#define PLASTIQQPEN_H

#include "plastiqobject.h"

class PlastiQQPen : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPen,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPen();
};

#endif // PLASTIQQPEN_H