#ifndef PLASTIQQPAINTER_H
#define PLASTIQQPAINTER_H

#include "plastiqobject.h"

class PlastiQQPainter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPainter,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPainter();
};

#endif // PLASTIQQPAINTER_H