#include "plastiqmethod.h"
#include "plastiqqnetworkdiskcache.h"

#include "network/PlastiQQAbstractNetworkCache/plastiqqabstractnetworkcache.h"
#include <QNetworkDiskCache> 
#include <QString>
#include <QNetworkCacheMetaData>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkDiskCache::plastiqConstructors = {
    { "QNetworkDiskCache()", { "QNetworkDiskCache", "", "QNetworkDiskCache*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkDiskCache(QObject*)", { "QNetworkDiskCache", "QObject*", "QNetworkDiskCache*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkDiskCache::plastiqMethods = {
    { "cacheDirectory()", { "cacheDirectory", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileMetaData(QString)", { "fileMetaData", "QString&", "QNetworkCacheMetaData", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumCacheSize()", { "maximumCacheSize", "", "qint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCacheDirectory(QString)", { "setCacheDirectory", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumCacheSize(long)", { "setMaximumCacheSize", "qint64", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expire()", { "expire", "", "qint64", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkDiskCache::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkDiskCache::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkDiskCache::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQNetworkDiskCache::plastiqInherits = { &PlastiQQAbstractNetworkCache::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQNetworkDiskCache::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQNetworkDiskCache::plastiq_static_metaObject = {
    { &PlastiQQAbstractNetworkCache::plastiq_static_metaObject, &plastiqInherits, "QNetworkDiskCache", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkDiskCache::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQNetworkDiskCacheWrapper : public QNetworkDiskCache {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQNetworkDiskCacheWrapper(QObject *parent = Q_NULLPTR)
         : QNetworkDiskCache(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    qint64 expire() override {
        static const QByteArray methodSignature = QByteArrayLiteral("qint64 expire()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            long _r = stack[0].s_long;
            delete [] stack;
            return _r;
        }
        else return QNetworkDiskCache::expire();
    }

    qint64 PlastiQParentCall_expire() {
        return QNetworkDiskCache::expire();
    }

};

void PlastiQQNetworkDiskCache::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQNetworkDiskCacheWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQNetworkDiskCacheWrapper(); break;
        case 1: o = new PlastiQQNetworkDiskCacheWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQNetworkDiskCache *p = new PlastiQQNetworkDiskCache();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkDiskCache *p = new PlastiQQNetworkDiskCache();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQAbstractNetworkCache::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkDiskCache *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkDiskCache*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->cacheDirectory();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QNetworkCacheMetaData *_r = new QNetworkCacheMetaData(o->fileMetaData(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkCacheMetaData";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { long _r = o->maximumCacheSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 3: o->setCacheDirectory(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setMaximumCacheSize(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 5: { long _r;
                if (isWrapper) _r = ((PlastiQQNetworkDiskCacheWrapper*)o)->PlastiQParentCall_expire();
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: o->clear();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractNetworkCache::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QNetworkDiskCache *o = reinterpret_cast<QNetworkDiskCache*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QNetworkDiskCache *o = reinterpret_cast<QNetworkDiskCache*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QNetworkDiskCache *o = reinterpret_cast<QNetworkDiskCache*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QNetworkDiskCache *o = reinterpret_cast<QNetworkDiskCache*>(object->plastiq_data());

        if(className == "QAbstractNetworkCache") {
            stack[0].s_voidp = static_cast<QAbstractNetworkCache*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQNetworkDiskCache::~PlastiQQNetworkDiskCache() {
    QNetworkDiskCache* o = reinterpret_cast<QNetworkDiskCache*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
