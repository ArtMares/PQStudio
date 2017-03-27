#include "plastiqmethod.h"
#include "plastiqqnetworkcachemetadata.h"

#include <QNetworkCacheMetaData> 
#include <QDateTime>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCacheMetaData::plastiqConstructors = {
    { "QNetworkCacheMetaData()", { "QNetworkCacheMetaData", "", "QNetworkCacheMetaData*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkCacheMetaData(QNetworkCacheMetaData&)", { "QNetworkCacheMetaData", "QNetworkCacheMetaData&", "QNetworkCacheMetaData*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCacheMetaData::plastiqMethods = {
    { "attributes()", { "attributes", "", "AttributesMap", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expirationDate()", { "expirationDate", "", "QDateTime", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastModified()", { "lastModified", "", "QDateTime", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rawHeaders()", { "rawHeaders", "", "RawHeaderList", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saveToDisk()", { "saveToDisk", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAttributes(AttributesMap&)", { "setAttributes", "AttributesMap&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExpirationDate(QDateTime&)", { "setExpirationDate", "QDateTime&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastModified(QDateTime&)", { "setLastModified", "QDateTime&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawHeaders(RawHeaderList&)", { "setRawHeaders", "RawHeaderList&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSaveToDisk(bool)", { "setSaveToDisk", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrl(QUrl&)", { "setUrl", "QUrl&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkCacheMetaData&)", { "swap", "QNetworkCacheMetaData&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCacheMetaData::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkCacheMetaData::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkCacheMetaData::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQNetworkCacheMetaData::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkCacheMetaData::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkCacheMetaData::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkCacheMetaData", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkCacheMetaData::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkCacheMetaData::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkCacheMetaData *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkCacheMetaData(); break;
        case 1: o = new QNetworkCacheMetaData((*reinterpret_cast< QNetworkCacheMetaData(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkCacheMetaData *p = new PlastiQQNetworkCacheMetaData();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkCacheMetaData *p = new PlastiQQNetworkCacheMetaData();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkCacheMetaData *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkCacheMetaData*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->attributes() | ret: `AttributesMap` (INTERNAL CLASS) */ break;
        case 1: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->expirationDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->lastModified());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: /* o->rawHeaders() | ret: `RawHeaderList` (INTERNAL CLASS) */ break;
        case 5: { bool _r = o->saveToDisk();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->setAttributes((*reinterpret_cast< QNetworkCacheMetaData::AttributesMap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setExpirationDate((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLastModified((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setRawHeaders((*reinterpret_cast< QNetworkCacheMetaData::RawHeaderList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setSaveToDisk(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->swap((*reinterpret_cast< QNetworkCacheMetaData(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QNetworkCacheMetaData *o = reinterpret_cast<QNetworkCacheMetaData*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkCacheMetaData::~PlastiQQNetworkCacheMetaData() {
    QNetworkCacheMetaData* o = reinterpret_cast<QNetworkCacheMetaData*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
