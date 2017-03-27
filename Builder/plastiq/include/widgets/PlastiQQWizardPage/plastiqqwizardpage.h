#ifndef PLASTIQQWIZARDPAGE_H
#define PLASTIQQWIZARDPAGE_H

#include "plastiqobject.h"

class PlastiQQWizardPage : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QWizardPage,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQWizardPage();
};

#endif // PLASTIQQWIZARDPAGE_H