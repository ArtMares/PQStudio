#include "plastiqmethod.h"
#include "plastiqqregion.h"

#include <QRegion> 
#include <QRect>

QHash<QByteArray, PlastiQMethod> PlastiQQRegion::plastiqConstructors = {
    { "QRegion()", { "QRegion", "", "QRegion*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(int,int,int,int)", { "QRegion", "int,int,int,int", "QRegion*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(int,int,int,int,enum)", { "QRegion", "int,int,int,int,RegionType", "QRegion*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(QRect&)", { "QRegion", "QRect&", "QRegion*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(QRect&,enum)", { "QRegion", "QRect&,RegionType", "QRegion*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(QPolygon&)", { "QRegion", "QPolygon&", "QRegion*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(QPolygon&,enum)", { "QRegion", "QPolygon&,Qt::FillRule", "QRegion*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(QRegion&)", { "QRegion", "QRegion&", "QRegion*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(QRegion&&)", { "QRegion", "QRegion&&", "QRegion*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegion(QBitmap&)", { "QRegion", "QBitmap&", "QRegion*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegion::plastiqMethods = {
    { "begin()", { "begin", "", "const_iterator", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect()", { "boundingRect", "", "QRect", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cbegin()", { "cbegin", "", "const_iterator", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cend()", { "cend", "", "const_iterator", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QPoint&)", { "contains", "QPoint&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QRect&)", { "contains", "QRect&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crbegin()", { "crbegin", "", "const_reverse_iterator", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "crend()", { "crend", "", "const_reverse_iterator", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "const_iterator", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersected(QRegion&)", { "intersected", "QRegion&", "QRegion", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersected(QRect&)", { "intersected", "QRect&", "QRegion", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersects(QRegion&)", { "intersects", "QRegion&", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intersects(QRect&)", { "intersects", "QRect&", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rbegin()", { "rbegin", "", "const_reverse_iterator", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rectCount()", { "rectCount", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rend()", { "rend", "", "const_reverse_iterator", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRects(const QRect*,int)", { "setRects", "QRect*,int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subtracted(QRegion&)", { "subtracted", "QRegion&", "QRegion", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QRegion&)", { "swap", "QRegion&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(int,int)", { "translate", "int,int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPoint&)", { "translate", "QPoint&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(int,int)", { "translated", "int,int", "QRegion", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(QPoint&)", { "translated", "QPoint&", "QRegion", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "united(QRegion&)", { "united", "QRegion&", "QRegion", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "united(QRect&)", { "united", "QRect&", "QRegion", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xored(QRegion&)", { "xored", "QRegion&", "QRegion", 27, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegion::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRegion::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRegion::plastiqConstants = {

    /* QRegion::RegionType */
   { "Rectangle", QRegion::Rectangle },
   { "Ellipse", QRegion::Ellipse },

};

QVector<PlastiQMetaObject*> PlastiQQRegion::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRegion::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRegion::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRegion", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRegion::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRegion::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRegion *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRegion(); break;
        case 1: o = new QRegion(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;
        case 2: o = new QRegion(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    QRegion::RegionType(stack[5].s_int64)); break;
        case 3: o = new QRegion((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))); break;
        case 4: o = new QRegion((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    QRegion::RegionType(stack[2].s_int64)); break;
        case 5: o = new QRegion((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp))); break;
        case 6: o = new QRegion((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp)),
                    Qt::FillRule(stack[2].s_int64)); break;
        case 7: o = new QRegion((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))); break;
        case 8: o = new QRegion((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))); break;
        case 9: o = new QRegion((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRegion *p = new PlastiQQRegion();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRegion *p = new PlastiQQRegion();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRegion *o = sc ? Q_NULLPTR : reinterpret_cast<QRegion*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->begin() | ret: `const_iterator` */ break;
        case 1: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: /* o->cbegin() | ret: `const_iterator` */ break;
        case 3: /* o->cend() | ret: `const_iterator` */ break;
        case 4: { bool _r = o->contains((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->contains((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: /* o->crbegin() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 7: /* o->crend() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 8: /* o->end() | ret: `const_iterator` */ break;
        case 9: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->intersected((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->intersected((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { bool _r = o->intersects((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->intersects((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: /* o->rbegin() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 16: { int _r = o->rectCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: /* o->rend() | ret: `const_reverse_iterator` (INTERNAL CLASS) */ break;
        case 18: o->setRects(reinterpret_cast<const QRect*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->subtracted((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: o->swap((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->translate(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->translate((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->translated(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->translated((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->united((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->united((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->xored((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
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
        QRegion *o = reinterpret_cast<QRegion*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRegion::~PlastiQQRegion() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
