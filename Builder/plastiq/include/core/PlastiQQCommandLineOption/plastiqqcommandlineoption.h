#ifndef PLASTIQQCOMMANDLINEOPTION_H
#define PLASTIQQCOMMANDLINEOPTION_H

#include "plastiqobject.h"

class PlastiQQCommandLineOption : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCommandLineOption,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCommandLineOption();
};

#endif // PLASTIQQCOMMANDLINEOPTION_H