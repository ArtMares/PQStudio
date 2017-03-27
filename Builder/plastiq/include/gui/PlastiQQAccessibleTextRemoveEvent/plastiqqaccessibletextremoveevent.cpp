#include "plastiqmethod.h"
#include "plastiqqaccessibletextremoveevent.h"

#include "gui/PlastiQQAccessibleTextCursorEvent/plastiqqaccessibletextcursorevent.h"
#include <QAccessibleTextRemoveEvent> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextRemoveEvent::plastiqConstructors = {
    { "QAccessibleTextRemoveEvent(QObject*,int,QString)", { "QAccessibleTextRemoveEvent", "QObject*,int,QString&", "QAccessibleTextRemoveEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleTextRemoveEvent(QAccessibleInterface*,int,QString)", { "QAccessibleTextRemoveEvent", "QAccessibleInterface*,int,QString&", "QAccessibleTextRemoveEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextRemoveEvent::plastiqMethods = {
    { "changePosition()", { "changePosition", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textRemoved()", { "textRemoved", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextRemoveEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTextRemoveEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTextRemoveEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTextRemoveEvent::plastiqInherits = { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleTextRemoveEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleTextRemoveEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleTextRemoveEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTextRemoveEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleTextRemoveEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleTextRemoveEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleTextRemoveEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_string); break;
        case 1: o = new QAccessibleTextRemoveEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleTextRemoveEvent *p = new PlastiQQAccessibleTextRemoveEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTextRemoveEvent *p = new PlastiQQAccessibleTextRemoveEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleTextRemoveEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTextRemoveEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->changePosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QString _r = o->textRemoved();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QAccessibleTextRemoveEvent *o = reinterpret_cast<QAccessibleTextRemoveEvent*>(object->plastiq_data());

        if(className == "QAccessibleTextCursorEvent") {
            stack[0].s_voidp = static_cast<QAccessibleTextCursorEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleTextRemoveEvent::~PlastiQQAccessibleTextRemoveEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
