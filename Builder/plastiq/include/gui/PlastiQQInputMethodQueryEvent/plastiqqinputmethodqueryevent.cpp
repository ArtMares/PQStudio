#include "plastiqmethod.h"
#include "plastiqqinputmethodqueryevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QInputMethodQueryEvent> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethodQueryEvent::plastiqConstructors = {
    { "QInputMethodQueryEvent(enum)", { "QInputMethodQueryEvent", "Qt::InputMethodQueries", "QInputMethodQueryEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethodQueryEvent::plastiqMethods = {
    { "queries()", { "queries", "", "Qt::InputMethodQueries", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValue(enum,QVariant)", { "setValue", "Qt::InputMethodQuery,QVariant&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(enum)", { "value", "Qt::InputMethodQuery", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethodQueryEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQInputMethodQueryEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQInputMethodQueryEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQInputMethodQueryEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQInputMethodQueryEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQInputMethodQueryEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QInputMethodQueryEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQInputMethodQueryEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQInputMethodQueryEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QInputMethodQueryEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QInputMethodQueryEvent(Qt::InputMethodQueries(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQInputMethodQueryEvent *p = new PlastiQQInputMethodQueryEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQInputMethodQueryEvent *p = new PlastiQQInputMethodQueryEvent();
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
        QInputMethodQueryEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QInputMethodQueryEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->queries(); // HACK for Qt::InputMethodQueries 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->setValue(Qt::InputMethodQuery(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->value(Qt::InputMethodQuery(stack[1].s_int64)));
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
        QInputMethodQueryEvent *o = reinterpret_cast<QInputMethodQueryEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQInputMethodQueryEvent::~PlastiQQInputMethodQueryEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
