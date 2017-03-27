#include "plastiqmethod.h"
#include "plastiqqrectf.h"

#include <QRectF> 
#include <QPointF>
#include <QSizeF>
#include <QRect>

QHash<QByteArray, PlastiQMethod> PlastiQQRectF::plastiqConstructors = {
    { "QRectF()", { "QRectF", "", "QRectF*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRectF(QPointF&,QSizeF&)", { "QRectF", "QPointF&,QSizeF&", "QRectF*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRectF(QPointF&,QPointF&)", { "QRectF", "QPointF&,QPointF&", "QRectF*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRectF(double,double,double,double)", { "QRectF", "qreal,qreal,qreal,qreal", "QRectF*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRectF(QRect&)", { "QRectF", "QRect&", "QRectF*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRectF::plastiqMethods = {
    { "adjust(double,double,double,double)", { "adjust", "qreal,qreal,qreal,qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "adjusted(double,double,double,double)", { "adjusted", "qreal,qreal,qreal,qreal", "QRectF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottom()", { "bottom", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottomLeft()", { "bottomLeft", "", "QPointF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottomRight()", { "bottomRight", "", "QPointF", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "center()", { "center", "", "QPointF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QPointF&)", { "contains", "QPointF&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRectF&)", { "contains", "QRectF&", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(double,double)", { "contains", "qreal,qreal", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getCoords(qreal*,qreal*,qreal*,qreal*)", { "getCoords", "qreal*,qreal*,qreal*,qreal*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getRect(qreal*,qreal*,qreal*,qreal*)", { "getRect", "qreal*,qreal*,qreal*,qreal*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersected(QRectF&)", { "intersected", "QRectF&", "QRectF", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersects(QRectF&)", { "intersects", "QRectF&", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left()", { "left", "", "qreal", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "marginsAdded(QMarginsF&)", { "marginsAdded", "QMarginsF&", "QRectF", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "marginsRemoved(QMarginsF&)", { "marginsRemoved", "QMarginsF&", "QRectF", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveBottom(double)", { "moveBottom", "qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveBottomLeft(QPointF&)", { "moveBottomLeft", "QPointF&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveBottomRight(QPointF&)", { "moveBottomRight", "QPointF&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveCenter(QPointF&)", { "moveCenter", "QPointF&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveLeft(double)", { "moveLeft", "qreal", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveRight(double)", { "moveRight", "qreal", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTo(double,double)", { "moveTo", "qreal,qreal", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTo(QPointF&)", { "moveTo", "QPointF&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTop(double)", { "moveTop", "qreal", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTopLeft(QPointF&)", { "moveTopLeft", "QPointF&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTopRight(QPointF&)", { "moveTopRight", "QPointF&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QRectF", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right()", { "right", "", "qreal", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottom(double)", { "setBottom", "qreal", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomLeft(QPointF&)", { "setBottomLeft", "QPointF&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomRight(QPointF&)", { "setBottomRight", "QPointF&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCoords(double,double,double,double)", { "setCoords", "qreal,qreal,qreal,qreal", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeight(double)", { "setHeight", "qreal", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeft(double)", { "setLeft", "qreal", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRect(double,double,double,double)", { "setRect", "qreal,qreal,qreal,qreal", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRight(double)", { "setRight", "qreal", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSize(QSizeF&)", { "setSize", "QSizeF&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTop(double)", { "setTop", "qreal", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopLeft(QPointF&)", { "setTopLeft", "QPointF&", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopRight(QPointF&)", { "setTopRight", "QPointF&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(double)", { "setWidth", "qreal", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(double)", { "setX", "qreal", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(double)", { "setY", "qreal", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSizeF", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toAlignedRect()", { "toAlignedRect", "", "QRect", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCGRect()", { "toCGRect", "", "CGRect", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRect()", { "toRect", "", "QRect", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "top()", { "top", "", "qreal", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLeft()", { "topLeft", "", "QPointF", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topRight()", { "topRight", "", "QPointF", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double)", { "translate", "qreal,qreal", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPointF&)", { "translate", "QPointF&", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(double,double)", { "translated", "qreal,qreal", "QRectF", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(QPointF&)", { "translated", "QPointF&", "QRectF", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transposed()", { "transposed", "", "QRectF", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "united(QRectF&)", { "united", "QRectF&", "QRectF", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "qreal", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "qreal", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromCGRect(CGRect)", { "fromCGRect", "CGRect", "QRectF", 64, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRectF::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRectF::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRectF::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRectF::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRectF::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRectF::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRectF", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRectF::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRectF::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRectF *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRectF(); break;
        case 1: o = new QRectF((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QSizeF(*) >(stack[2].s_voidp))); break;
        case 2: o = new QRectF((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp))); break;
        case 3: o = new QRectF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 4: o = new QRectF((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRectF *p = new PlastiQQRectF();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRectF *p = new PlastiQQRectF();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 65) {
            id -= 65;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRectF *o = sc ? Q_NULLPTR : reinterpret_cast<QRectF*>(object->plastiq_data());

        switch(id) {
        case 0: o->adjust(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->adjusted(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { double _r = o->bottom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->bottomLeft());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->bottomRight());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->center());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { bool _r = o->contains((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->contains((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->contains(stack[1].s_double,
                    stack[2].s_double);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: o->getCoords(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->getRect(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: { double _r = o->height();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->intersected((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { bool _r = o->intersects((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { double _r = o->left();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->marginsAdded((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->marginsRemoved((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: o->moveBottom(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->moveBottomLeft((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->moveBottomRight((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->moveCenter((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->moveLeft(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->moveRight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->moveTo(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->moveTo((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->moveTop(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->moveTopLeft((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->moveTopRight((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { double _r = o->right();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 33: o->setBottom(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setBottomLeft((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setBottomRight((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setCoords(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setHeight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setLeft(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setRight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setTop(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setTopLeft((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setTopRight((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setX(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setY(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 48: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 49: { /* COPY OBJECT */
            QRect *_r = new QRect(o->toAlignedRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 50: /* UNSUPPORTED_RETURN_VALUE o->toCGRect() | ret: `CGRect` */ break;
        case 51: { /* COPY OBJECT */
            QRect *_r = new QRect(o->toRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: { double _r = o->top();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 53: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->topLeft());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 54: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->topRight());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 55: o->translate(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 56: o->translate((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 57: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->translated(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->translated((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->transposed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 60: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->united((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 61: { double _r = o->width();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 62: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 63: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 64: /* o->fromCGRect(UNSUPPORTED_TYPE_CGRect) | ret: `QRectF` */ break;

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
        QRectF *o = reinterpret_cast<QRectF*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRectF::~PlastiQQRectF() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
