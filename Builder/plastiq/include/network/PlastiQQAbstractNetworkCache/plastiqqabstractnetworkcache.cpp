#include "plastiqmethod.h"
#include "plastiqqabstractnetworkcache.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractNetworkCache> 
#include <QIODevice>
#include <QNetworkCacheMetaData>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractNetworkCache::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractNetworkCache::plastiqMethods = {
    { "cacheSize()", { "cacheSize", "", "qint64", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(QUrl&)", { "data", "QUrl&", "QIODevice*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(QIODevice*)", { "insert", "QIODevice*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData(QUrl&)", { "metaData", "QUrl&", "QNetworkCacheMetaData", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prepare(QNetworkCacheMetaData&)", { "prepare", "QNetworkCacheMetaData&", "QIODevice*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QUrl&)", { "remove", "QUrl&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateMetaData(QNetworkCacheMetaData&)", { "updateMetaData", "QNetworkCacheMetaData&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractNetworkCache::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractNetworkCache::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractNetworkCache::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractNetworkCache::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractNetworkCache::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractNetworkCache::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractNetworkCache", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractNetworkCache::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractNetworkCache::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractNetworkCache *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractNetworkCache *p = new PlastiQQAbstractNetworkCache();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractNetworkCache *p = new PlastiQQAbstractNetworkCache();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractNetworkCache *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractNetworkCache*>(object->plastiq_data());

        switch(id) {
        case 0: { long _r = o->cacheSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 1: { QIODevice* _r = o->data((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 2: o->insert(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QNetworkCacheMetaData *_r = new QNetworkCacheMetaData(o->metaData((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkCacheMetaData";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { QIODevice* _r = o->prepare((*reinterpret_cast< QNetworkCacheMetaData(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 5: { bool _r = o->remove((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->updateMetaData((*reinterpret_cast< QNetworkCacheMetaData(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->clear();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractNetworkCache *o = reinterpret_cast<QAbstractNetworkCache*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractNetworkCache *o = reinterpret_cast<QAbstractNetworkCache*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractNetworkCache *o = reinterpret_cast<QAbstractNetworkCache*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractNetworkCache *o = reinterpret_cast<QAbstractNetworkCache*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractNetworkCache::~PlastiQQAbstractNetworkCache() {
    QAbstractNetworkCache* o = reinterpret_cast<QAbstractNetworkCache*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
