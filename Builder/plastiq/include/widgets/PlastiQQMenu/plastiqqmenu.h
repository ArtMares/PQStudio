#ifndef PLASTIQQMENU_H
#define PLASTIQQMENU_H

#include "plastiqobject.h"

class PlastiQQMenu : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QMenu,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQMenu();
};

#endif // PLASTIQQMENU_H