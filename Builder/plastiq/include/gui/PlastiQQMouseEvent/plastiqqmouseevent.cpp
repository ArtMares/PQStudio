#include "plastiqmethod.h"
#include "plastiqqmouseevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QMouseEvent> 
#include <QPoint>
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQMouseEvent::plastiqConstructors = {
    { "QMouseEvent(Type,QPointF&,enum,enum,enum)", { "QMouseEvent", "Type,QPointF&,Qt::MouseButton,Qt::MouseButtons,Qt::KeyboardModifiers", "QMouseEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMouseEvent(Type,QPointF&,QPointF&,enum,enum,enum)", { "QMouseEvent", "Type,QPointF&,QPointF&,Qt::MouseButton,Qt::MouseButtons,Qt::KeyboardModifiers", "QMouseEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMouseEvent(Type,QPointF&,QPointF&,QPointF&,enum,enum,enum)", { "QMouseEvent", "Type,QPointF&,QPointF&,QPointF&,Qt::MouseButton,Qt::MouseButtons,Qt::KeyboardModifiers", "QMouseEvent*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMouseEvent(Type,QPointF&,QPointF&,QPointF&,enum,enum,enum,enum)", { "QMouseEvent", "Type,QPointF&,QPointF&,QPointF&,Qt::MouseButton,Qt::MouseButtons,Qt::KeyboardModifiers,Qt::MouseEventSource", "QMouseEvent*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMouseEvent::plastiqMethods = {
    { "button()", { "button", "", "Qt::MouseButton", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttons()", { "buttons", "", "Qt::MouseButtons", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::MouseEventFlags", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalPos()", { "globalPos", "", "QPoint", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalX()", { "globalX", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalY()", { "globalY", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localPos()", { "localPos", "", "const QPointF&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "const QPointF&", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "Qt::MouseEventSource", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowPos()", { "windowPos", "", "const QPointF&", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMouseEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMouseEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMouseEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMouseEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMouseEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQMouseEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QMouseEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMouseEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMouseEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMouseEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QMouseEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    Qt::MouseButton(stack[3].s_int64),
                    Qt::MouseButtons(stack[4].s_int64),
                    Qt::KeyboardModifiers(stack[5].s_int64)); break;*/
        /*case 1: o = new QMouseEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)),
                    Qt::MouseButton(stack[4].s_int64),
                    Qt::MouseButtons(stack[5].s_int64),
                    Qt::KeyboardModifiers(stack[6].s_int64)); break;*/
        /*case 2: o = new QMouseEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[4].s_voidp)),
                    Qt::MouseButton(stack[5].s_int64),
                    Qt::MouseButtons(stack[6].s_int64),
                    Qt::KeyboardModifiers(stack[7].s_int64)); break;*/
        /*case 3: o = new QMouseEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[4].s_voidp)),
                    Qt::MouseButton(stack[5].s_int64),
                    Qt::MouseButtons(stack[6].s_int64),
                    Qt::KeyboardModifiers(stack[7].s_int64),
                    Qt::MouseEventSource(stack[8].s_int64)); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMouseEvent *p = new PlastiQQMouseEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMouseEvent *p = new PlastiQQMouseEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            PlastiQQInputEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMouseEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QMouseEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->button(); // HACK for Qt::MouseButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->buttons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->flags(); // HACK for Qt::MouseEventFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->globalPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { int _r = o->globalX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->globalY();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->localPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->screenPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { qint64 _r = o->source(); // HACK for Qt::MouseEventSource 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->windowPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->y();
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
        QMouseEvent *o = reinterpret_cast<QMouseEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMouseEvent::~PlastiQQMouseEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
