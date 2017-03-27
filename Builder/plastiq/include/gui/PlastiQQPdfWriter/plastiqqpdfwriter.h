#ifndef PLASTIQQPDFWRITER_H
#define PLASTIQQPDFWRITER_H

#include "plastiqobject.h"

class PlastiQQPdfWriter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPdfWriter,QObject)
    PLASTIQ_INHERITS(QObject,QPagedPaintDevice)
public:    ~PlastiQQPdfWriter();
};

#endif // PLASTIQQPDFWRITER_H