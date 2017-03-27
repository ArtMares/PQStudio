#ifndef PLASTIQQSPINBOX_H
#define PLASTIQQSPINBOX_H

#include "plastiqobject.h"

class PlastiQQSpinBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QSpinBox,QAbstractSpinBox)
    PLASTIQ_INHERITS(QAbstractSpinBox)
public:    ~PlastiQQSpinBox();
};

#endif // PLASTIQQSPINBOX_H