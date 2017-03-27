#ifndef PLASTIQQPLUGINLOADER_H
#define PLASTIQQPLUGINLOADER_H

#include "plastiqobject.h"

class PlastiQQPluginLoader : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPluginLoader,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQPluginLoader();
};

#endif // PLASTIQQPLUGINLOADER_H