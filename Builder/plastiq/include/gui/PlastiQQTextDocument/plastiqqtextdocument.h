#ifndef PLASTIQQTEXTDOCUMENT_H
#define PLASTIQQTEXTDOCUMENT_H

#include "plastiqobject.h"

class PlastiQQTextDocument : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTextDocument,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQTextDocument();
};

#endif // PLASTIQQTEXTDOCUMENT_H