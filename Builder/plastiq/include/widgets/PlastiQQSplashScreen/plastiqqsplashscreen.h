#ifndef PLASTIQQSPLASHSCREEN_H
#define PLASTIQQSPLASHSCREEN_H

#include "plastiqobject.h"

class PlastiQQSplashScreen : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QSplashScreen,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQSplashScreen();
};

#endif // PLASTIQQSPLASHSCREEN_H