#ifndef PLASTIQQTOOLBUTTON_H
#define PLASTIQQTOOLBUTTON_H

#include "plastiqobject.h"

class PlastiQQToolButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QToolButton,QAbstractButton)
    PLASTIQ_INHERITS(QAbstractButton)
public:    ~PlastiQQToolButton();
};

#endif // PLASTIQQTOOLBUTTON_H