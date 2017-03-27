#ifndef PLASTIQQDATETIMEEDIT_H
#define PLASTIQQDATETIMEEDIT_H

#include "plastiqobject.h"

class PlastiQQDateTimeEdit : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDateTimeEdit,QAbstractSpinBox)
    PLASTIQ_INHERITS(QAbstractSpinBox)
public:    ~PlastiQQDateTimeEdit();
};

#endif // PLASTIQQDATETIMEEDIT_H