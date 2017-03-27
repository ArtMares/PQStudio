#include "plastiqmethod.h"
#include "plastiqqcontextmenuevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QContextMenuEvent> 
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQContextMenuEvent::plastiqConstructors = {
    { "QContextMenuEvent(enum,QPoint&,QPoint&,enum)", { "QContextMenuEvent", "Reason,QPoint&,QPoint&,Qt::KeyboardModifiers", "QContextMenuEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QContextMenuEvent(enum,QPoint&,QPoint&)", { "QContextMenuEvent", "Reason,QPoint&,QPoint&", "QContextMenuEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QContextMenuEvent(enum,QPoint&)", { "QContextMenuEvent", "Reason,QPoint&", "QContextMenuEvent*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQContextMenuEvent::plastiqMethods = {
    { "globalPos()", { "globalPos", "", "const QPoint&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalX()", { "globalX", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalY()", { "globalY", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "const QPoint&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reason()", { "reason", "", "Reason", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQContextMenuEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQContextMenuEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQContextMenuEvent::plastiqConstants = {

    /* QContextMenuEvent::Reason */
   { "Mouse", QContextMenuEvent::Mouse },
   { "Keyboard", QContextMenuEvent::Keyboard },
   { "Other", QContextMenuEvent::Other },

};

QVector<PlastiQMetaObject*> PlastiQQContextMenuEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQContextMenuEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQContextMenuEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QContextMenuEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQContextMenuEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQContextMenuEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QContextMenuEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QContextMenuEvent(QContextMenuEvent::Reason(stack[1].s_int64),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)),
                    Qt::KeyboardModifiers(stack[4].s_int64)); break;
        case 1: o = new QContextMenuEvent(QContextMenuEvent::Reason(stack[1].s_int64),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp))); break;
        case 2: o = new QContextMenuEvent(QContextMenuEvent::Reason(stack[1].s_int64),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQContextMenuEvent *p = new PlastiQQContextMenuEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQContextMenuEvent *p = new PlastiQQContextMenuEvent();
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
        QContextMenuEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QContextMenuEvent*>(object->plastiq_data());

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
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->reason(); // HACK for Reason 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->y();
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
        QContextMenuEvent *o = reinterpret_cast<QContextMenuEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQContextMenuEvent::~PlastiQQContextMenuEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
