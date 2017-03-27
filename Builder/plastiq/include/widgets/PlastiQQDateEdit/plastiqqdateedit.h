#ifndef PLASTIQQDATEEDIT_H
#define PLASTIQQDATEEDIT_H

#include "plastiqobject.h"

class PlastiQQDateEdit : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDateEdit,QDateTimeEdit)
    PLASTIQ_INHERITS(QDateTimeEdit)
public:    ~PlastiQQDateEdit();
};

#endif // PLASTIQQDATEEDIT_H