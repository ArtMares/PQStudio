#ifndef PLASTIQQDIAL_H
#define PLASTIQQDIAL_H

#include "plastiqobject.h"

class PlastiQQDial : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDial,QAbstractSlider)
    PLASTIQ_INHERITS(QAbstractSlider)
public:    ~PlastiQQDial();
};

#endif // PLASTIQQDIAL_H