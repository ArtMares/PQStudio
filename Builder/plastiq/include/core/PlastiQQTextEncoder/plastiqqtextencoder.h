#ifndef PLASTIQQTEXTENCODER_H
#define PLASTIQQTEXTENCODER_H

#include "plastiqobject.h"

class PlastiQQTextEncoder : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextEncoder,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextEncoder();
};

#endif // PLASTIQQTEXTENCODER_H