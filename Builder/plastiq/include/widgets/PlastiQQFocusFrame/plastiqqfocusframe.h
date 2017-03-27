#ifndef PLASTIQQFOCUSFRAME_H
#define PLASTIQQFOCUSFRAME_H

#include "plastiqobject.h"

class PlastiQQFocusFrame : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QFocusFrame,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQFocusFrame();
};

#endif // PLASTIQQFOCUSFRAME_H