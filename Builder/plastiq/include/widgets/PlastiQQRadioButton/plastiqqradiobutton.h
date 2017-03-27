#ifndef PLASTIQQRADIOBUTTON_H
#define PLASTIQQRADIOBUTTON_H

#include "plastiqobject.h"

class PlastiQQRadioButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QRadioButton,QAbstractButton)
    PLASTIQ_INHERITS(QAbstractButton)
public:    ~PlastiQQRadioButton();
};

#endif // PLASTIQQRADIOBUTTON_H