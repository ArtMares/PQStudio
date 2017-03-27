#ifndef PLASTIQQCOLORDIALOG_H
#define PLASTIQQCOLORDIALOG_H

#include "plastiqobject.h"

class PlastiQQColorDialog : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QColorDialog,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQColorDialog();
};

#endif // PLASTIQQCOLORDIALOG_H