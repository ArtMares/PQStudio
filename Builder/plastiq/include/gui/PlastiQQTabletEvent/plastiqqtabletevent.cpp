#include "plastiqmethod.h"
#include "plastiqqtabletevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QTabletEvent> 
#include <QPoint>
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQTabletEvent::plastiqConstructors = {
    { "QTabletEvent(Type,QPointF&,QPointF&,int,int,double,int,int,double,double,int,enum,long,enum,enum)", { "QTabletEvent", "Type,QPointF&,QPointF&,int,int,qreal,int,int,qreal,qreal,int,Qt::KeyboardModifiers,qint64,Qt::MouseButton,Qt::MouseButtons", "QTabletEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTabletEvent::plastiqMethods = {
    { "button()", { "button", "", "Qt::MouseButton", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttons()", { "buttons", "", "Qt::MouseButtons", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "TabletDevice", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalPos()", { "globalPos", "", "QPoint", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalPosF()", { "globalPosF", "", "const QPointF&", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalX()", { "globalX", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalY()", { "globalY", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hiResGlobalX()", { "hiResGlobalX", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hiResGlobalY()", { "hiResGlobalY", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointerType()", { "pointerType", "", "PointerType", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "posF()", { "posF", "", "const QPointF&", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pressure()", { "pressure", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotation()", { "rotation", "", "qreal", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tangentialPressure()", { "tangentialPressure", "", "qreal", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "uniqueId()", { "uniqueId", "", "qint64", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xTilt()", { "xTilt", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yTilt()", { "yTilt", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "z()", { "z", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTabletEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTabletEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTabletEvent::plastiqConstants = {

    /* QTabletEvent::PointerType */
   { "UnknownPointer", QTabletEvent::UnknownPointer },
   { "Pen", QTabletEvent::Pen },
   { "Cursor", QTabletEvent::Cursor },
   { "Eraser", QTabletEvent::Eraser },

    /* QTabletEvent::TabletDevice */
   { "NoDevice", QTabletEvent::NoDevice },
   { "Puck", QTabletEvent::Puck },
   { "Stylus", QTabletEvent::Stylus },
   { "Airbrush", QTabletEvent::Airbrush },
   { "FourDMouse", QTabletEvent::FourDMouse },
   { "XFreeEraser", QTabletEvent::XFreeEraser },
   { "RotationStylus", QTabletEvent::RotationStylus },

};

QVector<PlastiQMetaObject*> PlastiQQTabletEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTabletEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQTabletEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QTabletEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTabletEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTabletEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTabletEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QTabletEvent(UNSUPPORTED_TYPE_Type,
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_double,
                    stack[7].s_int,
                    stack[8].s_int,
                    stack[9].s_double,
                    stack[10].s_double,
                    stack[11].s_int,
                    Qt::KeyboardModifiers(stack[12].s_int64),
                    stack[13].s_long,
                    Qt::MouseButton(stack[14].s_int64),
                    Qt::MouseButtons(stack[15].s_int64)); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTabletEvent *p = new PlastiQQTabletEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTabletEvent *p = new PlastiQQTabletEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQInputEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTabletEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QTabletEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->button(); // HACK for Qt::MouseButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->buttons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->device(); // HACK for TabletDevice 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->globalPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->globalPosF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->globalX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->globalY();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { double _r = o->hiResGlobalX();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { double _r = o->hiResGlobalY();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { qint64 _r = o->pointerType(); // HACK for PointerType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->posF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { double _r = o->pressure();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { double _r = o->rotation();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: { double _r = o->tangentialPressure();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 15: { long _r = o->uniqueId();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 16: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { int _r = o->xTilt();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = o->y();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { int _r = o->yTilt();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { int _r = o->z();
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
        QTabletEvent *o = reinterpret_cast<QTabletEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTabletEvent::~PlastiQQTabletEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
