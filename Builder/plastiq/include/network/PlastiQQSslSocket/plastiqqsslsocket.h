#ifndef PLASTIQQSSLSOCKET_H
#define PLASTIQQSSLSOCKET_H

#include "plastiqobject.h"

class PlastiQQSslSocket : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSslSocket,QTcpSocket)
    PLASTIQ_INHERITS(QTcpSocket)
public:    ~PlastiQQSslSocket();
};

#endif // PLASTIQQSSLSOCKET_H