#ifndef PLASTIQQSLIDER_H
#define PLASTIQQSLIDER_H

#include "plastiqobject.h"

class PlastiQQSlider : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QSlider,QAbstractSlider)
    PLASTIQ_INHERITS(QAbstractSlider)
public:    ~PlastiQQSlider();
};

#endif // PLASTIQQSLIDER_H