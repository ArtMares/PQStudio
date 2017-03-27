#ifndef PLASTIQQTEXTSTREAM_H
#define PLASTIQQTEXTSTREAM_H

#include "plastiqobject.h"

class PlastiQQTextStream : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextStream,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextStream();
};

#endif // PLASTIQQTEXTSTREAM_H