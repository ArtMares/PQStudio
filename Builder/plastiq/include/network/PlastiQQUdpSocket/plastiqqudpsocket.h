#ifndef PLASTIQQUDPSOCKET_H
#define PLASTIQQUDPSOCKET_H

#include "plastiqobject.h"

class PlastiQQUdpSocket : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QUdpSocket,QAbstractSocket)
    PLASTIQ_INHERITS(QAbstractSocket)
public:    ~PlastiQQUdpSocket();
};

#endif // PLASTIQQUDPSOCKET_H