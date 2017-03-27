#include "plastiqmethod.h"
#include "plastiqqmatrix4x4.h"

#include <QMatrix4x4> 
#include <QVector4D>
#include <QPoint>
#include <QPointF>
#include <QVector3D>
#include <QRect>
#include <QRectF>
#include <QMatrix3x3>
#include <QMatrix>
#include <QTransform>

QHash<QByteArray, PlastiQMethod> PlastiQQMatrix4x4::plastiqConstructors = {
    { "QMatrix4x4()", { "QMatrix4x4", "", "QMatrix4x4*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMatrix4x4(const float*)", { "QMatrix4x4", "float*", "QMatrix4x4*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMatrix4x4(double,double,double,double,double,double,double,double,double,double,double,double,double,double,double,double)", { "QMatrix4x4", "float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float", "QMatrix4x4*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMatrix4x4(const QGenericMatrix<N,M,float>&)", { "QMatrix4x4", "QGenericMatrix<N,M,float>&", "QMatrix4x4*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMatrix4x4(QTransform&)", { "QMatrix4x4", "QTransform&", "QMatrix4x4*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMatrix4x4(QMatrix&)", { "QMatrix4x4", "QMatrix&", "QMatrix4x4*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMatrix4x4::plastiqMethods = {
    { "column(int)", { "column", "int", "QVector4D", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constData()", { "constData", "", "const float*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copyDataTo(float*)", { "copyDataTo", "float*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "float*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "determinant()", { "determinant", "", "double", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(double)", { "fill", "float", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frustum(double,double,double,double,double,double)", { "frustum", "float,float,float,float,float,float", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inverted()", { "inverted", "", "QMatrix4x4", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inverted(bool*)", { "inverted", "bool*", "QMatrix4x4", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAffine()", { "isAffine", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isIdentity()", { "isIdentity", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lookAt(QVector3D&,QVector3D&,QVector3D&)", { "lookAt", "QVector3D&,QVector3D&,QVector3D&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QPoint&)", { "map", "QPoint&", "QPoint", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QPointF&)", { "map", "QPointF&", "QPointF", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QVector3D&)", { "map", "QVector3D&", "QVector3D", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QVector4D&)", { "map", "QVector4D&", "QVector4D", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRect(QRect&)", { "mapRect", "QRect&", "QRect", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRect(QRectF&)", { "mapRect", "QRectF&", "QRectF", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapVector(QVector3D&)", { "mapVector", "QVector3D&", "QVector3D", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalMatrix()", { "normalMatrix", "", "QMatrix3x3", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "optimize()", { "optimize", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ortho(double,double,double,double,double,double)", { "ortho", "float,float,float,float,float,float", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ortho(QRectF&)", { "ortho", "QRectF&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ortho(QRect&)", { "ortho", "QRect&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "perspective(double,double,double,double)", { "perspective", "float,float,float,float", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(double,QVector3D&)", { "rotate", "float,QVector3D&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(double,double,double)", { "rotate", "float,float,float", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(double,double,double,double)", { "rotate", "float,float,float,float", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(QQuaternion&)", { "rotate", "QQuaternion&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row(int)", { "row", "int", "QVector4D", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(QVector3D&)", { "scale", "QVector3D&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(double,double)", { "scale", "float,float", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(double,double,double)", { "scale", "float,float,float", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(double)", { "scale", "float", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumn(int,QVector4D&)", { "setColumn", "int,QVector4D&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRow(int,QVector4D&)", { "setRow", "int,QVector4D&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToIdentity()", { "setToIdentity", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toAffine()", { "toAffine", "", "QMatrix", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTransform()", { "toTransform", "", "QTransform", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTransform(double)", { "toTransform", "float", "QTransform", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QVector3D&)", { "translate", "QVector3D&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double)", { "translate", "float,float", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double,double)", { "translate", "float,float,float", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transposed()", { "transposed", "", "QMatrix4x4", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewport(double,double,double,double)", { "viewport", "float,float,float,float", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewport(double,double,double,double,double)", { "viewport", "float,float,float,float,float", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewport(double,double,double,double,double,double)", { "viewport", "float,float,float,float,float,float", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewport(QRectF&)", { "viewport", "QRectF&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMatrix4x4::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMatrix4x4::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMatrix4x4::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMatrix4x4::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMatrix4x4::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMatrix4x4::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMatrix4x4", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMatrix4x4::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMatrix4x4::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMatrix4x4 *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMatrix4x4(); break;
        case 1: o = new QMatrix4x4(reinterpret_cast<const float*>(stack[1].s_voidp)); break;
        case 2: o = new QMatrix4x4(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_double,
                    stack[8].s_double,
                    stack[9].s_double,
                    stack[10].s_double,
                    stack[11].s_double,
                    stack[12].s_double,
                    stack[13].s_double,
                    stack[14].s_double,
                    stack[15].s_double,
                    stack[16].s_double); break;
        /*case 3: o = new QMatrix4x4(UNSUPPORTED_TYPE_const QGenericMatrix<N,
                    UNSUPPORTED_TYPE_M,
                    (*reinterpret_cast< float>(*) >(stack[3].s_voidp))); break;*/
        case 4: o = new QMatrix4x4((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))); break;
        case 5: o = new QMatrix4x4((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMatrix4x4 *p = new PlastiQQMatrix4x4();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMatrix4x4 *p = new PlastiQQMatrix4x4();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 48) {
            id -= 48;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMatrix4x4 *o = sc ? Q_NULLPTR : reinterpret_cast<QMatrix4x4*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVector4D *_r = new QVector4D(o->column(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector4D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { float* _r = const_cast<float*>(o->constData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "float"; } break;
        case 2: o->copyDataTo(reinterpret_cast<float*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: { float* _r = o->data();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "float"; } break;
        case 4: { double _r = o->determinant();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: o->fill(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->frustum(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: { /* COPY OBJECT */
            QMatrix4x4 *_r = new QMatrix4x4(o->inverted());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMatrix4x4";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QMatrix4x4 *_r = new QMatrix4x4(o->inverted(reinterpret_cast<bool*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMatrix4x4";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { bool _r = o->isAffine();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isIdentity();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: o->lookAt((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QVector3D(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->map((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->map((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->map((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QVector4D *_r = new QVector4D(o->map((*reinterpret_cast< QVector4D(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector4D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QRect *_r = new QRect(o->mapRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->mapVector((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: /* UNSUPPORTED_RETURN_VALUE o->normalMatrix() | ret: `QMatrix3x3` */ break;
        case 20: o->optimize();
                stack[0].type = PlastiQ::Void; break;
        case 21: o->ortho(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->ortho((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->ortho((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->perspective(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->rotate(stack[1].s_double,
                    (*reinterpret_cast< QVector3D(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->rotate(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->rotate(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->rotate((*reinterpret_cast< QQuaternion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: { /* COPY OBJECT */
            QVector4D *_r = new QVector4D(o->row(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector4D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: o->scale((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->scale(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->scale(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->scale(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setColumn(stack[1].s_int,
                    (*reinterpret_cast< QVector4D(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setRow(stack[1].s_int,
                    (*reinterpret_cast< QVector4D(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setToIdentity();
                stack[0].type = PlastiQ::Void; break;
        case 37: /* UNSUPPORTED_RETURN_VALUE o->toAffine() | ret: `QMatrix` */ break;
        case 38: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->toTransform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->toTransform(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: o->translate((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->translate(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->translate(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 43: { /* COPY OBJECT */
            QMatrix4x4 *_r = new QMatrix4x4(o->transposed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMatrix4x4";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: o->viewport(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->viewport(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->viewport(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->viewport((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

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
        QMatrix4x4 *o = reinterpret_cast<QMatrix4x4*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMatrix4x4::~PlastiQQMatrix4x4() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
