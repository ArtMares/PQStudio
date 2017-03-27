#ifndef PLASTIQQJSONPARSEERROR_H
#define PLASTIQQJSONPARSEERROR_H

#include "plastiqobject.h"

class PlastiQQJsonParseError : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QJsonParseError,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQJsonParseError();
};

#endif // PLASTIQQJSONPARSEERROR_H