#ifndef PLASTIQQOFFSCREENSURFACE_H
#define PLASTIQQOFFSCREENSURFACE_H

#include "plastiqobject.h"

class PlastiQQOffscreenSurface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QOffscreenSurface,QObject)
    PLASTIQ_INHERITS(QObject,QSurface)
public:    ~PlastiQQOffscreenSurface();
};

#endif // PLASTIQQOFFSCREENSURFACE_H