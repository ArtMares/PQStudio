#ifndef PLASTIQQTEXTDOCUMENTWRITER_H
#define PLASTIQQTEXTDOCUMENTWRITER_H

#include "plastiqobject.h"

class PlastiQQTextDocumentWriter : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextDocumentWriter,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextDocumentWriter();
};

#endif // PLASTIQQTEXTDOCUMENTWRITER_H