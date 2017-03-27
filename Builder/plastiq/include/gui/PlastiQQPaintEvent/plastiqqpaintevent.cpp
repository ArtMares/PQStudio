#include "plastiqmethod.h"
#include "plastiqqpaintevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QPaintEvent> 
#include <QRect>
#include <QRegion>

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEvent::plastiqConstructors = {
    { "QPaintEvent(QRegion&)", { "QPaintEvent", "QRegion&", "QPaintEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPaintEvent(QRect&)", { "QPaintEvent", "QRect&", "QPaintEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEvent::plastiqMethods = {
    { "rect()", { "rect", "", "const QRect&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "region()", { "region", "", "const QRegion&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPaintEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPaintEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPaintEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPaintEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPaintEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQPaintEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QPaintEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPaintEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPaintEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPaintEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPaintEvent((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))); break;
        case 1: o = new QPaintEvent((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPaintEvent *p = new PlastiQQPaintEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPaintEvent *p = new PlastiQQPaintEvent();
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
        QPaintEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QPaintEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->region());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
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
        QPaintEvent *o = reinterpret_cast<QPaintEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPaintEvent::~PlastiQQPaintEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
