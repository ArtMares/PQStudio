#ifndef PLASTIQQSTATICPLUGIN_H
#define PLASTIQQSTATICPLUGIN_H

#include "plastiqobject.h"

class PlastiQQStaticPlugin : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStaticPlugin,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStaticPlugin();
};

#endif // PLASTIQQSTATICPLUGIN_H