#include "plastiqmethod.h"
#include "plastiqqhelpevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QHelpEvent> 
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQHelpEvent::plastiqConstructors = {
    { "QHelpEvent(Type,QPoint&,QPoint&)", { "QHelpEvent", "Type,QPoint&,QPoint&", "QHelpEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHelpEvent::plastiqMethods = {
    { "globalPos()", { "globalPos", "", "const QPoint&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalX()", { "globalX", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalY()", { "globalY", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "const QPoint&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHelpEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHelpEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHelpEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHelpEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHelpEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQHelpEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QHelpEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHelpEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHelpEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHelpEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QHelpEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp))); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHelpEvent *p = new PlastiQQHelpEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHelpEvent *p = new PlastiQQHelpEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHelpEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QHelpEvent*>(object->plastiq_data());

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
        case 4: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->y();
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
        QHelpEvent *o = reinterpret_cast<QHelpEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHelpEvent::~PlastiQQHelpEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
