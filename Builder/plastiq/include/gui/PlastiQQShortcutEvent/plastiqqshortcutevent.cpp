#include "plastiqmethod.h"
#include "plastiqqshortcutevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QShortcutEvent> 
#include <QKeySequence>

QHash<QByteArray, PlastiQMethod> PlastiQQShortcutEvent::plastiqConstructors = {
    { "QShortcutEvent(QKeySequence&,int)", { "QShortcutEvent", "QKeySequence&,int", "QShortcutEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QShortcutEvent(QKeySequence&,int,bool)", { "QShortcutEvent", "QKeySequence&,int,bool", "QShortcutEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQShortcutEvent::plastiqMethods = {
    { "isAmbiguous()", { "isAmbiguous", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "const QKeySequence&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shortcutId()", { "shortcutId", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQShortcutEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQShortcutEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQShortcutEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQShortcutEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQShortcutEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQShortcutEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QShortcutEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQShortcutEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQShortcutEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QShortcutEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QShortcutEvent((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    stack[2].s_int); break;
        case 1: o = new QShortcutEvent((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_bool); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQShortcutEvent *p = new PlastiQQShortcutEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQShortcutEvent *p = new PlastiQQShortcutEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QShortcutEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QShortcutEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isAmbiguous();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { /* COPY OBJECT */
            QKeySequence *_r = new QKeySequence(o->key());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->shortcutId();
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
        QShortcutEvent *o = reinterpret_cast<QShortcutEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQShortcutEvent::~PlastiQQShortcutEvent() {
    QShortcutEvent* o = reinterpret_cast<QShortcutEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
