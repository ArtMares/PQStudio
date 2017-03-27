#ifndef PLASTIQQTOOLBAR_H
#define PLASTIQQTOOLBAR_H

#include "plastiqobject.h"

class PlastiQQToolBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QToolBar,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQToolBar();
};

#endif // PLASTIQQTOOLBAR_H