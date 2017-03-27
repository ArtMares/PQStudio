#ifndef PLASTIQQSCREEN_H
#define PLASTIQQSCREEN_H

#include "plastiqobject.h"

class PlastiQQScreen : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QScreen,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQScreen();
};

#endif // PLASTIQQSCREEN_H