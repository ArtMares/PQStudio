#ifndef PLASTIQQSPLITTER_H
#define PLASTIQQSPLITTER_H

#include "plastiqobject.h"

class PlastiQQSplitter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QSplitter,QFrame)
    PLASTIQ_INHERITS(QFrame)
public:    ~PlastiQQSplitter();
};

#endif // PLASTIQQSPLITTER_H