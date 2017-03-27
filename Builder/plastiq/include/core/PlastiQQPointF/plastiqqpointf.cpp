#include "plastiqmethod.h"
#include "plastiqqpointf.h"

#include <QPointF> 
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQPointF::plastiqConstructors = {
    { "QPointF()", { "QPointF", "", "QPointF*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPointF(QPoint&)", { "QPointF", "QPoint&", "QPointF*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPointF(double,double)", { "QPointF", "qreal,qreal", "QPointF*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPointF::plastiqMethods = {
    { "isNull()", { "isNull", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "manhattanLength()", { "manhattanLength", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rx()", { "rx", "", "qreal&", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ry()", { "ry", "", "qreal&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(double)", { "setX", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(double)", { "setY", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCGPoint()", { "toCGPoint", "", "CGPoint", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPoint()", { "toPoint", "", "QPoint", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dotProduct(QPointF&,QPointF&)", { "dotProduct", "QPointF&,QPointF&", "qreal", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCGPoint(CGPoint)", { "fromCGPoint", "CGPoint", "QPointF", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPointF::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPointF::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPointF::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPointF::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPointF::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPointF::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPointF", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPointF::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPointF::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPointF *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPointF(); break;
        case 1: o = new QPointF((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))); break;
        case 2: o = new QPointF(stack[1].s_double,
                    stack[2].s_double); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPointF *p = new PlastiQQPointF();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPointF *p = new PlastiQQPointF();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPointF *o = sc ? Q_NULLPTR : reinterpret_cast<QPointF*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { double _r = o->manhattanLength();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->rx() | ret: `qreal&` */ break;
        case 3: /* UNSUPPORTED_RETURN_VALUE o->ry() | ret: `qreal&` */ break;
        case 4: o->setX(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setY(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->toCGPoint() | ret: `CGPoint` */ break;
        case 7: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->toPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { double _r = sc ? QPointF::dotProduct((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp))) : o->dotProduct((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: /* o->fromCGPoint(UNSUPPORTED_TYPE_CGPoint) | ret: `QPointF` */ break;

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
        QPointF *o = reinterpret_cast<QPointF*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPointF::~PlastiQQPointF() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
