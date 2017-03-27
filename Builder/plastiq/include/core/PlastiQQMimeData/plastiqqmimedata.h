#ifndef PLASTIQQMIMEDATA_H
#define PLASTIQQMIMEDATA_H

#include "plastiqobject.h"

class PlastiQQMimeData : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMimeData,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQMimeData();
};

#endif // PLASTIQQMIMEDATA_H