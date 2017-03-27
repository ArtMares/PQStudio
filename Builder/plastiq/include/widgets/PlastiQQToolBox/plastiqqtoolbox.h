#ifndef PLASTIQQTOOLBOX_H
#define PLASTIQQTOOLBOX_H

#include "plastiqobject.h"

class PlastiQQToolBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QToolBox,QFrame)
    PLASTIQ_INHERITS(QFrame)
public:    ~PlastiQQToolBox();
};

#endif // PLASTIQQTOOLBOX_H