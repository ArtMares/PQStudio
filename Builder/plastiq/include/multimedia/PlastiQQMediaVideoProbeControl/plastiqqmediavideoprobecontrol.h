#ifndef PLASTIQQMEDIAVIDEOPROBECONTROL_H
#define PLASTIQQMEDIAVIDEOPROBECONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaVideoProbeControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaVideoProbeControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaVideoProbeControl();
};

#endif // PLASTIQQMEDIAVIDEOPROBECONTROL_H