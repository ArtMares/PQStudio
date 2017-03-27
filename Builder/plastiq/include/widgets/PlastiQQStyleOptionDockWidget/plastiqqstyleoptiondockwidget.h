#ifndef PLASTIQQSTYLEOPTIONDOCKWIDGET_H
#define PLASTIQQSTYLEOPTIONDOCKWIDGET_H

#include "plastiqobject.h"

class PlastiQQStyleOptionDockWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOptionDockWidget,QStyleOption)
    PLASTIQ_INHERITS(QStyleOption)
public:    ~PlastiQQStyleOptionDockWidget();
};

#endif // PLASTIQQSTYLEOPTIONDOCKWIDGET_H