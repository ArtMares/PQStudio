#ifndef PLASTIQQKEYSEQUENCEEDIT_H
#define PLASTIQQKEYSEQUENCEEDIT_H

#include "plastiqobject.h"

class PlastiQQKeySequenceEdit : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QKeySequenceEdit,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQKeySequenceEdit();
};

#endif // PLASTIQQKEYSEQUENCEEDIT_H