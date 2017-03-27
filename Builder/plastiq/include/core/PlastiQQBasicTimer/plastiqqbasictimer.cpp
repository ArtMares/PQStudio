#include "plastiqmethod.h"
#include "plastiqqbasictimer.h"

#include <QBasicTimer> 

QHash<QByteArray, PlastiQMethod> PlastiQQBasicTimer::plastiqConstructors = {
    { "QBasicTimer()", { "QBasicTimer", "", "QBasicTimer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBasicTimer::plastiqMethods = {
    { "isActive()", { "isActive", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(int,QObject*)", { "start", "int,QObject*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(int,enum,QObject*)", { "start", "int,Qt::TimerType,QObject*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timerId()", { "timerId", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBasicTimer::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQBasicTimer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQBasicTimer::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBasicTimer::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQBasicTimer::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQBasicTimer::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QBasicTimer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBasicTimer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBasicTimer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBasicTimer *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBasicTimer(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBasicTimer *p = new PlastiQQBasicTimer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBasicTimer *p = new PlastiQQBasicTimer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBasicTimer *o = sc ? Q_NULLPTR : reinterpret_cast<QBasicTimer*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->start(stack[1].s_int,
                    reinterpret_cast<QObject*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->start(stack[1].s_int,
                    Qt::TimerType(stack[2].s_int64),
                    reinterpret_cast<QObject*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->timerId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QBasicTimer *o = reinterpret_cast<QBasicTimer*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQBasicTimer::~PlastiQQBasicTimer() {
    QBasicTimer* o = reinterpret_cast<QBasicTimer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
