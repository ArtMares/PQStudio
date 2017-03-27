#ifndef PLASTIQQTRANSLATOR_H
#define PLASTIQQTRANSLATOR_H

#include "plastiqobject.h"

class PlastiQQTranslator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTranslator,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQTranslator();
};

#endif // PLASTIQQTRANSLATOR_H