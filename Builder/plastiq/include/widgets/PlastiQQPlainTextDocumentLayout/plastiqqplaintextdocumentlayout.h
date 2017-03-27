#ifndef PLASTIQQPLAINTEXTDOCUMENTLAYOUT_H
#define PLASTIQQPLAINTEXTDOCUMENTLAYOUT_H

#include "plastiqobject.h"

class PlastiQQPlainTextDocumentLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPlainTextDocumentLayout,QAbstractTextDocumentLayout)
    PLASTIQ_INHERITS(QAbstractTextDocumentLayout)
public:    ~PlastiQQPlainTextDocumentLayout();
};

#endif // PLASTIQQPLAINTEXTDOCUMENTLAYOUT_H