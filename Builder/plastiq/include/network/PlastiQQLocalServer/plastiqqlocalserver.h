#ifndef PLASTIQQLOCALSERVER_H
#define PLASTIQQLOCALSERVER_H

#include "plastiqobject.h"

class PlastiQQLocalServer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLocalServer,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQLocalServer();
};

#endif // PLASTIQQLOCALSERVER_H