#ifndef PLASTIQQSTYLEPAINTER_H
#define PLASTIQQSTYLEPAINTER_H

#include "plastiqobject.h"

class PlastiQQStylePainter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStylePainter,QPainter)
    PLASTIQ_INHERITS(QPainter)
public:    ~PlastiQQStylePainter();
};

#endif // PLASTIQQSTYLEPAINTER_H