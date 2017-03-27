#ifndef PLASTIQQABSTRACTSPINBOX_H
#define PLASTIQQABSTRACTSPINBOX_H

#include "plastiqobject.h"

class PlastiQQAbstractSpinBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QAbstractSpinBox,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQAbstractSpinBox();
};

#endif // PLASTIQQABSTRACTSPINBOX_H