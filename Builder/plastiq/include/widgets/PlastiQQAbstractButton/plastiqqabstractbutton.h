#ifndef PLASTIQQABSTRACTBUTTON_H
#define PLASTIQQABSTRACTBUTTON_H

#include "plastiqobject.h"

class PlastiQQAbstractButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QAbstractButton,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQAbstractButton();
};

#endif // PLASTIQQABSTRACTBUTTON_H