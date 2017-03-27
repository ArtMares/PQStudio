#include "plastiqmethod.h"
#include "plastiqqscrollevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QScrollEvent> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQScrollEvent::plastiqConstructors = {
    { "QScrollEvent(QPointF&,QPointF&,enum)", { "QScrollEvent", "QPointF&,QPointF&,ScrollState", "QScrollEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollEvent::plastiqMethods = {
    { "contentPos()", { "contentPos", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overshootDistance()", { "overshootDistance", "", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scrollState()", { "scrollState", "", "ScrollState", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQScrollEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQScrollEvent::plastiqConstants = {

    /* QScrollEvent::ScrollState */
   { "ScrollStarted", QScrollEvent::ScrollStarted },
   { "ScrollUpdated", QScrollEvent::ScrollUpdated },
   { "ScrollFinished", QScrollEvent::ScrollFinished },

};

QVector<PlastiQMetaObject*> PlastiQQScrollEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQScrollEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQScrollEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QScrollEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQScrollEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQScrollEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QScrollEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QScrollEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    QScrollEvent::ScrollState(stack[3].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQScrollEvent *p = new PlastiQQScrollEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQScrollEvent *p = new PlastiQQScrollEvent();
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
        QScrollEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QScrollEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->contentPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->overshootDistance());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->scrollState(); // HACK for ScrollState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QScrollEvent *o = reinterpret_cast<QScrollEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQScrollEvent::~PlastiQQScrollEvent() {
    QScrollEvent* o = reinterpret_cast<QScrollEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
