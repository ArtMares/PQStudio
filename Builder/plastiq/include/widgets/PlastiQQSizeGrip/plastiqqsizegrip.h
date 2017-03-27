#ifndef PLASTIQQSIZEGRIP_H
#define PLASTIQQSIZEGRIP_H

#include "plastiqobject.h"

class PlastiQQSizeGrip : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QSizeGrip,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQSizeGrip();
};

#endif // PLASTIQQSIZEGRIP_H