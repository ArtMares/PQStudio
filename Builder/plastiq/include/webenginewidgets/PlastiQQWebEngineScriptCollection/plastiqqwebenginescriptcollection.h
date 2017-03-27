#ifndef PLASTIQQWEBENGINESCRIPTCOLLECTION_H
#define PLASTIQQWEBENGINESCRIPTCOLLECTION_H

#include "plastiqobject.h"

class PlastiQQWebEngineScriptCollection : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWebEngineScriptCollection,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWebEngineScriptCollection();
};

#endif // PLASTIQQWEBENGINESCRIPTCOLLECTION_H