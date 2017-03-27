#ifndef PLASTIQQSPLITTERHANDLE_H
#define PLASTIQQSPLITTERHANDLE_H

#include "plastiqobject.h"

class PlastiQQSplitterHandle : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QSplitterHandle,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQSplitterHandle();
};

#endif // PLASTIQQSPLITTERHANDLE_H