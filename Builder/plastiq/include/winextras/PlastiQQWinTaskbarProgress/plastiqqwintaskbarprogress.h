#ifndef PLASTIQQWINTASKBARPROGRESS_H
#define PLASTIQQWINTASKBARPROGRESS_H

#include "plastiqobject.h"

class PlastiQQWinTaskbarProgress : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QWinTaskbarProgress,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQWinTaskbarProgress();
};

#endif // PLASTIQQWINTASKBARPROGRESS_H