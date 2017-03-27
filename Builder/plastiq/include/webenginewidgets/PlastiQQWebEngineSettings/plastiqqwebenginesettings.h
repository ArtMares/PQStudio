#ifndef PLASTIQQWEBENGINESETTINGS_H
#define PLASTIQQWEBENGINESETTINGS_H

#include "plastiqobject.h"

class PlastiQQWebEngineSettings : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWebEngineSettings,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWebEngineSettings();
};

#endif // PLASTIQQWEBENGINESETTINGS_H