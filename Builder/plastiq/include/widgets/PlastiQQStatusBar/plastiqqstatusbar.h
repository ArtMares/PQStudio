#ifndef PLASTIQQSTATUSBAR_H
#define PLASTIQQSTATUSBAR_H

#include "plastiqobject.h"

class PlastiQQStatusBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QStatusBar,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQStatusBar();
};

#endif // PLASTIQQSTATUSBAR_H