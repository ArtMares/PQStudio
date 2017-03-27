#ifndef PLASTIQQSETTINGS_H
#define PLASTIQQSETTINGS_H

#include "plastiqobject.h"

class PlastiQQSettings : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSettings,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSettings();
};

#endif // PLASTIQQSETTINGS_H