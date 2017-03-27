#include "plastiqmethod.h"
#include "plastiqqhoverevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QHoverEvent> 
#include <QPoint>
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQHoverEvent::plastiqConstructors = {
    { "QHoverEvent(Type,QPointF&,QPointF&)", { "QHoverEvent", "Type,QPointF&,QPointF&", "QHoverEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHoverEvent(Type,QPointF&,QPointF&,enum)", { "QHoverEvent", "Type,QPointF&,QPointF&,Qt::KeyboardModifiers", "QHoverEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHoverEvent::plastiqMethods = {
    { "oldPos()", { "oldPos", "", "QPoint", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "oldPosF()", { "oldPosF", "", "const QPointF&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "posF()", { "posF", "", "const QPointF&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHoverEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHoverEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHoverEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHoverEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHoverEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQHoverEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QHoverEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHoverEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHoverEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHoverEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QHoverEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp))); break;*/
        /*case 1: o = new QHoverEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)),
                    Qt::KeyboardModifiers(stack[4].s_int64)); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHoverEvent *p = new PlastiQQHoverEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHoverEvent *p = new PlastiQQHoverEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQInputEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHoverEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QHoverEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->oldPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->oldPosF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->posF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
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
        QHoverEvent *o = reinterpret_cast<QHoverEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHoverEvent::~PlastiQQHoverEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
