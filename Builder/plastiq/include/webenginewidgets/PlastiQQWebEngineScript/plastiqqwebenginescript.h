#ifndef PLASTIQQWEBENGINESCRIPT_H
#define PLASTIQQWEBENGINESCRIPT_H

#include "plastiqobject.h"

class PlastiQQWebEngineScript : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QWebEngineScript,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQWebEngineScript();
};

#endif // PLASTIQQWEBENGINESCRIPT_H