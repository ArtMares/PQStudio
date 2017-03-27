#ifndef PLASTIQQFILESYSTEMWATCHER_H
#define PLASTIQQFILESYSTEMWATCHER_H

#include "plastiqobject.h"

class PlastiQQFileSystemWatcher : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QFileSystemWatcher,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQFileSystemWatcher();
};

#endif // PLASTIQQFILESYSTEMWATCHER_H