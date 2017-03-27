#ifndef PLASTIQQSTYLEOPTIONTABWIDGETFRAME_H
#define PLASTIQQSTYLEOPTIONTABWIDGETFRAME_H

#include "plastiqobject.h"

class PlastiQQStyleOptionTabWidgetFrame : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionTabWidgetFrame,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionTabWidgetFrame();
};

#endif // PLASTIQQSTYLEOPTIONTABWIDGETFRAME_H