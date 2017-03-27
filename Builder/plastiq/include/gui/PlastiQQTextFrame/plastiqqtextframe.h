#ifndef PLASTIQQTEXTFRAME_H
#define PLASTIQQTEXTFRAME_H

#include "plastiqobject.h"

class PlastiQQTextFrame : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextFrame,QTextObject)
    PLASTIQ_INHERITS(QTextObject)
public:    ~PlastiQQTextFrame();
};

#endif // PLASTIQQTEXTFRAME_H