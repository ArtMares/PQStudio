#include "plastiqmethod.h"
#include "plastiqqnativegestureevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QNativeGestureEvent> 
#include <QPoint>
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQNativeGestureEvent::plastiqConstructors = {
    { "QNativeGestureEvent(enum,QPointF&,QPointF&,QPointF&,double,ulong,quint64)", { "QNativeGestureEvent", "Qt::NativeGestureType,QPointF&,QPointF&,QPointF&,qreal,ulong,quint64", "QNativeGestureEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNativeGestureEvent::plastiqMethods = {
    { "gestureType()", { "gestureType", "", "Qt::NativeGestureType", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalPos()", { "globalPos", "", "const QPoint", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localPos()", { "localPos", "", "const QPointF&", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "const QPoint", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "const QPointF&", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowPos()", { "windowPos", "", "const QPointF&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNativeGestureEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNativeGestureEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNativeGestureEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQNativeGestureEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQNativeGestureEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQNativeGestureEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QNativeGestureEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNativeGestureEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNativeGestureEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNativeGestureEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QNativeGestureEvent(Qt::NativeGestureType(stack[1].s_int64),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[4].s_voidp)),
                    stack[5].s_double,
                    UNSUPPORTED_TYPE_ulong,
                    UNSUPPORTED_TYPE_quint64); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNativeGestureEvent *p = new PlastiQQNativeGestureEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNativeGestureEvent *p = new PlastiQQNativeGestureEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQInputEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNativeGestureEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QNativeGestureEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->gestureType(); // HACK for Qt::NativeGestureType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->globalPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->localPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->screenPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { double _r = o->value();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->windowPos());
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
        QNativeGestureEvent *o = reinterpret_cast<QNativeGestureEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQNativeGestureEvent::~PlastiQQNativeGestureEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
