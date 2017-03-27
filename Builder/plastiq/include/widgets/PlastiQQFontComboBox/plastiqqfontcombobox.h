#ifndef PLASTIQQFONTCOMBOBOX_H
#define PLASTIQQFONTCOMBOBOX_H

#include "plastiqobject.h"

class PlastiQQFontComboBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QFontComboBox,QComboBox)
    PLASTIQ_INHERITS(QComboBox)
public:    ~PlastiQQFontComboBox();
};

#endif // PLASTIQQFONTCOMBOBOX_H