#include "plastiqmethod.h"
#include "plastiqqpixmapcache.h"

#include <QPixmapCache> 

QHash<QByteArray, PlastiQMethod> PlastiQQPixmapCache::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPixmapCache::plastiqMethods = {
    { "cacheLimit()", { "cacheLimit", "", "int", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "find(QString,QPixmap*)", { "find", "QString&,QPixmap*", "bool", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "find(Key&,QPixmap*)", { "find", "Key&,QPixmap*", "bool", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "insert(QString,QPixmap&)", { "insert", "QString&,QPixmap&", "bool", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "insert(QPixmap&)", { "insert", "QPixmap&", "Key", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "void", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "remove(Key&)", { "remove", "Key&", "void", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "replace(Key&,QPixmap&)", { "replace", "Key&,QPixmap&", "bool", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setCacheLimit(int)", { "setCacheLimit", "int", "void", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPixmapCache::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPixmapCache::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPixmapCache::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPixmapCache::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPixmapCache::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPixmapCache::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPixmapCache", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPixmapCache::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPixmapCache::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPixmapCache *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPixmapCache *p = new PlastiQQPixmapCache();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPixmapCache *p = new PlastiQQPixmapCache();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPixmapCache *o = sc ? Q_NULLPTR : reinterpret_cast<QPixmapCache*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = sc ? QPixmapCache::cacheLimit() : o->cacheLimit();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: if(sc) { QPixmapCache::clear(); } else { o->clear(); }
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = sc ? QPixmapCache::find(stack[1].s_string,
                    reinterpret_cast<QPixmap*>(stack[2].s_voidp)) : o->find(stack[1].s_string,
                    reinterpret_cast<QPixmap*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = sc ? QPixmapCache::find((*reinterpret_cast< QPixmapCache::Key(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QPixmap*>(stack[2].s_voidp)) : o->find((*reinterpret_cast< QPixmapCache::Key(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QPixmap*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = sc ? QPixmapCache::insert(stack[1].s_string,
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp))) : o->insert(stack[1].s_string,
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: /* o->insert((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))) | ret: `Key` (INTERNAL CLASS) */ break;
        case 6: if(sc) { QPixmapCache::remove(stack[1].s_string); } else { o->remove(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 7: if(sc) { QPixmapCache::remove((*reinterpret_cast< QPixmapCache::Key(*) >(stack[1].s_voidp))); } else { o->remove((*reinterpret_cast< QPixmapCache::Key(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 8: { bool _r = sc ? QPixmapCache::replace((*reinterpret_cast< QPixmapCache::Key(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp))) : o->replace((*reinterpret_cast< QPixmapCache::Key(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: if(sc) { QPixmapCache::setCacheLimit(stack[1].s_int); } else { o->setCacheLimit(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPixmapCache *o = reinterpret_cast<QPixmapCache*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPixmapCache::~PlastiQQPixmapCache() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
