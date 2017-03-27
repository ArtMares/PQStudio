#ifndef PLASTIQQERRORMESSAGE_H
#define PLASTIQQERRORMESSAGE_H

#include "plastiqobject.h"

class PlastiQQErrorMessage : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QErrorMessage,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQErrorMessage();
};

#endif // PLASTIQQERRORMESSAGE_H