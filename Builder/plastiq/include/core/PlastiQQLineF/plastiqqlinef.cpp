#include "plastiqmethod.h"
#include "plastiqqlinef.h"

#include <QLineF> 
#include <QPointF>
#include <QLine>

QHash<QByteArray, PlastiQMethod> PlastiQQLineF::plastiqConstructors = {
    { "QLineF()", { "QLineF", "", "QLineF*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLineF(QPointF&,QPointF&)", { "QLineF", "QPointF&,QPointF&", "QLineF*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLineF(double,double,double,double)", { "QLineF", "qreal,qreal,qreal,qreal", "QLineF*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLineF(QLine&)", { "QLineF", "QLine&", "QLineF*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLineF::plastiqMethods = {
    { "p1()", { "p1", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "p2()", { "p2", "", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x1()", { "x1", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x2()", { "x2", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y1()", { "y1", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y2()", { "y2", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "angle()", { "angle", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "angleTo(QLineF&)", { "angleTo", "QLineF&", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "center()", { "center", "", "QPointF", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dx()", { "dx", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dy()", { "dy", "", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersect(QLineF&,QPointF*)", { "intersect", "QLineF&,QPointF*", "IntersectType", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "qreal", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalVector()", { "normalVector", "", "QLineF", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointAt(double)", { "pointAt", "qreal", "QPointF", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setP1(QPointF&)", { "setP1", "QPointF&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setP2(QPointF&)", { "setP2", "QPointF&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAngle(double)", { "setAngle", "qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLength(double)", { "setLength", "qreal", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLine(double,double,double,double)", { "setLine", "qreal,qreal,qreal,qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPoints(QPointF&,QPointF&)", { "setPoints", "QPointF&,QPointF&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLine()", { "toLine", "", "QLine", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPointF&)", { "translate", "QPointF&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double)", { "translate", "qreal,qreal", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(QPointF&)", { "translated", "QPointF&", "QLineF", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(double,double)", { "translated", "qreal,qreal", "QLineF", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unitVector()", { "unitVector", "", "QLineF", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromPolar(double,double)", { "fromPolar", "qreal,qreal", "QLineF", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLineF::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLineF::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLineF::plastiqConstants = {

    /* QLineF::IntersectType */
   { "NoIntersection", QLineF::NoIntersection },
   { "BoundedIntersection", QLineF::BoundedIntersection },
   { "UnboundedIntersection", QLineF::UnboundedIntersection },

};

QVector<PlastiQMetaObject*> PlastiQQLineF::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLineF::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLineF::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLineF", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLineF::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLineF::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLineF *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLineF(); break;
        case 1: o = new QLineF((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp))); break;
        case 2: o = new QLineF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 3: o = new QLineF((*reinterpret_cast< QLine(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLineF *p = new PlastiQQLineF();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLineF *p = new PlastiQQLineF();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 29) {
            id -= 29;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLineF *o = sc ? Q_NULLPTR : reinterpret_cast<QLineF*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->p1());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->p2());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { double _r = o->x1();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->x2();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->y1();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->y2();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->angle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { double _r = o->angleTo((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->center());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { double _r = o->dx();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { double _r = o->dy();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: { qint64 _r = o->intersect((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QPointF*>(stack[2].s_voidp)); // HACK for IntersectType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 12: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { double _r = o->length();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: { /* COPY OBJECT */
            QLineF *_r = new QLineF(o->normalVector());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pointAt(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: o->setP1((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setP2((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setLength(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setLine(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setPoints((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: { /* COPY OBJECT */
            QLine *_r = new QLine(o->toLine());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLine";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: o->translate((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->translate(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 25: { /* COPY OBJECT */
            QLineF *_r = new QLineF(o->translated((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QLineF *_r = new QLineF(o->translated(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QLineF *_r = new QLineF(o->unitVector());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QLineF *_r = sc ? new QLineF(QLineF::fromPolar(stack[1].s_double,
                    stack[2].s_double)) : new QLineF(o->fromPolar(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
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
        QLineF *o = reinterpret_cast<QLineF*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLineF::~PlastiQQLineF() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
