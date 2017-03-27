#include "plastiqmethod.h"
#include "plastiqqrect.h"

#include <QRect> 
#include <QPoint>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQRect::plastiqConstructors = {
    { "QRect()", { "QRect", "", "QRect*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRect(QPoint&,QPoint&)", { "QRect", "QPoint&,QPoint&", "QRect*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRect(QPoint&,QSize&)", { "QRect", "QPoint&,QSize&", "QRect*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRect(int,int,int,int)", { "QRect", "int,int,int,int", "QRect*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRect::plastiqMethods = {
    { "adjust(int,int,int,int)", { "adjust", "int,int,int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "adjusted(int,int,int,int)", { "adjusted", "int,int,int,int", "QRect", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottom()", { "bottom", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottomLeft()", { "bottomLeft", "", "QPoint", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottomRight()", { "bottomRight", "", "QPoint", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "center()", { "center", "", "QPoint", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QPoint&)", { "contains", "QPoint&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QPoint&,bool)", { "contains", "QPoint&,bool", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRect&)", { "contains", "QRect&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRect&,bool)", { "contains", "QRect&,bool", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(int,int)", { "contains", "int,int", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(int,int,bool)", { "contains", "int,int,bool", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getCoords(int*,int*,int*,int*)", { "getCoords", "int*,int*,int*,int*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getRect(int*,int*,int*,int*)", { "getRect", "int*,int*,int*,int*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersected(QRect&)", { "intersected", "QRect&", "QRect", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersects(QRect&)", { "intersects", "QRect&", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left()", { "left", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "marginsAdded(QMargins&)", { "marginsAdded", "QMargins&", "QRect", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "marginsRemoved(QMargins&)", { "marginsRemoved", "QMargins&", "QRect", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveBottom(int)", { "moveBottom", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveBottomLeft(QPoint&)", { "moveBottomLeft", "QPoint&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveBottomRight(QPoint&)", { "moveBottomRight", "QPoint&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveCenter(QPoint&)", { "moveCenter", "QPoint&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveLeft(int)", { "moveLeft", "int", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveRight(int)", { "moveRight", "int", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTo(int,int)", { "moveTo", "int,int", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTo(QPoint&)", { "moveTo", "QPoint&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTop(int)", { "moveTop", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTopLeft(QPoint&)", { "moveTopLeft", "QPoint&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTopRight(QPoint&)", { "moveTopRight", "QPoint&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QRect", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right()", { "right", "", "int", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottom(int)", { "setBottom", "int", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomLeft(QPoint&)", { "setBottomLeft", "QPoint&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomRight(QPoint&)", { "setBottomRight", "QPoint&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCoords(int,int,int,int)", { "setCoords", "int,int,int,int", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeight(int)", { "setHeight", "int", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeft(int)", { "setLeft", "int", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRect(int,int,int,int)", { "setRect", "int,int,int,int", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRight(int)", { "setRight", "int", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSize(QSize&)", { "setSize", "QSize&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTop(int)", { "setTop", "int", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopLeft(QPoint&)", { "setTopLeft", "QPoint&", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopRight(QPoint&)", { "setTopRight", "QPoint&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(int)", { "setWidth", "int", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(int)", { "setX", "int", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(int)", { "setY", "int", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCGRect()", { "toCGRect", "", "CGRect", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "top()", { "top", "", "int", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLeft()", { "topLeft", "", "QPoint", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topRight()", { "topRight", "", "QPoint", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(int,int)", { "translate", "int,int", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPoint&)", { "translate", "QPoint&", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(int,int)", { "translated", "int,int", "QRect", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(QPoint&)", { "translated", "QPoint&", "QRect", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transposed()", { "transposed", "", "QRect", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "united(QRect&)", { "united", "QRect&", "QRect", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 64, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRect::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRect::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRect::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRect::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRect::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRect::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRect *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRect(); break;
        case 1: o = new QRect((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))); break;
        case 2: o = new QRect((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp))); break;
        case 3: o = new QRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRect *p = new PlastiQQRect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRect *p = new PlastiQQRect();
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
        QRect *o = sc ? Q_NULLPTR : reinterpret_cast<QRect*>(object->plastiq_data());

        switch(id) {
        case 0: o->adjust(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QRect *_r = new QRect(o->adjusted(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->bottom();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->bottomLeft());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->bottomRight());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->center());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { bool _r = o->contains((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->contains((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->contains((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->contains((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->contains(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->contains(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: o->getCoords(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->getRect(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { /* COPY OBJECT */
            QRect *_r = new QRect(o->intersected((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { bool _r = o->intersects((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { int _r = o->left();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { /* COPY OBJECT */
            QRect *_r = new QRect(o->marginsAdded((*reinterpret_cast< QMargins(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { /* COPY OBJECT */
            QRect *_r = new QRect(o->marginsRemoved((*reinterpret_cast< QMargins(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: o->moveBottom(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->moveBottomLeft((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->moveBottomRight((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->moveCenter((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->moveLeft(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->moveRight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->moveTo(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->moveTo((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->moveTop(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->moveTopLeft((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->moveTopRight((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: { /* COPY OBJECT */
            QRect *_r = new QRect(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: { int _r = o->right();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 36: o->setBottom(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setBottomLeft((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setBottomRight((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setCoords(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setLeft(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setRight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setTop(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setTopLeft((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setTopRight((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setX(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setY(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 51: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: /* UNSUPPORTED_RETURN_VALUE o->toCGRect() | ret: `CGRect` */ break;
        case 53: { int _r = o->top();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->topLeft());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 55: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->topRight());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: o->translate(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 57: o->translate((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 58: { /* COPY OBJECT */
            QRect *_r = new QRect(o->translated(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QRect *_r = new QRect(o->translated((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 60: { /* COPY OBJECT */
            QRect *_r = new QRect(o->transposed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 61: { /* COPY OBJECT */
            QRect *_r = new QRect(o->united((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 62: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 63: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 64: { int _r = o->y();
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
        QRect *o = reinterpret_cast<QRect*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRect::~PlastiQQRect() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
