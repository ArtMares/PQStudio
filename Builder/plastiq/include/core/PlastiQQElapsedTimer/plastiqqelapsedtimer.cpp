#include "plastiqmethod.h"
#include "plastiqqelapsedtimer.h"

#include <QElapsedTimer> 

QHash<QByteArray, PlastiQMethod> PlastiQQElapsedTimer::plastiqConstructors = {
    { "QElapsedTimer()", { "QElapsedTimer", "", "QElapsedTimer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQElapsedTimer::plastiqMethods = {
    { "elapsed()", { "elapsed", "", "qint64", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasExpired(long)", { "hasExpired", "qint64", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invalidate()", { "invalidate", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "msecsSinceReference()", { "msecsSinceReference", "", "qint64", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "msecsTo(QElapsedTimer&)", { "msecsTo", "QElapsedTimer&", "qint64", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nsecsElapsed()", { "nsecsElapsed", "", "qint64", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restart()", { "restart", "", "qint64", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "secsTo(QElapsedTimer&)", { "secsTo", "QElapsedTimer&", "qint64", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clockType()", { "clockType", "", "ClockType", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isMonotonic()", { "isMonotonic", "", "bool", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQElapsedTimer::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQElapsedTimer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQElapsedTimer::plastiqConstants = {

    /* QElapsedTimer::ClockType */
   { "SystemTime", QElapsedTimer::SystemTime },
   { "MonotonicClock", QElapsedTimer::MonotonicClock },
   { "TickCounter", QElapsedTimer::TickCounter },
   { "MachAbsoluteTime", QElapsedTimer::MachAbsoluteTime },
   { "PerformanceCounter", QElapsedTimer::PerformanceCounter },

};

QVector<PlastiQMetaObject*> PlastiQQElapsedTimer::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQElapsedTimer::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQElapsedTimer::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QElapsedTimer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQElapsedTimer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQElapsedTimer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QElapsedTimer *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QElapsedTimer(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQElapsedTimer *p = new PlastiQQElapsedTimer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQElapsedTimer *p = new PlastiQQElapsedTimer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QElapsedTimer *o = sc ? Q_NULLPTR : reinterpret_cast<QElapsedTimer*>(object->plastiq_data());

        switch(id) {
        case 0: { long _r = o->elapsed();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 1: { bool _r = o->hasExpired(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->invalidate();
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { long _r = o->msecsSinceReference();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 5: { long _r = o->msecsTo((*reinterpret_cast< QElapsedTimer(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: { long _r = o->nsecsElapsed();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 7: { long _r = o->restart();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 8: { long _r = o->secsTo((*reinterpret_cast< QElapsedTimer(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 9: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 10: { qint64 _r = sc ? QElapsedTimer::clockType() : o->clockType(); // HACK for ClockType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { bool _r = sc ? QElapsedTimer::isMonotonic() : o->isMonotonic();
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
        QElapsedTimer *o = reinterpret_cast<QElapsedTimer*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQElapsedTimer::~PlastiQQElapsedTimer() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
