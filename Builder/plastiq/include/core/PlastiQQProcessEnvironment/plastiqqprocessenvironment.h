#ifndef PLASTIQQPROCESSENVIRONMENT_H
#define PLASTIQQPROCESSENVIRONMENT_H

#include "plastiqobject.h"

class PlastiQQProcessEnvironment : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QProcessEnvironment,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQProcessEnvironment();
};

#endif // PLASTIQQPROCESSENVIRONMENT_H