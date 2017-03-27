#ifndef PLASTIQQLOCALSOCKET_H
#define PLASTIQQLOCALSOCKET_H

#include "plastiqobject.h"

class PlastiQQLocalSocket : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLocalSocket,QIODevice)
    PLASTIQ_INHERITS(QIODevice)
public:    ~PlastiQQLocalSocket();
};

#endif // PLASTIQQLOCALSOCKET_H