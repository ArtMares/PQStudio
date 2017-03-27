#ifndef PLASTIQQDATASTREAM_H
#define PLASTIQQDATASTREAM_H

#include "plastiqobject.h"

class PlastiQQDataStream : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDataStream,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDataStream();
};

#endif // PLASTIQQDATASTREAM_H