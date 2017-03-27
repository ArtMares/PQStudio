#ifndef PLASTIQQABSTRACTSLIDER_H
#define PLASTIQQABSTRACTSLIDER_H

#include "plastiqobject.h"

class PlastiQQAbstractSlider : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QAbstractSlider,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQAbstractSlider();
};

#endif // PLASTIQQABSTRACTSLIDER_H