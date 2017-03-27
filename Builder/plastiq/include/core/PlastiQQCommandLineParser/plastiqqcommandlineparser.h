#ifndef PLASTIQQCOMMANDLINEPARSER_H
#define PLASTIQQCOMMANDLINEPARSER_H

#include "plastiqobject.h"

class PlastiQQCommandLineParser : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCommandLineParser,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCommandLineParser();
};

#endif // PLASTIQQCOMMANDLINEPARSER_H