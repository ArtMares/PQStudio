#ifndef PLASTIQQIMAGEWRITER_H
#define PLASTIQQIMAGEWRITER_H

#include "plastiqobject.h"

class PlastiQQImageWriter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QImageWriter,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQImageWriter();
};

#endif // PLASTIQQIMAGEWRITER_H