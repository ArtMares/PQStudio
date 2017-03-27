#ifndef PLASTIQQDIALOGBUTTONBOX_H
#define PLASTIQQDIALOGBUTTONBOX_H

#include "plastiqobject.h"

class PlastiQQDialogButtonBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDialogButtonBox,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQDialogButtonBox();
};

#endif // PLASTIQQDIALOGBUTTONBOX_H