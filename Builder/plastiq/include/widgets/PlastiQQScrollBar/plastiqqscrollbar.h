#ifndef PLASTIQQSCROLLBAR_H
#define PLASTIQQSCROLLBAR_H

#include "plastiqobject.h"

class PlastiQQScrollBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QScrollBar,QAbstractSlider)
    PLASTIQ_INHERITS(QAbstractSlider)
public:    ~PlastiQQScrollBar();
};

#endif // PLASTIQQSCROLLBAR_H