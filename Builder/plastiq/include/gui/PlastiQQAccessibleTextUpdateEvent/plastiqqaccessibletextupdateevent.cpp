#include "plastiqmethod.h"
#include "plastiqqaccessibletextupdateevent.h"

#include "gui/PlastiQQAccessibleTextCursorEvent/plastiqqaccessibletextcursorevent.h"
#include <QAccessibleTextUpdateEvent> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextUpdateEvent::plastiqConstructors = {
    { "QAccessibleTextUpdateEvent(QObject*,int,QString,QString)", { "QAccessibleTextUpdateEvent", "QObject*,int,QString&,QString&", "QAccessibleTextUpdateEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleTextUpdateEvent(QAccessibleInterface*,int,QString,QString)", { "QAccessibleTextUpdateEvent", "QAccessibleInterface*,int,QString&,QString&", "QAccessibleTextUpdateEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextUpdateEvent::plastiqMethods = {
    { "changePosition()", { "changePosition", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInserted()", { "textInserted", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textRemoved()", { "textRemoved", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextUpdateEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTextUpdateEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTextUpdateEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTextUpdateEvent::plastiqInherits = { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleTextUpdateEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleTextUpdateEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleTextUpdateEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTextUpdateEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleTextUpdateEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleTextUpdateEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleTextUpdateEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_string); break;
        case 1: o = new QAccessibleTextUpdateEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleTextUpdateEvent *p = new PlastiQQAccessibleTextUpdateEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTextUpdateEvent *p = new PlastiQQAccessibleTextUpdateEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleTextUpdateEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTextUpdateEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->changePosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QString _r = o->textInserted();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->textRemoved();
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
        QAccessibleTextUpdateEvent *o = reinterpret_cast<QAccessibleTextUpdateEvent*>(object->plastiq_data());

        if(className == "QAccessibleTextCursorEvent") {
            stack[0].s_voidp = static_cast<QAccessibleTextCursorEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleTextUpdateEvent::~PlastiQQAccessibleTextUpdateEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
