#include "plastiqmethod.h"
#include "plastiqqaccessiblevaluechangeevent.h"

#include "gui/PlastiQQAccessibleEvent/plastiqqaccessibleevent.h"
#include <QAccessibleValueChangeEvent> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleValueChangeEvent::plastiqConstructors = {
    { "QAccessibleValueChangeEvent(QObject*,QVariant)", { "QAccessibleValueChangeEvent", "QObject*,QVariant&", "QAccessibleValueChangeEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleValueChangeEvent(QAccessibleInterface*,QVariant)", { "QAccessibleValueChangeEvent", "QAccessibleInterface*,QVariant&", "QAccessibleValueChangeEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleValueChangeEvent::plastiqMethods = {
    { "setValue(QVariant)", { "setValue", "QVariant&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleValueChangeEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleValueChangeEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleValueChangeEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleValueChangeEvent::plastiqInherits = { &PlastiQQAccessibleEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleValueChangeEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleValueChangeEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleValueChangeEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleValueChangeEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleValueChangeEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleValueChangeEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleValueChangeEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_variant); break;
        case 1: o = new QAccessibleValueChangeEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    stack[2].s_variant); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleValueChangeEvent *p = new PlastiQQAccessibleValueChangeEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleValueChangeEvent *p = new PlastiQQAccessibleValueChangeEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQAccessibleEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleValueChangeEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleValueChangeEvent*>(object->plastiq_data());

        switch(id) {
        case 0: o->setValue(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->value());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QAccessibleValueChangeEvent *o = reinterpret_cast<QAccessibleValueChangeEvent*>(object->plastiq_data());

        if(className == "QAccessibleEvent") {
            stack[0].s_voidp = static_cast<QAccessibleEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleValueChangeEvent::~PlastiQQAccessibleValueChangeEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
