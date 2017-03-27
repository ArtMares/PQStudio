#ifndef PLASTIQQPROGRESSBAR_H
#define PLASTIQQPROGRESSBAR_H

#include "plastiqobject.h"

class PlastiQQProgressBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QProgressBar,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQProgressBar();
};

#endif // PLASTIQQPROGRESSBAR_H