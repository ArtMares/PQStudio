#ifndef PLASTIQQCHECKBOX_H
#define PLASTIQQCHECKBOX_H

#include "plastiqobject.h"

class PlastiQQCheckBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QCheckBox,QAbstractButton)
    PLASTIQ_INHERITS(QAbstractButton)
public:    ~PlastiQQCheckBox();
};

#endif // PLASTIQQCHECKBOX_H