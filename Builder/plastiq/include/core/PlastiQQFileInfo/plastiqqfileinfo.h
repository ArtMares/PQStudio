#ifndef PLASTIQQFILEINFO_H
#define PLASTIQQFILEINFO_H

#include "plastiqobject.h"

class PlastiQQFileInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFileInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQFileInfo();
};

#endif // PLASTIQQFILEINFO_H