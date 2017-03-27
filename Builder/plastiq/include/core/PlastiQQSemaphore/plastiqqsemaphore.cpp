#include "plastiqmethod.h"
#include "plastiqqsemaphore.h"

#include <QSemaphore> 

QHash<QByteArray, PlastiQMethod> PlastiQQSemaphore::plastiqConstructors = {
    { "QSemaphore()", { "QSemaphore", "", "QSemaphore*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSemaphore(int)", { "QSemaphore", "int", "QSemaphore*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSemaphore::plastiqMethods = {
    { "acquire()", { "acquire", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "acquire(int)", { "acquire", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "available()", { "available", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "release()", { "release", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "release(int)", { "release", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryAcquire()", { "tryAcquire", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryAcquire(int)", { "tryAcquire", "int", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryAcquire(int,int)", { "tryAcquire", "int,int", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSemaphore::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSemaphore::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSemaphore::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSemaphore::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSemaphore::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSemaphore::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSemaphore", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSemaphore::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSemaphore::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSemaphore *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSemaphore(); break;
        case 1: o = new QSemaphore(stack[1].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSemaphore *p = new PlastiQQSemaphore();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSemaphore *p = new PlastiQQSemaphore();
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
        QSemaphore *o = sc ? Q_NULLPTR : reinterpret_cast<QSemaphore*>(object->plastiq_data());

        switch(id) {
        case 0: o->acquire();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->acquire(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 2: { int _r = o->available();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: o->release();
                stack[0].type = PlastiQ::Void; break;
        case 4: o->release(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: { bool _r = o->tryAcquire();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->tryAcquire(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->tryAcquire(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QSemaphore *o = reinterpret_cast<QSemaphore*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSemaphore::~PlastiQQSemaphore() {
    QSemaphore* o = reinterpret_cast<QSemaphore*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
