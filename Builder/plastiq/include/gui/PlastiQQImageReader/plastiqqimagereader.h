#ifndef PLASTIQQIMAGEREADER_H
#define PLASTIQQIMAGEREADER_H

#include "plastiqobject.h"

class PlastiQQImageReader : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QImageReader,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQImageReader();
};

#endif // PLASTIQQIMAGEREADER_H