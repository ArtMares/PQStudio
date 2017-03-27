#ifndef PLASTIQQIMAGEIOHANDLER_H
#define PLASTIQQIMAGEIOHANDLER_H

#include "plastiqobject.h"

class PlastiQQImageIOHandler : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QImageIOHandler,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQImageIOHandler();
};

#endif // PLASTIQQIMAGEIOHANDLER_H