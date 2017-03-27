#ifndef PLASTIQQWINTASKBARBUTTON_H
#define PLASTIQQWINTASKBARBUTTON_H

#include "plastiqobject.h"

class PlastiQQWinTaskbarButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QWinTaskbarButton,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQWinTaskbarButton();
};

#endif // PLASTIQQWINTASKBARBUTTON_H