#ifndef PLASTIQQTABBAR_H
#define PLASTIQQTABBAR_H

#include "plastiqobject.h"

class PlastiQQTabBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTabBar,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQTabBar();
};

#endif // PLASTIQQTABBAR_H