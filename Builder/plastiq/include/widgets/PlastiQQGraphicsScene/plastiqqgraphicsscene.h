#ifndef PLASTIQQGRAPHICSSCENE_H
#define PLASTIQQGRAPHICSSCENE_H

#include "plastiqobject.h"

class PlastiQQGraphicsScene : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QGraphicsScene,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQGraphicsScene();
};

#endif // PLASTIQQGRAPHICSSCENE_H