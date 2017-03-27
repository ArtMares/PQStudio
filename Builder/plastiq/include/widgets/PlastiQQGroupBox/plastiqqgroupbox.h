#ifndef PLASTIQQGROUPBOX_H
#define PLASTIQQGROUPBOX_H

#include "plastiqobject.h"

class PlastiQQGroupBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QGroupBox,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQGroupBox();
};

#endif // PLASTIQQGROUPBOX_H