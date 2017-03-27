#include "plastiqmethod.h"
#include "plastiqqreadwritelock.h"

#include <QReadWriteLock> 

QHash<QByteArray, PlastiQMethod> PlastiQQReadWriteLock::plastiqConstructors = {
    { "QReadWriteLock()", { "QReadWriteLock", "", "QReadWriteLock*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QReadWriteLock(enum)", { "QReadWriteLock", "RecursionMode", "QReadWriteLock*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQReadWriteLock::plastiqMethods = {
    { "lockForRead()", { "lockForRead", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lockForWrite()", { "lockForWrite", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLockForRead()", { "tryLockForRead", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLockForRead(int)", { "tryLockForRead", "int", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLockForWrite()", { "tryLockForWrite", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLockForWrite(int)", { "tryLockForWrite", "int", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unlock()", { "unlock", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQReadWriteLock::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQReadWriteLock::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQReadWriteLock::plastiqConstants = {

    /* QReadWriteLock::RecursionMode */
   { "NonRecursive", QReadWriteLock::NonRecursive },
   { "Recursive", QReadWriteLock::Recursive },

};

QVector<PlastiQMetaObject*> PlastiQQReadWriteLock::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQReadWriteLock::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQReadWriteLock::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QReadWriteLock", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQReadWriteLock::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQReadWriteLock::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QReadWriteLock *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QReadWriteLock(); break;
        case 1: o = new QReadWriteLock(QReadWriteLock::RecursionMode(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQReadWriteLock *p = new PlastiQQReadWriteLock();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQReadWriteLock *p = new PlastiQQReadWriteLock();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QReadWriteLock *o = sc ? Q_NULLPTR : reinterpret_cast<QReadWriteLock*>(object->plastiq_data());

        switch(id) {
        case 0: o->lockForRead();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->lockForWrite();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->tryLockForRead();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->tryLockForRead(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->tryLockForWrite();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->tryLockForWrite(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->unlock();
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
        QReadWriteLock *o = reinterpret_cast<QReadWriteLock*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQReadWriteLock::~PlastiQQReadWriteLock() {
    QReadWriteLock* o = reinterpret_cast<QReadWriteLock*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
