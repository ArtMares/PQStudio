#ifndef PLASTIQQJSONDOCUMENT_H
#define PLASTIQQJSONDOCUMENT_H

#include "plastiqobject.h"

class PlastiQQJsonDocument : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QJsonDocument,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQJsonDocument();
};

#endif // PLASTIQQJSONDOCUMENT_H