#ifndef PLASTIQQWEBENGINEPROFILE_H
#define PLASTIQQWEBENGINEPROFILE_H

#include "plastiqobject.h"

class PlastiQQWebEngineProfile : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QWebEngineProfile,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQWebEngineProfile();
};

#endif // PLASTIQQWEBENGINEPROFILE_H