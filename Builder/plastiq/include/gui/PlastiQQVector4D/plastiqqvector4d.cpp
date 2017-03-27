#include "plastiqmethod.h"
#include "plastiqqvector4d.h"

#include <QVector4D> 
#include <QPoint>
#include <QPointF>
#include <QVector2D>
#include <QVector3D>

QHash<QByteArray, PlastiQMethod> PlastiQQVector4D::plastiqConstructors = {
    { "QVector4D()", { "QVector4D", "", "QVector4D*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector4D(double,double,double,double)", { "QVector4D", "float,float,float,float", "QVector4D*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector4D(QPoint&)", { "QVector4D", "QPoint&", "QVector4D*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector4D(QPointF&)", { "QVector4D", "QPointF&", "QVector4D*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector4D(QVector2D&)", { "QVector4D", "QVector2D&", "QVector4D*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector4D(QVector2D&,double,double)", { "QVector4D", "QVector2D&,float,float", "QVector4D*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector4D(QVector3D&)", { "QVector4D", "QVector3D&", "QVector4D*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector4D(QVector3D&,double)", { "QVector4D", "QVector3D&,float", "QVector4D*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVector4D::plastiqMethods = {
    { "isNull()", { "isNull", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "float", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lengthSquared()", { "lengthSquared", "", "float", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalize()", { "normalize", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QVector4D", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setW(double)", { "setW", "float", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(double)", { "setX", "float", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(double)", { "setY", "float", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setZ(double)", { "setZ", "float", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPoint()", { "toPoint", "", "QPoint", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPointF()", { "toPointF", "", "QPointF", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector2D()", { "toVector2D", "", "QVector2D", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector2DAffine()", { "toVector2DAffine", "", "QVector2D", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector3D()", { "toVector3D", "", "QVector3D", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector3DAffine()", { "toVector3DAffine", "", "QVector3D", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "w()", { "w", "", "float", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "float", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "float", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "z()", { "z", "", "float", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dotProduct(QVector4D&,QVector4D&)", { "dotProduct", "QVector4D&,QVector4D&", "float", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVector4D::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVector4D::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVector4D::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVector4D::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVector4D::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVector4D::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVector4D", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVector4D::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVector4D::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVector4D *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVector4D(); break;
        case 1: o = new QVector4D(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 2: o = new QVector4D((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))); break;
        case 3: o = new QVector4D((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))); break;
        case 4: o = new QVector4D((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp))); break;
        case 5: o = new QVector4D((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double); break;
        case 6: o = new QVector4D((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp))); break;
        case 7: o = new QVector4D((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    stack[2].s_double); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVector4D *p = new PlastiQQVector4D();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVector4D *p = new PlastiQQVector4D();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 20) {
            id -= 20;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVector4D *o = sc ? Q_NULLPTR : reinterpret_cast<QVector4D*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { double _r = o->length();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->lengthSquared();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: o->normalize();
                stack[0].type = PlastiQ::Void; break;
        case 4: { /* COPY OBJECT */
            QVector4D *_r = new QVector4D(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector4D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->setW(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setX(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setY(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setZ(stack[1].s_double);
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
            QVector2D *_r = new QVector2D(o->toVector2D());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector2D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QVector2D *_r = new QVector2D(o->toVector2DAffine());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector2D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->toVector3D());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->toVector3DAffine());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { double _r = o->w();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 17: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: { double _r = o->z();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 19: { double _r = sc ? QVector4D::dotProduct((*reinterpret_cast< QVector4D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector4D(*) >(stack[2].s_voidp))) : o->dotProduct((*reinterpret_cast< QVector4D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector4D(*) >(stack[2].s_voidp)));
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
        QVector4D *o = reinterpret_cast<QVector4D*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVector4D::~PlastiQQVector4D() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
