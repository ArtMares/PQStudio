#ifndef PLASTIQQLABEL_H
#define PLASTIQQLABEL_H

#include "plastiqobject.h"

class PlastiQQLabel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QLabel,QFrame)
    PLASTIQ_INHERITS(QFrame)
public:    ~PlastiQQLabel();
};

#endif // PLASTIQQLABEL_H