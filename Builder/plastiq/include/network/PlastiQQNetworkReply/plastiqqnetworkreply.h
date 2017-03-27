#ifndef PLASTIQQNETWORKREPLY_H
#define PLASTIQQNETWORKREPLY_H

#include "plastiqobject.h"

class PlastiQQNetworkReply : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QNetworkReply,QIODevice)
    PLASTIQ_INHERITS(QIODevice)
public:    ~PlastiQQNetworkReply();
};

#endif // PLASTIQQNETWORKREPLY_H