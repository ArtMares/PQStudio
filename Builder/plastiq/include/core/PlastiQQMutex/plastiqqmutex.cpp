#include "plastiqmethod.h"
#include "plastiqqmutex.h"

#include <QMutex> 

QHash<QByteArray, PlastiQMethod> PlastiQQMutex::plastiqConstructors = {
    { "QMutex()", { "QMutex", "", "QMutex*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMutex(enum)", { "QMutex", "RecursionMode", "QMutex*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMutex::plastiqMethods = {
    { "isRecursive()", { "isRecursive", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lock()", { "lock", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLock()", { "tryLock", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLock(int)", { "tryLock", "int", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "try_lock()", { "try_lock", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "try_lock_for(std::chrono::duration<Rep,Period>)", { "try_lock_for", "std::chrono::duration<Rep,Period>", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "try_lock_until(std::chrono::time_point<Clock,Duration>)", { "try_lock_until", "std::chrono::time_point<Clock,Duration>", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unlock()", { "unlock", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMutex::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMutex::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMutex::plastiqConstants = {

    /* QMutex::RecursionMode */
   { "NonRecursive", QMutex::NonRecursive },
   { "Recursive", QMutex::Recursive },

};

QVector<PlastiQMetaObject*> PlastiQQMutex::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMutex::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMutex::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMutex", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMutex::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMutex::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMutex *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMutex(); break;
        case 1: o = new QMutex(QMutex::RecursionMode(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMutex *p = new PlastiQQMutex();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMutex *p = new PlastiQQMutex();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMutex *o = sc ? Q_NULLPTR : reinterpret_cast<QMutex*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isRecursive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->lock();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->tryLock();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->tryLock(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->try_lock();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: /* o->try_lock_for(UNSUPPORTED_TYPE_std::chrono::duration<Rep,
                    UNSUPPORTED_TYPE_Period>) | ret: `bool` */ break;
        case 6: /* o->try_lock_until(UNSUPPORTED_TYPE_std::chrono::time_point<Clock,
                    UNSUPPORTED_TYPE_Duration>) | ret: `bool` */ break;
        case 7: o->unlock();
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
        QMutex *o = reinterpret_cast<QMutex*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMutex::~PlastiQQMutex() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
