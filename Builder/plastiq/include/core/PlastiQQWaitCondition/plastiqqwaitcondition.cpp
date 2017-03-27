#include "plastiqmethod.h"
#include "plastiqqwaitcondition.h"

#include <QWaitCondition> 

QHash<QByteArray, PlastiQMethod> PlastiQQWaitCondition::plastiqConstructors = {
    { "QWaitCondition()", { "QWaitCondition", "", "QWaitCondition*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWaitCondition::plastiqMethods = {
    { "notify_all()", { "notify_all", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notify_one()", { "notify_one", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wait(QMutex*)", { "wait", "QMutex*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wait(QMutex*,unsigned long)", { "wait", "QMutex*,unsigned long", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wait(QReadWriteLock*)", { "wait", "QReadWriteLock*", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wait(QReadWriteLock*,unsigned long)", { "wait", "QReadWriteLock*,unsigned long", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wakeAll()", { "wakeAll", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wakeOne()", { "wakeOne", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWaitCondition::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWaitCondition::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWaitCondition::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWaitCondition::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWaitCondition::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWaitCondition::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWaitCondition", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWaitCondition::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWaitCondition::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWaitCondition *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWaitCondition(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWaitCondition *p = new PlastiQQWaitCondition();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWaitCondition *p = new PlastiQQWaitCondition();
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
        QWaitCondition *o = sc ? Q_NULLPTR : reinterpret_cast<QWaitCondition*>(object->plastiq_data());

        switch(id) {
        case 0: o->notify_all();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->notify_one();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->wait(reinterpret_cast<QMutex*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: /* o->wait(reinterpret_cast<QMutex*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_unsigned long) | ret: `bool` */ break;
        case 4: { bool _r = o->wait(reinterpret_cast<QReadWriteLock*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: /* o->wait(reinterpret_cast<QReadWriteLock*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_unsigned long) | ret: `bool` */ break;
        case 6: o->wakeAll();
                stack[0].type = PlastiQ::Void; break;
        case 7: o->wakeOne();
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
        QWaitCondition *o = reinterpret_cast<QWaitCondition*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWaitCondition::~PlastiQQWaitCondition() {
    QWaitCondition* o = reinterpret_cast<QWaitCondition*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
