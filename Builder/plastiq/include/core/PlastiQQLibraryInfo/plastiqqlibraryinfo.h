#ifndef PLASTIQQLIBRARYINFO_H
#define PLASTIQQLIBRARYINFO_H

#include "plastiqobject.h"

class PlastiQQLibraryInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QLibraryInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQLibraryInfo();
};

#endif // PLASTIQQLIBRARYINFO_H