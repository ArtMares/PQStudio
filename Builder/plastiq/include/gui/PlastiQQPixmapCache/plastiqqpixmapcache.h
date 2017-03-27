#ifndef PLASTIQQPIXMAPCACHE_H
#define PLASTIQQPIXMAPCACHE_H

#include "plastiqobject.h"

class PlastiQQPixmapCache : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QPixmapCache,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQPixmapCache();
};

#endif // PLASTIQQPIXMAPCACHE_H