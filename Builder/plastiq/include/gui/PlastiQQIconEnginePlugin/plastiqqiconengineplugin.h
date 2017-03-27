#ifndef PLASTIQQICONENGINEPLUGIN_H
#define PLASTIQQICONENGINEPLUGIN_H

#include "plastiqobject.h"

class PlastiQQIconEnginePlugin : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QIconEnginePlugin,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQIconEnginePlugin();
};

#endif // PLASTIQQICONENGINEPLUGIN_H