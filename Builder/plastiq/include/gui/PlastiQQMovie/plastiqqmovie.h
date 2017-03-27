#ifndef PLASTIQQMOVIE_H
#define PLASTIQQMOVIE_H

#include "plastiqobject.h"

class PlastiQQMovie : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMovie,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQMovie();
};

#endif // PLASTIQQMOVIE_H