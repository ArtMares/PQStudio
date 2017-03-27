#include "plastiqmethod.h"
#include "plastiqqstatustipevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QStatusTipEvent> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQStatusTipEvent::plastiqConstructors = {
    { "QStatusTipEvent(QString)", { "QStatusTipEvent", "QString&", "QStatusTipEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStatusTipEvent::plastiqMethods = {
    { "tip()", { "tip", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStatusTipEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStatusTipEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStatusTipEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStatusTipEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStatusTipEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQStatusTipEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QStatusTipEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStatusTipEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStatusTipEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStatusTipEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStatusTipEvent(stack[1].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStatusTipEvent *p = new PlastiQQStatusTipEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStatusTipEvent *p = new PlastiQQStatusTipEvent();
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
        QStatusTipEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QStatusTipEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->tip();
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
        QStatusTipEvent *o = reinterpret_cast<QStatusTipEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStatusTipEvent::~PlastiQQStatusTipEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
