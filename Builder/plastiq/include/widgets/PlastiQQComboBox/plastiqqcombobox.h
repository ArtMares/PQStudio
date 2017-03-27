#ifndef PLASTIQQCOMBOBOX_H
#define PLASTIQQCOMBOBOX_H

#include "plastiqobject.h"

class PlastiQQComboBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QComboBox,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQComboBox();
};

#endif // PLASTIQQCOMBOBOX_H