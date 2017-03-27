#ifndef PLASTIQQABSTRACTSOCKET_H
#define PLASTIQQABSTRACTSOCKET_H

#include "plastiqobject.h"

class PlastiQQAbstractSocket : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractSocket,QIODevice)
    PLASTIQ_INHERITS(QIODevice)
public:    ~PlastiQQAbstractSocket();
};

#endif // PLASTIQQABSTRACTSOCKET_H