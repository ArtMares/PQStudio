#ifndef PLASTIQQCOLOR_H
#define PLASTIQQCOLOR_H

#include "plastiqobject.h"

class PlastiQQColor : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QColor,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQColor();
};

#endif // PLASTIQQCOLOR_H