#include "plastiqmethod.h"
#include "plastiqqvector3d.h"

#include <QVector3D> 
#include <QPoint>
#include <QPointF>
#include <QVector2D>
#include <QVector4D>

QHash<QByteArray, PlastiQMethod> PlastiQQVector3D::plastiqConstructors = {
    { "QVector3D()", { "QVector3D", "", "QVector3D*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector3D(double,double,double)", { "QVector3D", "float,float,float", "QVector3D*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector3D(QPoint&)", { "QVector3D", "QPoint&", "QVector3D*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector3D(QPointF&)", { "QVector3D", "QPointF&", "QVector3D*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector3D(QVector2D&)", { "QVector3D", "QVector2D&", "QVector3D*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector3D(QVector2D&,double)", { "QVector3D", "QVector2D&,float", "QVector3D*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVector3D(QVector4D&)", { "QVector3D", "QVector4D&", "QVector3D*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVector3D::plastiqMethods = {
    { "distanceToLine(QVector3D&,QVector3D&)", { "distanceToLine", "QVector3D&,QVector3D&", "float", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "distanceToPlane(QVector3D&,QVector3D&)", { "distanceToPlane", "QVector3D&,QVector3D&", "float", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "distanceToPlane(QVector3D&,QVector3D&,QVector3D&)", { "distanceToPlane", "QVector3D&,QVector3D&,QVector3D&", "float", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "distanceToPoint(QVector3D&)", { "distanceToPoint", "QVector3D&", "float", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "float", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lengthSquared()", { "lengthSquared", "", "float", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalize()", { "normalize", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QVector3D", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "project(QMatrix4x4&,QMatrix4x4&,QRect&)", { "project", "QMatrix4x4&,QMatrix4x4&,QRect&", "QVector3D", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(double)", { "setX", "float", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(double)", { "setY", "float", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setZ(double)", { "setZ", "float", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPoint()", { "toPoint", "", "QPoint", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPointF()", { "toPointF", "", "QPointF", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector2D()", { "toVector2D", "", "QVector2D", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector4D()", { "toVector4D", "", "QVector4D", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unproject(QMatrix4x4&,QMatrix4x4&,QRect&)", { "unproject", "QMatrix4x4&,QMatrix4x4&,QRect&", "QVector3D", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "float", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "float", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "z()", { "z", "", "float", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crossProduct(QVector3D&,QVector3D&)", { "crossProduct", "QVector3D&,QVector3D&", "QVector3D", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "dotProduct(QVector3D&,QVector3D&)", { "dotProduct", "QVector3D&,QVector3D&", "float", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "normal(QVector3D&,QVector3D&)", { "normal", "QVector3D&,QVector3D&", "QVector3D", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "normal(QVector3D&,QVector3D&,QVector3D&)", { "normal", "QVector3D&,QVector3D&,QVector3D&", "QVector3D", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVector3D::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVector3D::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVector3D::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVector3D::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVector3D::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVector3D::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVector3D", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVector3D::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVector3D::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVector3D *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVector3D(); break;
        case 1: o = new QVector3D(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double); break;
        case 2: o = new QVector3D((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))); break;
        case 3: o = new QVector3D((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))); break;
        case 4: o = new QVector3D((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp))); break;
        case 5: o = new QVector3D((*reinterpret_cast< QVector2D(*) >(stack[1].s_voidp)),
                    stack[2].s_double); break;
        case 6: o = new QVector3D((*reinterpret_cast< QVector4D(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVector3D *p = new PlastiQQVector3D();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVector3D *p = new PlastiQQVector3D();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVector3D *o = sc ? Q_NULLPTR : reinterpret_cast<QVector3D*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->distanceToLine((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->distanceToPlane((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->distanceToPlane((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[3].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->distanceToPoint((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { double _r = o->length();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->lengthSquared();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: o->normalize();
                stack[0].type = PlastiQ::Void; break;
        case 8: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->project((*reinterpret_cast< QMatrix4x4(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QMatrix4x4(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: o->setX(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setY(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setZ(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->toPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->toPointF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QVector2D *_r = new QVector2D(o->toVector2D());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector2D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QVector4D *_r = new QVector4D(o->toVector4D());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector4D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->unproject((*reinterpret_cast< QMatrix4x4(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QMatrix4x4(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 19: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 20: { double _r = o->z();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 21: { /* COPY OBJECT */
            QVector3D *_r = sc ? new QVector3D(QVector3D::crossProduct((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)))) : new QVector3D(o->crossProduct((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { double _r = sc ? QVector3D::dotProduct((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp))) : o->dotProduct((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 23: { /* COPY OBJECT */
            QVector3D *_r = sc ? new QVector3D(QVector3D::normal((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)))) : new QVector3D(o->normal((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QVector3D *_r = sc ? new QVector3D(QVector3D::normal((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[3].s_voidp)))) : new QVector3D(o->normal((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
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
        QVector3D *o = reinterpret_cast<QVector3D*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVector3D::~PlastiQQVector3D() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
