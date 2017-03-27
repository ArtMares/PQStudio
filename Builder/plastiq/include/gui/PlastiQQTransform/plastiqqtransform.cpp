#include "plastiqmethod.h"
#include "plastiqqtransform.h"

#include <QTransform> 
#include <QPointF>
#include <QLine>
#include <QLineF>
#include <QPolygonF>
#include <QPolygon>
#include <QRegion>
#include <QPainterPath>
#include <QPoint>
#include <QRectF>
#include <QRect>
#include <QMatrix>

QHash<QByteArray, PlastiQMethod> PlastiQQTransform::plastiqConstructors = {
    { "QTransform()", { "QTransform", "", "QTransform*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTransform(double,double,double,double,double,double,double,double)", { "QTransform", "qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal", "QTransform*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTransform(double,double,double,double,double,double,double,double,double)", { "QTransform", "qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal", "QTransform*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTransform(double,double,double,double,double,double)", { "QTransform", "qreal,qreal,qreal,qreal,qreal,qreal", "QTransform*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTransform(QMatrix&)", { "QTransform", "QMatrix&", "QTransform*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTransform(QTransform&&)", { "QTransform", "QTransform&&", "QTransform*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTransform(QTransform&)", { "QTransform", "QTransform&", "QTransform*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTransform::plastiqMethods = {
    { "m11()", { "m11", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m12()", { "m12", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m13()", { "m13", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m21()", { "m21", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m22()", { "m22", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m23()", { "m23", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m31()", { "m31", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m32()", { "m32", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "m33()", { "m33", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "adjoint()", { "adjoint", "", "QTransform", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "determinant()", { "determinant", "", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dx()", { "dx", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dy()", { "dy", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inverted()", { "inverted", "", "QTransform", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inverted(bool*)", { "inverted", "bool*", "QTransform", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAffine()", { "isAffine", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isIdentity()", { "isIdentity", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isInvertible()", { "isInvertible", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRotating()", { "isRotating", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isScaling()", { "isScaling", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTranslating()", { "isTranslating", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(double,double,qreal*,qreal*)", { "map", "qreal,qreal,qreal*,qreal*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QPointF&)", { "map", "QPointF&", "QPointF", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QLine&)", { "map", "QLine&", "QLine", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QLineF&)", { "map", "QLineF&", "QLineF", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QPolygonF&)", { "map", "QPolygonF&", "QPolygonF", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QPolygon&)", { "map", "QPolygon&", "QPolygon", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QRegion&)", { "map", "QRegion&", "QRegion", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QPainterPath&)", { "map", "QPainterPath&", "QPainterPath", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(int,int,int*,int*)", { "map", "int,int,int*,int*", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(QPoint&)", { "map", "QPoint&", "QPoint", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRect(QRectF&)", { "mapRect", "QRectF&", "QRectF", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRect(QRect&)", { "mapRect", "QRect&", "QRect", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToPolygon(QRect&)", { "mapToPolygon", "QRect&", "QPolygon", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(double)", { "rotate", "qreal", "QTransform&", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(double,enum)", { "rotate", "qreal,Qt::Axis", "QTransform&", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotateRadians(double)", { "rotateRadians", "qreal", "QTransform&", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotateRadians(double,enum)", { "rotateRadians", "qreal,Qt::Axis", "QTransform&", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(double,double)", { "scale", "qreal,qreal", "QTransform&", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMatrix(double,double,double,double,double,double,double,double,double)", { "setMatrix", "qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal,qreal", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shear(double,double)", { "shear", "qreal,qreal", "QTransform&", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toAffine()", { "toAffine", "", "const QMatrix&", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double)", { "translate", "qreal,qreal", "QTransform&", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transposed()", { "transposed", "", "QTransform", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "TransformationType", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromScale(double,double)", { "fromScale", "qreal,qreal", "QTransform", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromTranslate(double,double)", { "fromTranslate", "qreal,qreal", "QTransform", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "quadToQuad(QPolygonF&,QPolygonF&,QTransform&)", { "quadToQuad", "QPolygonF&,QPolygonF&,QTransform&", "bool", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "quadToSquare(QPolygonF&,QTransform&)", { "quadToSquare", "QPolygonF&,QTransform&", "bool", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "squareToQuad(QPolygonF&,QTransform&)", { "squareToQuad", "QPolygonF&,QTransform&", "bool", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTransform::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTransform::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTransform::plastiqConstants = {

    /* QTransform::TransformationType */
   { "TxNone", QTransform::TxNone },
   { "TxTranslate", QTransform::TxTranslate },
   { "TxScale", QTransform::TxScale },
   { "TxRotate", QTransform::TxRotate },
   { "TxShear", QTransform::TxShear },
   { "TxProject", QTransform::TxProject },

};

QVector<PlastiQMetaObject*> PlastiQQTransform::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTransform::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTransform::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTransform", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTransform::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTransform::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTransform *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTransform(); break;
        case 1: o = new QTransform(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_double,
                    stack[8].s_double); break;
        case 2: o = new QTransform(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_double,
                    stack[8].s_double,
                    stack[9].s_double); break;
        case 3: o = new QTransform(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double); break;
        case 4: o = new QTransform((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp))); break;
        case 5: o = new QTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))); break;
        case 6: o = new QTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTransform *p = new PlastiQQTransform();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTransform *p = new PlastiQQTransform();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 51) {
            id -= 51;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTransform *o = sc ? Q_NULLPTR : reinterpret_cast<QTransform*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->m11();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->m12();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->m13();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->m21();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->m22();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->m23();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->m31();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { double _r = o->m32();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { double _r = o->m33();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->adjoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { double _r = o->determinant();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: { double _r = o->dx();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { double _r = o->dy();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->inverted());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->inverted(reinterpret_cast<bool*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { bool _r = o->isAffine();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isIdentity();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isInvertible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isRotating();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isScaling();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->isTranslating();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: o->map(stack[1].s_double,
                    stack[2].s_double,
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->map((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QLine *_r = new QLine(o->map((*reinterpret_cast< QLine(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLine";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QLineF *_r = new QLineF(o->map((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLineF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: /* UNSUPPORTED_RETURN_VALUE o->map((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 26: /* UNSUPPORTED_RETURN_VALUE o->map((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp))) | ret: `QPolygon` */ break;
        case 27: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->map((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->map((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: o->map(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 30: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->map((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QRect *_r = new QRect(o->mapRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: /* UNSUPPORTED_RETURN_VALUE o->mapToPolygon((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))) | ret: `QPolygon` */ break;
        case 34: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 35: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->rotate(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->rotate(stack[1].s_double,
                    Qt::Axis(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->rotateRadians(stack[1].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->rotateRadians(stack[1].s_double,
                    Qt::Axis(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->scale(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: o->setMatrix(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_double,
                    stack[8].s_double,
                    stack[9].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 41: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->shear(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: /* UNSUPPORTED_RETURN_VALUE o->toAffine() | ret: `const QMatrix&` */ break;
        case 43: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->translate(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->transposed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { qint64 _r = o->type(); // HACK for TransformationType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 46: { /* COPY OBJECT */
            QTransform *_r = sc ? new QTransform(QTransform::fromScale(stack[1].s_double,
                    stack[2].s_double)) : new QTransform(o->fromScale(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 47: { /* COPY OBJECT */
            QTransform *_r = sc ? new QTransform(QTransform::fromTranslate(stack[1].s_double,
                    stack[2].s_double)) : new QTransform(o->fromTranslate(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 48: { bool _r = sc ? QTransform::quadToQuad((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPolygonF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[3].s_voidp))) : o->quadToQuad((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPolygonF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[3].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { bool _r = sc ? QTransform::quadToSquare((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[2].s_voidp))) : o->quadToSquare((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: { bool _r = sc ? QTransform::squareToQuad((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[2].s_voidp))) : o->squareToQuad((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QTransform *o = reinterpret_cast<QTransform*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTransform::~PlastiQQTransform() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
