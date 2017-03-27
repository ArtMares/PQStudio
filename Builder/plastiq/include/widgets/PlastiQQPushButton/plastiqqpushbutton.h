#ifndef PLASTIQQPUSHBUTTON_H
#define PLASTIQQPUSHBUTTON_H

#include "plastiqobject.h"

class PlastiQQPushButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QPushButton,QAbstractButton)
    PLASTIQ_INHERITS(QAbstractButton)
public:    ~PlastiQQPushButton();
};

#endif // PLASTIQQPUSHBUTTON_H