#ifndef PLASTIQQFILEDIALOG_H
#define PLASTIQQFILEDIALOG_H

#include "plastiqobject.h"

class PlastiQQFileDialog : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QFileDialog,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQFileDialog();
};

#endif // PLASTIQQFILEDIALOG_H