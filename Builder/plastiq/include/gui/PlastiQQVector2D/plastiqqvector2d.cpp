#include "plastiqmethod.h"
#include "plastiqqvector2d.h"

#include <QVector2D> 
#include <QPoint>
#include <QPointF>
#include <QVector3D>
#include <QVector4D>

QHash<QByteArray, PlastiQMethod> PlastiQQVector2D::plastiqConstructors = {
    { "QVector2D()", { "QVector2D", "", "QVector2D*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector2D(double,double)", { "QVector2D", "float,float", "QVector2D*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector2D(QPoint&)", { "QVector2D", "QPoint&", "QVector2D*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector2D(QPointF&)", { "QVector2D", "QPointF&", "QVector2D*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector2D(QVector3D&)", { "QVector2D", "QVector3D&", "QVector2D*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector2D(QVector4D&)", { "QVector2D", "QVector4D&", "QVector2D*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVector2D::plastiqMethods = {
    { "distanceToLine(QVector2D&,QVector2D&)", { "distanceToLine", "QVector2D&,QVector2D&", "float", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "distanceToPoint(QVector2D&)", { "distanceToPoint", "QVector2D&", "float", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "float", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lengthSquared()", { "lengthSquared", "", "float", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalize()", { "normalize", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QVector2D", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(double)", { "setX", "float", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(double)", { "setY", "float", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPoint()", { "toPoint", "", "QPoint", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPointF()", { "toPointF", "", "QPointF", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector3D()", { "toVector3D", "", "QVector3D", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector4D()", { "toVector4D", "", "QVector4D", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "float", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "float", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dotProduct(QVector2D&,QVector2D&)", { "dotProduct", "QVector2D&,QVector2D&", "float", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVector2D::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVector2D::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVector2D::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVector2D::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVector2D::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVector2D::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVector2D", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVector2D::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVector2D::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVector2D *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVector2D(); break;
        case 1: o = new QVector2D(stack[1].s_double,
                    stack[2].s_double); break;
        case 2: o = new QVector2D((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))); break;
        case 3: o = new QVector2D((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))); break;
        case 4: o = new QVector2D((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp))); break;
        case 5: o = new QVector2D((*reinterpret_cast< QVector4D(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVector2D *p = new PlastiQQVector2D();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVector2D *p = new PlastiQQVector2D();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVector2D *o = sc ? Q_NULLPTR : reinterpret_cast<QVector2D*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->distanceToLine((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector2D(*) >(stack[2].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->distanceToPoint((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { double _r = o->length();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->lengthSquared();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: o->normalize();
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QVector2D *_r = new QVector2D(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector2D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->setX(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setY(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->toPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->toPointF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->toVector3D());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QVector4D *_r = new QVector4D(o->toVector4D());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector4D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 15: { double _r = sc ? QVector2D::dotProduct((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector2D(*) >(stack[2].s_voidp))) : o->dotProduct((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector2D(*) >(stack[2].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QVector2D *o = reinterpret_cast<QVector2D*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVector2D::~PlastiQQVector2D() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
