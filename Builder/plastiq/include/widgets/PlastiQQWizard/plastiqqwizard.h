#ifndef PLASTIQQWIZARD_H
#define PLASTIQQWIZARD_H

#include "plastiqobject.h"

class PlastiQQWizard : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QWizard,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQWizard();
};

#endif // PLASTIQQWIZARD_H