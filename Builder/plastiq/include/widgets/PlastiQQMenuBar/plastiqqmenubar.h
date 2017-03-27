#ifndef PLASTIQQMENUBAR_H
#define PLASTIQQMENUBAR_H

#include "plastiqobject.h"

class PlastiQQMenuBar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QMenuBar,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQMenuBar();
};

#endif // PLASTIQQMENUBAR_H