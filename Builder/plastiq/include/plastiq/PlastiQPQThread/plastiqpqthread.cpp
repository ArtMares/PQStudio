#include "plastiqpqthread.h"
#include "pqthread.h"

#include "plastiqmethod.h"

#include "core/PlastiQQThread/plastiqqthread.h"

QHash<QByteArray, PlastiQMethod> PlastiQPQThread::plastiqConstructors = {
    { "PQThread()", { "PQThread", "", "PQThread*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "PQThread(QObject*)", { "PQThread", "QObject*", "PQThread*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
};

QHash<QByteArray, PlastiQMethod> PlastiQPQThread::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQPQThread::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQPQThread::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQPQThread::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQPQThread::plastiqInherits = { &PlastiQQThread::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQPQThread::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQPQThread::plastiq_static_metaObject = {
    { &PlastiQQThread::plastiq_static_metaObject, &plastiqInherits, "PQThread", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQPQThread::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQPQThread::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PQThread *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PQThread(); break;
        case 1: o = new PQThread(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        PlastiQPQThread *p = new PlastiQPQThread();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQPQThread *p = new PlastiQPQThread();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQThread::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQThread::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        PQThread *o = reinterpret_cast<PQThread*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        PQThread *o = reinterpret_cast<PQThread*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
}

PlastiQPQThread::~PlastiQPQThread() {
    PQThread* o = reinterpret_cast<PQThread*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

