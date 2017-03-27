#ifndef PLASTIQQINPUTDIALOG_H
#define PLASTIQQINPUTDIALOG_H

#include "plastiqobject.h"

class PlastiQQInputDialog : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QInputDialog,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQInputDialog();
};

#endif // PLASTIQQINPUTDIALOG_H