#include "plastiqmethod.h"
#include "plastiqqsharedmemory.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QSharedMemory> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSharedMemory::plastiqConstructors = {
    { "QSharedMemory(QString)", { "QSharedMemory", "QString&", "QSharedMemory*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSharedMemory(QString,QObject*)", { "QSharedMemory", "QString&,QObject*", "QSharedMemory*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSharedMemory()", { "QSharedMemory", "", "QSharedMemory*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSharedMemory(QObject*)", { "QSharedMemory", "QObject*", "QSharedMemory*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSharedMemory::plastiqMethods = {
    { "attach()", { "attach", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "attach(enum)", { "attach", "AccessMode", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constData()", { "constData", "", "const void*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "create(int)", { "create", "int", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "create(int,enum)", { "create", "int,AccessMode", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "void*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "detach()", { "detach", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "SharedMemoryError", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAttached()", { "isAttached", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lock()", { "lock", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeKey()", { "nativeKey", "", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKey(QString)", { "setKey", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNativeKey(QString)", { "setNativeKey", "QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unlock()", { "unlock", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSharedMemory::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSharedMemory::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSharedMemory::plastiqConstants = {

    /* QSharedMemory::AccessMode */
   { "ReadOnly", QSharedMemory::ReadOnly },
   { "ReadWrite", QSharedMemory::ReadWrite },

    /* QSharedMemory::SharedMemoryError */
   { "NoError", QSharedMemory::NoError },
   { "PermissionDenied", QSharedMemory::PermissionDenied },
   { "InvalidSize", QSharedMemory::InvalidSize },
   { "KeyError", QSharedMemory::KeyError },
   { "AlreadyExists", QSharedMemory::AlreadyExists },
   { "NotFound", QSharedMemory::NotFound },
   { "LockError", QSharedMemory::LockError },
   { "OutOfResources", QSharedMemory::OutOfResources },
   { "UnknownError", QSharedMemory::UnknownError },

};

QVector<PlastiQMetaObject*> PlastiQQSharedMemory::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSharedMemory::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSharedMemory::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QSharedMemory", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSharedMemory::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSharedMemory::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSharedMemory *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSharedMemory(stack[1].s_string); break;
        case 1: o = new QSharedMemory(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 2: o = new QSharedMemory(); break;
        case 3: o = new QSharedMemory(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSharedMemory *p = new PlastiQQSharedMemory();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSharedMemory *p = new PlastiQQSharedMemory();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSharedMemory *o = sc ? Q_NULLPTR : reinterpret_cast<QSharedMemory*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->attach();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->attach(QSharedMemory::AccessMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { void* _r = const_cast<void*>(o->constData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "void"; } break;
        case 3: { bool _r = o->create(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->create(stack[1].s_int,
                    QSharedMemory::AccessMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { void* _r = o->data();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "void"; } break;
        case 6: { bool _r = o->detach();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { qint64 _r = o->error(); // HACK for SharedMemoryError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { bool _r = o->isAttached();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { QString _r = o->key();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { bool _r = o->lock();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { QString _r = o->nativeKey();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: o->setKey(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setNativeKey(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 15: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { bool _r = o->unlock();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSharedMemory *o = reinterpret_cast<QSharedMemory*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSharedMemory *o = reinterpret_cast<QSharedMemory*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSharedMemory *o = reinterpret_cast<QSharedMemory*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSharedMemory *o = reinterpret_cast<QSharedMemory*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSharedMemory::~PlastiQQSharedMemory() {
    QSharedMemory* o = reinterpret_cast<QSharedMemory*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
