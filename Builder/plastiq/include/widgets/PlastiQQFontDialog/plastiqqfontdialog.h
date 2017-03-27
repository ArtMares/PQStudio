#ifndef PLASTIQQFONTDIALOG_H
#define PLASTIQQFONTDIALOG_H

#include "plastiqobject.h"

class PlastiQQFontDialog : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QFontDialog,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQFontDialog();
};

#endif // PLASTIQQFONTDIALOG_H