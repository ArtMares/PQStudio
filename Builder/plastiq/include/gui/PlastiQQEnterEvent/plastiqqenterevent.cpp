#include "plastiqmethod.h"
#include "plastiqqenterevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QEnterEvent> 
#include <QPoint>
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQEnterEvent::plastiqConstructors = {
    { "QEnterEvent(QPointF&,QPointF&,QPointF&)", { "QEnterEvent", "QPointF&,QPointF&,QPointF&", "QEnterEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEnterEvent::plastiqMethods = {
    { "globalPos()", { "globalPos", "", "QPoint", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalX()", { "globalX", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalY()", { "globalY", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localPos()", { "localPos", "", "const QPointF&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "const QPointF&", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowPos()", { "windowPos", "", "const QPointF&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEnterEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQEnterEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQEnterEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQEnterEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQEnterEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQEnterEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QEnterEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQEnterEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQEnterEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QEnterEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QEnterEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQEnterEvent *p = new PlastiQQEnterEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQEnterEvent *p = new PlastiQQEnterEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QEnterEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QEnterEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->globalPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { int _r = o->globalX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->globalY();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->localPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->screenPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->windowPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->y();
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
        QEnterEvent *o = reinterpret_cast<QEnterEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQEnterEvent::~PlastiQQEnterEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
