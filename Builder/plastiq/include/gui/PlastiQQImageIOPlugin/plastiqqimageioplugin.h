#ifndef PLASTIQQIMAGEIOPLUGIN_H
#define PLASTIQQIMAGEIOPLUGIN_H

#include "plastiqobject.h"

class PlastiQQImageIOPlugin : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QImageIOPlugin,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQImageIOPlugin();
};

#endif // PLASTIQQIMAGEIOPLUGIN_H