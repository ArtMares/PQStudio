#include "plastiqmethod.h"
#include "plastiqqfocusevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QFocusEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQFocusEvent::plastiqConstructors = {
    { "QFocusEvent(Type)", { "QFocusEvent", "Type", "QFocusEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFocusEvent(Type,enum)", { "QFocusEvent", "Type,Qt::FocusReason", "QFocusEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFocusEvent::plastiqMethods = {
    { "gotFocus()", { "gotFocus", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lostFocus()", { "lostFocus", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reason()", { "reason", "", "Qt::FocusReason", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFocusEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFocusEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFocusEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFocusEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFocusEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQFocusEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QFocusEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFocusEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFocusEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFocusEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QFocusEvent(UNSUPPORTED_TYPE_Type); break;*/
        /*case 1: o = new QFocusEvent(UNSUPPORTED_TYPE_Type,
                    Qt::FocusReason(stack[2].s_int64)); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFocusEvent *p = new PlastiQQFocusEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFocusEvent *p = new PlastiQQFocusEvent();
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
        QFocusEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QFocusEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->gotFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->lostFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { qint64 _r = o->reason(); // HACK for Qt::FocusReason 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QFocusEvent *o = reinterpret_cast<QFocusEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFocusEvent::~PlastiQQFocusEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
