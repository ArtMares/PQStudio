#include "plastiqmethod.h"
#include "plastiqqwhatsthisclickedevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QWhatsThisClickedEvent> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQWhatsThisClickedEvent::plastiqConstructors = {
    { "QWhatsThisClickedEvent(QString)", { "QWhatsThisClickedEvent", "QString&", "QWhatsThisClickedEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWhatsThisClickedEvent::plastiqMethods = {
    { "href()", { "href", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWhatsThisClickedEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWhatsThisClickedEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWhatsThisClickedEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWhatsThisClickedEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWhatsThisClickedEvent::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWhatsThisClickedEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QWhatsThisClickedEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWhatsThisClickedEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWhatsThisClickedEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWhatsThisClickedEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWhatsThisClickedEvent(stack[1].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWhatsThisClickedEvent *p = new PlastiQQWhatsThisClickedEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWhatsThisClickedEvent *p = new PlastiQQWhatsThisClickedEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWhatsThisClickedEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QWhatsThisClickedEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->href();
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
        QWhatsThisClickedEvent *o = reinterpret_cast<QWhatsThisClickedEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWhatsThisClickedEvent::~PlastiQQWhatsThisClickedEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
