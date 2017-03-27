#ifndef PLASTIQQTIMEEDIT_H
#define PLASTIQQTIMEEDIT_H

#include "plastiqobject.h"

class PlastiQQTimeEdit : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTimeEdit,QDateTimeEdit)
    PLASTIQ_INHERITS(QDateTimeEdit)
public:    ~PlastiQQTimeEdit();
};

#endif // PLASTIQQTIMEEDIT_H