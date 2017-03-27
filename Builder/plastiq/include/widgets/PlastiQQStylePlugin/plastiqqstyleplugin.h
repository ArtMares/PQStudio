#ifndef PLASTIQQSTYLEPLUGIN_H
#define PLASTIQQSTYLEPLUGIN_H

#include "plastiqobject.h"

class PlastiQQStylePlugin : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QStylePlugin,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQStylePlugin();
};

#endif // PLASTIQQSTYLEPLUGIN_H