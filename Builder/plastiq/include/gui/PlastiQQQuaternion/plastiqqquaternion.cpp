#include "plastiqmethod.h"
#include "plastiqqquaternion.h"

#include <QQuaternion> 
#include <QVector3D>
#include <QMatrix3x3>
#include <QVector4D>

QHash<QByteArray, PlastiQMethod> PlastiQQQuaternion::plastiqConstructors = {
    { "QQuaternion()", { "QQuaternion", "", "QQuaternion*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QQuaternion(double,double,double,double)", { "QQuaternion", "float,float,float,float", "QQuaternion*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QQuaternion(double,QVector3D&)", { "QQuaternion", "float,QVector3D&", "QQuaternion*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QQuaternion(QVector4D&)", { "QQuaternion", "QVector4D&", "QQuaternion*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQQuaternion::plastiqMethods = {
    { "conjugated()", { "conjugated", "", "QQuaternion", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getAxes(QVector3D*,QVector3D*,QVector3D*)", { "getAxes", "QVector3D*,QVector3D*,QVector3D*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getAxisAndAngle(float*,float*,float*,float*)", { "getAxisAndAngle", "float*,float*,float*,float*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getAxisAndAngle(QVector3D*,float*)", { "getAxisAndAngle", "QVector3D*,float*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getEulerAngles(float*,float*,float*)", { "getEulerAngles", "float*,float*,float*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inverted()", { "inverted", "", "QQuaternion", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isIdentity()", { "isIdentity", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "float", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lengthSquared()", { "lengthSquared", "", "float", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalize()", { "normalize", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QQuaternion", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotatedVector(QVector3D&)", { "rotatedVector", "QVector3D&", "QVector3D", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scalar()", { "scalar", "", "float", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScalar(double)", { "setScalar", "float", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVector(QVector3D&)", { "setVector", "QVector3D&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVector(double,double,double)", { "setVector", "float,float,float", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(double)", { "setX", "float", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(double)", { "setY", "float", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setZ(double)", { "setZ", "float", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toEulerAngles()", { "toEulerAngles", "", "QVector3D", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRotationMatrix()", { "toRotationMatrix", "", "QMatrix3x3", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toVector4D()", { "toVector4D", "", "QVector4D", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "vector()", { "vector", "", "QVector3D", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "float", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "float", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "z()", { "z", "", "float", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dotProduct(QQuaternion&,QQuaternion&)", { "dotProduct", "QQuaternion&,QQuaternion&", "float", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromAxes(QVector3D&,QVector3D&,QVector3D&)", { "fromAxes", "QVector3D&,QVector3D&,QVector3D&", "QQuaternion", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromAxisAndAngle(QVector3D&,double)", { "fromAxisAndAngle", "QVector3D&,float", "QQuaternion", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromAxisAndAngle(double,double,double,double)", { "fromAxisAndAngle", "float,float,float,float", "QQuaternion", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromDirection(QVector3D&,QVector3D&)", { "fromDirection", "QVector3D&,QVector3D&", "QQuaternion", 31, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromEulerAngles(double,double,double)", { "fromEulerAngles", "float,float,float", "QQuaternion", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromEulerAngles(QVector3D&)", { "fromEulerAngles", "QVector3D&", "QQuaternion", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRotationMatrix(QMatrix3x3&)", { "fromRotationMatrix", "QMatrix3x3&", "QQuaternion", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "nlerp(QQuaternion&,QQuaternion&,double)", { "nlerp", "QQuaternion&,QQuaternion&,float", "QQuaternion", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "rotationTo(QVector3D&,QVector3D&)", { "rotationTo", "QVector3D&,QVector3D&", "QQuaternion", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "slerp(QQuaternion&,QQuaternion&,double)", { "slerp", "QQuaternion&,QQuaternion&,float", "QQuaternion", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQQuaternion::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQQuaternion::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQQuaternion::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQQuaternion::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQQuaternion::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQQuaternion::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QQuaternion", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQQuaternion::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQQuaternion::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QQuaternion *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QQuaternion(); break;
        case 1: o = new QQuaternion(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 2: o = new QQuaternion(stack[1].s_double,
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp))); break;
        case 3: o = new QQuaternion((*reinterpret_cast< QVector4D(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQQuaternion *p = new PlastiQQQuaternion();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQQuaternion *p = new PlastiQQQuaternion();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 38) {
            id -= 38;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QQuaternion *o = sc ? Q_NULLPTR : reinterpret_cast<QQuaternion*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QQuaternion *_r = new QQuaternion(o->conjugated());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->getAxes(reinterpret_cast<QVector3D*>(stack[1].s_voidp),
                    reinterpret_cast<QVector3D*>(stack[2].s_voidp),
                    reinterpret_cast<QVector3D*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->getAxisAndAngle(reinterpret_cast<float*>(stack[1].s_voidp),
                    reinterpret_cast<float*>(stack[2].s_voidp),
                    reinterpret_cast<float*>(stack[3].s_voidp),
                    reinterpret_cast<float*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->getAxisAndAngle(reinterpret_cast<QVector3D*>(stack[1].s_voidp),
                    reinterpret_cast<float*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->getEulerAngles(reinterpret_cast<float*>(stack[1].s_voidp),
                    reinterpret_cast<float*>(stack[2].s_voidp),
                    reinterpret_cast<float*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QQuaternion *_r = new QQuaternion(o->inverted());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { bool _r = o->isIdentity();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { double _r = o->length();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { double _r = o->lengthSquared();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: o->normalize();
                stack[0].type = PlastiQ::Void; break;
        case 11: { /* COPY OBJECT */
            QQuaternion *_r = new QQuaternion(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->rotatedVector((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { double _r = o->scalar();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: o->setScalar(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setVector((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setVector(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setX(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setY(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setZ(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 20: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->toEulerAngles());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: /* UNSUPPORTED_RETURN_VALUE o->toRotationMatrix() | ret: `QMatrix3x3` */ break;
        case 22: { /* COPY OBJECT */
            QVector4D *_r = new QVector4D(o->toVector4D());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector4D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->vector());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 25: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 26: { double _r = o->z();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 27: { double _r = sc ? QQuaternion::dotProduct((*reinterpret_cast< QQuaternion(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QQuaternion(*) >(stack[2].s_voidp))) : o->dotProduct((*reinterpret_cast< QQuaternion(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QQuaternion(*) >(stack[2].s_voidp)));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 28: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::fromAxes((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[3].s_voidp)))) : new QQuaternion(o->fromAxes((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::fromAxisAndAngle((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    stack[2].s_double)) : new QQuaternion(o->fromAxisAndAngle((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::fromAxisAndAngle(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double)) : new QQuaternion(o->fromAxisAndAngle(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::fromDirection((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)))) : new QQuaternion(o->fromDirection((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::fromEulerAngles(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double)) : new QQuaternion(o->fromEulerAngles(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::fromEulerAngles((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)))) : new QQuaternion(o->fromEulerAngles((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::fromRotationMatrix((*reinterpret_cast< QMatrix3x3(*) >(stack[1].s_voidp)))) : new QQuaternion(o->fromRotationMatrix((*reinterpret_cast< QMatrix3x3(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::nlerp((*reinterpret_cast< QQuaternion(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QQuaternion(*) >(stack[2].s_voidp)),
                    stack[3].s_double)) : new QQuaternion(o->nlerp((*reinterpret_cast< QQuaternion(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QQuaternion(*) >(stack[2].s_voidp)),
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::rotationTo((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)))) : new QQuaternion(o->rotationTo((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: { /* COPY OBJECT */
            QQuaternion *_r = sc ? new QQuaternion(QQuaternion::slerp((*reinterpret_cast< QQuaternion(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QQuaternion(*) >(stack[2].s_voidp)),
                    stack[3].s_double)) : new QQuaternion(o->slerp((*reinterpret_cast< QQuaternion(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QQuaternion(*) >(stack[2].s_voidp)),
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QQuaternion";
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
        QQuaternion *o = reinterpret_cast<QQuaternion*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQQuaternion::~PlastiQQQuaternion() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
