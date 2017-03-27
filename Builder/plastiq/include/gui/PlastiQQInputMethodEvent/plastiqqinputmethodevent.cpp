#include "plastiqmethod.h"
#include "plastiqqinputmethodevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QInputMethodEvent> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethodEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethodEvent::plastiqMethods = {
    { "commitString()", { "commitString", "", "const QString&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preeditString()", { "preeditString", "", "const QString&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replacementLength()", { "replacementLength", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replacementStart()", { "replacementStart", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCommitString(QString)", { "setCommitString", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCommitString(QString,int)", { "setCommitString", "QString&,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCommitString(QString,int,int)", { "setCommitString", "QString&,int,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethodEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQInputMethodEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQInputMethodEvent::plastiqConstants = {

    /* QInputMethodEvent::AttributeType */
   { "TextFormat", QInputMethodEvent::TextFormat },
   { "Cursor", QInputMethodEvent::Cursor },
   { "Language", QInputMethodEvent::Language },
   { "Ruby", QInputMethodEvent::Ruby },
   { "Selection", QInputMethodEvent::Selection },

};

QVector<PlastiQMetaObject*> PlastiQQInputMethodEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQInputMethodEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQInputMethodEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QInputMethodEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQInputMethodEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQInputMethodEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QInputMethodEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQInputMethodEvent *p = new PlastiQQInputMethodEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQInputMethodEvent *p = new PlastiQQInputMethodEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QInputMethodEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QInputMethodEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QString *_r = new QString(o->commitString());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QString *_r = new QString(o->preeditString());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QString";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->replacementLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->replacementStart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setCommitString(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setCommitString(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setCommitString(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_int);
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
        QInputMethodEvent *o = reinterpret_cast<QInputMethodEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQInputMethodEvent::~PlastiQQInputMethodEvent() {
    QInputMethodEvent* o = reinterpret_cast<QInputMethodEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
