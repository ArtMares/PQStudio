#ifndef PLASTIQQPAINTERPATH_H
#define PLASTIQQPAINTERPATH_H

#include "plastiqobject.h"

class PlastiQQPainterPath : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPainterPath,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPainterPath();
};

#endif // PLASTIQQPAINTERPATH_H