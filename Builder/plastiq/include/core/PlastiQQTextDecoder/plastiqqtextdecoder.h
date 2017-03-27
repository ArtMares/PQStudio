#ifndef PLASTIQQTEXTDECODER_H
#define PLASTIQQTEXTDECODER_H

#include "plastiqobject.h"

class PlastiQQTextDecoder : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextDecoder,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextDecoder();
};

#endif // PLASTIQQTEXTDECODER_H