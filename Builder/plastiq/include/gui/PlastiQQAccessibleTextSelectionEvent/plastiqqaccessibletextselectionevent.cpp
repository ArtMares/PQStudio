#include "plastiqmethod.h"
#include "plastiqqaccessibletextselectionevent.h"

#include "gui/PlastiQQAccessibleTextCursorEvent/plastiqqaccessibletextcursorevent.h"
#include <QAccessibleTextSelectionEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextSelectionEvent::plastiqConstructors = {
    { "QAccessibleTextSelectionEvent(QObject*,int,int)", { "QAccessibleTextSelectionEvent", "QObject*,int,int", "QAccessibleTextSelectionEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleTextSelectionEvent(QAccessibleInterface*,int,int)", { "QAccessibleTextSelectionEvent", "QAccessibleInterface*,int,int", "QAccessibleTextSelectionEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextSelectionEvent::plastiqMethods = {
    { "selectionEnd()", { "selectionEnd", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionStart()", { "selectionStart", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelection(int,int)", { "setSelection", "int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextSelectionEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTextSelectionEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTextSelectionEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTextSelectionEvent::plastiqInherits = { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleTextSelectionEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleTextSelectionEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleTextSelectionEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTextSelectionEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleTextSelectionEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleTextSelectionEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleTextSelectionEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int); break;
        case 1: o = new QAccessibleTextSelectionEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleTextSelectionEvent *p = new PlastiQQAccessibleTextSelectionEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTextSelectionEvent *p = new PlastiQQAccessibleTextSelectionEvent();
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
        QAccessibleTextSelectionEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTextSelectionEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->selectionEnd();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->selectionStart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: o->setSelection(stack[1].s_int,
                    stack[2].s_int);
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
        QAccessibleTextSelectionEvent *o = reinterpret_cast<QAccessibleTextSelectionEvent*>(object->plastiq_data());

        if(className == "QAccessibleTextCursorEvent") {
            stack[0].s_voidp = static_cast<QAccessibleTextCursorEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleTextSelectionEvent::~PlastiQQAccessibleTextSelectionEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
