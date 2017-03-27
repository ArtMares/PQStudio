#ifndef PLASTIQQUNDOVIEW_H
#define PLASTIQQUNDOVIEW_H

#include "plastiqobject.h"

class PlastiQQUndoView : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QUndoView,QListView)
    PLASTIQ_INHERITS(QListView)
public:    ~PlastiQQUndoView();
};

#endif // PLASTIQQUNDOVIEW_H