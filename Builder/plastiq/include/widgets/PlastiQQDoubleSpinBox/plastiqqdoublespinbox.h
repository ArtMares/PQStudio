#ifndef PLASTIQQDOUBLESPINBOX_H
#define PLASTIQQDOUBLESPINBOX_H

#include "plastiqobject.h"

class PlastiQQDoubleSpinBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDoubleSpinBox,QAbstractSpinBox)
    PLASTIQ_INHERITS(QAbstractSpinBox)
public:    ~PlastiQQDoubleSpinBox();
};

#endif // PLASTIQQDOUBLESPINBOX_H