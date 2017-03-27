#ifndef PLASTIQQCOMPLETER_H
#define PLASTIQQCOMPLETER_H

#include "plastiqobject.h"

class PlastiQQCompleter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCompleter,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQCompleter();
};

#endif // PLASTIQQCOMPLETER_H