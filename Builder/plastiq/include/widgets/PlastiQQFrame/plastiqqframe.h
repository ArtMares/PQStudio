#ifndef PLASTIQQFRAME_H
#define PLASTIQQFRAME_H

#include "plastiqobject.h"

class PlastiQQFrame : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QFrame,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQFrame();
};

#endif // PLASTIQQFRAME_H