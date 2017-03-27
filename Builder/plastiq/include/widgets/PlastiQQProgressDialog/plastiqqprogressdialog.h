#ifndef PLASTIQQPROGRESSDIALOG_H
#define PLASTIQQPROGRESSDIALOG_H

#include "plastiqobject.h"

class PlastiQQProgressDialog : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QProgressDialog,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQProgressDialog();
};

#endif // PLASTIQQPROGRESSDIALOG_H