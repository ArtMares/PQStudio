#ifndef PLASTIQQLINEEDIT_H
#define PLASTIQQLINEEDIT_H

#include "plastiqobject.h"

class PlastiQQLineEdit : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QLineEdit,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQLineEdit();
};

#endif // PLASTIQQLINEEDIT_H