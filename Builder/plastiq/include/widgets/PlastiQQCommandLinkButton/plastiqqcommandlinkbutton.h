#ifndef PLASTIQQCOMMANDLINKBUTTON_H
#define PLASTIQQCOMMANDLINKBUTTON_H

#include "plastiqobject.h"

class PlastiQQCommandLinkButton : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QCommandLinkButton,QPushButton)
    PLASTIQ_INHERITS(QPushButton)
public:    ~PlastiQQCommandLinkButton();
};

#endif // PLASTIQQCOMMANDLINKBUTTON_H