#ifndef PLASTIQQSYSTEMTRAYICON_H
#define PLASTIQQSYSTEMTRAYICON_H

#include "plastiqobject.h"

class PlastiQQSystemTrayIcon : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QSystemTrayIcon,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQSystemTrayIcon();
};

#endif // PLASTIQQSYSTEMTRAYICON_H