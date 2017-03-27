#ifndef PLASTIQQWINDOW_H
#define PLASTIQQWINDOW_H

#include "plastiqobject.h"

class PlastiQQWindow : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWindow,QWindow,QObject)
    PLASTIQ_INHERITS(QObject,QSurface)
public:    ~PlastiQQWindow();
};

#endif // PLASTIQQWINDOW_H