#include "plastiqmethod.h"
#include "plastiqqresizeevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QResizeEvent> 
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQResizeEvent::plastiqConstructors = {
    { "QResizeEvent(QSize&,QSize&)", { "QResizeEvent", "QSize&,QSize&", "QResizeEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQResizeEvent::plastiqMethods = {
    { "oldSize()", { "oldSize", "", "const QSize&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "const QSize&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQResizeEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQResizeEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQResizeEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQResizeEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQResizeEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQResizeEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QResizeEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQResizeEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQResizeEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QResizeEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QResizeEvent((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQResizeEvent *p = new PlastiQQResizeEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQResizeEvent *p = new PlastiQQResizeEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QResizeEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QResizeEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSize *_r = new QSize(o->oldSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
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
        QResizeEvent *o = reinterpret_cast<QResizeEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQResizeEvent::~PlastiQQResizeEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
