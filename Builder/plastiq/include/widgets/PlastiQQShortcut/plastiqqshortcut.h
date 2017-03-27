#ifndef PLASTIQQSHORTCUT_H
#define PLASTIQQSHORTCUT_H

#include "plastiqobject.h"

class PlastiQQShortcut : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QShortcut,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQShortcut();
};

#endif // PLASTIQQSHORTCUT_H