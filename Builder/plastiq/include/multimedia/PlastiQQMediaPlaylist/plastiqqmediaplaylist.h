#ifndef PLASTIQQMEDIAPLAYLIST_H
#define PLASTIQQMEDIAPLAYLIST_H

#include "plastiqobject.h"

class PlastiQQMediaPlaylist : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaPlaylist,QObject)
    PLASTIQ_INHERITS(QObject,QMediaBindableInterface)
public:    ~PlastiQQMediaPlaylist();
};

#endif // PLASTIQQMEDIAPLAYLIST_H