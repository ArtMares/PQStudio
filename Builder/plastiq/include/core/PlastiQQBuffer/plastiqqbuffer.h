#ifndef PLASTIQQBUFFER_H
#define PLASTIQQBUFFER_H

#include "plastiqobject.h"

class PlastiQQBuffer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QBuffer,QIODevice)
    PLASTIQ_INHERITS(QIODevice)
public:    ~PlastiQQBuffer();
};

#endif // PLASTIQQBUFFER_H