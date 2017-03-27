#ifndef PLASTIQQTCPSERVER_H
#define PLASTIQQTCPSERVER_H

#include "plastiqobject.h"

class PlastiQQTcpServer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTcpServer,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQTcpServer();
};

#endif // PLASTIQQTCPSERVER_H