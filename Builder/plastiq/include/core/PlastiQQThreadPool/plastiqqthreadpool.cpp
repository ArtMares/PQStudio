#include "plastiqmethod.h"
#include "plastiqqthreadpool.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QThreadPool> 

QHash<QByteArray, PlastiQMethod> PlastiQQThreadPool::plastiqConstructors = {
    { "QThreadPool()", { "QThreadPool", "", "QThreadPool*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QThreadPool(QObject*)", { "QThreadPool", "QObject*", "QThreadPool*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQThreadPool::plastiqMethods = {
    { "activeThreadCount()", { "activeThreadCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cancel(QRunnable*)", { "cancel", "QRunnable*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expiryTimeout()", { "expiryTimeout", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxThreadCount()", { "maxThreadCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "releaseThread()", { "releaseThread", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reserveThread()", { "reserveThread", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExpiryTimeout(int)", { "setExpiryTimeout", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaxThreadCount(int)", { "setMaxThreadCount", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QRunnable*)", { "start", "QRunnable*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QRunnable*,int)", { "start", "QRunnable*,int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryStart(QRunnable*)", { "tryStart", "QRunnable*", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForDone()", { "waitForDone", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForDone(int)", { "waitForDone", "int", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalInstance()", { "globalInstance", "", "QThreadPool*", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQThreadPool::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQThreadPool::plastiqProperties = {
    { "activeThreadCount", { "activeThreadCount", "int", "", "activeThreadCount" } },
    { "expiryTimeout", { "expiryTimeout", "int", "setExpiryTimeout", "expiryTimeout" } },
    { "maxThreadCount", { "maxThreadCount", "int", "setMaxThreadCount", "maxThreadCount" } },

};

QHash<QByteArray, long> PlastiQQThreadPool::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQThreadPool::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQThreadPool::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQThreadPool::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QThreadPool", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQThreadPool::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQThreadPool::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QThreadPool *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QThreadPool(); break;
        case 1: o = new QThreadPool(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQThreadPool *p = new PlastiQQThreadPool();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQThreadPool *p = new PlastiQQThreadPool();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QThreadPool *o = sc ? Q_NULLPTR : reinterpret_cast<QThreadPool*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->activeThreadCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: o->cancel(reinterpret_cast<QRunnable*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 3: { int _r = o->expiryTimeout();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->maxThreadCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: o->releaseThread();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->reserveThread();
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setExpiryTimeout(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setMaxThreadCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->start(reinterpret_cast<QRunnable*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->start(reinterpret_cast<QRunnable*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: { bool _r = o->tryStart(reinterpret_cast<QRunnable*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->waitForDone();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->waitForDone(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { QThreadPool* _r = sc ? QThreadPool::globalInstance() : o->globalInstance();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QThreadPool"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QThreadPool *o = reinterpret_cast<QThreadPool*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QThreadPool *o = reinterpret_cast<QThreadPool*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QThreadPool *o = reinterpret_cast<QThreadPool*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QThreadPool *o = reinterpret_cast<QThreadPool*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQThreadPool::~PlastiQQThreadPool() {
    QThreadPool* o = reinterpret_cast<QThreadPool*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
