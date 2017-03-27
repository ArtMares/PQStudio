#ifndef PLASTIQQDRAGENTEREVENT_H
#define PLASTIQQDRAGENTEREVENT_H

#include "plastiqobject.h"

class PlastiQQDragEnterEvent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQEvent,QDragEnterEvent,QDragMoveEvent)
    PLASTIQ_INHERITS(QDragMoveEvent)
public:    ~PlastiQQDragEnterEvent();
};

#endif // PLASTIQQDRAGENTEREVENT_H