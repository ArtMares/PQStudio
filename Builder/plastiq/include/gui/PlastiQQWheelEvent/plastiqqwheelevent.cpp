#include "plastiqmethod.h"
#include "plastiqqwheelevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QWheelEvent> 
#include <QPoint>
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQWheelEvent::plastiqConstructors = {
    { "QWheelEvent(QPointF&,QPointF&,QPoint,QPoint,int,enum,enum,enum)", { "QWheelEvent", "QPointF&,QPointF&,QPoint,QPoint,int,Qt::Orientation,Qt::MouseButtons,Qt::KeyboardModifiers", "QWheelEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWheelEvent(QPointF&,QPointF&,QPoint,QPoint,int,enum,enum,enum,enum)", { "QWheelEvent", "QPointF&,QPointF&,QPoint,QPoint,int,Qt::Orientation,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::ScrollPhase", "QWheelEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWheelEvent(QPointF&,QPointF&,QPoint,QPoint,int,enum,enum,enum,enum,enum)", { "QWheelEvent", "QPointF&,QPointF&,QPoint,QPoint,int,Qt::Orientation,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::ScrollPhase,Qt::MouseEventSource", "QWheelEvent*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWheelEvent(QPointF&,QPointF&,QPoint,QPoint,int,enum,enum,enum,enum,enum,bool)", { "QWheelEvent", "QPointF&,QPointF&,QPoint,QPoint,int,Qt::Orientation,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::ScrollPhase,Qt::MouseEventSource,bool", "QWheelEvent*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWheelEvent::plastiqMethods = {
    { "angleDelta()", { "angleDelta", "", "QPoint", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttons()", { "buttons", "", "Qt::MouseButtons", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalPos()", { "globalPos", "", "QPoint", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalPosF()", { "globalPosF", "", "const QPointF&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalX()", { "globalX", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalY()", { "globalY", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inverted()", { "inverted", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "phase()", { "phase", "", "Qt::ScrollPhase", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelDelta()", { "pixelDelta", "", "QPoint", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "posF()", { "posF", "", "const QPointF&", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "Qt::MouseEventSource", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWheelEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWheelEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWheelEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWheelEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWheelEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQWheelEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QWheelEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWheelEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWheelEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWheelEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWheelEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    Qt::Orientation(stack[6].s_int64),
                    Qt::MouseButtons(stack[7].s_int64),
                    Qt::KeyboardModifiers(stack[8].s_int64)); break;
        case 1: o = new QWheelEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    Qt::Orientation(stack[6].s_int64),
                    Qt::MouseButtons(stack[7].s_int64),
                    Qt::KeyboardModifiers(stack[8].s_int64),
                    Qt::ScrollPhase(stack[9].s_int64)); break;
        case 2: o = new QWheelEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    Qt::Orientation(stack[6].s_int64),
                    Qt::MouseButtons(stack[7].s_int64),
                    Qt::KeyboardModifiers(stack[8].s_int64),
                    Qt::ScrollPhase(stack[9].s_int64),
                    Qt::MouseEventSource(stack[10].s_int64)); break;
        case 3: o = new QWheelEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    Qt::Orientation(stack[6].s_int64),
                    Qt::MouseButtons(stack[7].s_int64),
                    Qt::KeyboardModifiers(stack[8].s_int64),
                    Qt::ScrollPhase(stack[9].s_int64),
                    Qt::MouseEventSource(stack[10].s_int64),
                    stack[11].s_bool); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWheelEvent *p = new PlastiQQWheelEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWheelEvent *p = new PlastiQQWheelEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQInputEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWheelEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QWheelEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->angleDelta());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->buttons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->globalPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->globalPosF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { int _r = o->globalX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->globalY();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { bool _r = o->inverted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { qint64 _r = o->phase(); // HACK for Qt::ScrollPhase 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pixelDelta());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->posF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { qint64 _r = o->source(); // HACK for Qt::MouseEventSource 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 12: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->y();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QWheelEvent *o = reinterpret_cast<QWheelEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWheelEvent::~PlastiQQWheelEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
