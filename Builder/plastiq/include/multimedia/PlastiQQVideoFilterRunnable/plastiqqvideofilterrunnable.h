#ifndef PLASTIQQVIDEOFILTERRUNNABLE_H
#define PLASTIQQVIDEOFILTERRUNNABLE_H

#include "plastiqobject.h"

class PlastiQQVideoFilterRunnable : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVideoFilterRunnable,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVideoFilterRunnable();
};

#endif // PLASTIQQVIDEOFILTERRUNNABLE_H