#ifndef PLASTIQQDIALOG_H
#define PLASTIQQDIALOG_H

#include "plastiqobject.h"

class PlastiQQDialog : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDialog,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQDialog();
};

#endif // PLASTIQQDIALOG_H