#ifndef PLASTIQQTCPSOCKET_H
#define PLASTIQQTCPSOCKET_H

#include "plastiqobject.h"

class PlastiQQTcpSocket : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTcpSocket,QAbstractSocket)
    PLASTIQ_INHERITS(QAbstractSocket)
public:    ~PlastiQQTcpSocket();
};

#endif // PLASTIQQTCPSOCKET_H