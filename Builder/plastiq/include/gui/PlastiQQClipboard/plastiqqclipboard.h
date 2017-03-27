#ifndef PLASTIQQCLIPBOARD_H
#define PLASTIQQCLIPBOARD_H

#include "plastiqobject.h"

class PlastiQQClipboard : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QClipboard,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQClipboard();
};

#endif // PLASTIQQCLIPBOARD_H