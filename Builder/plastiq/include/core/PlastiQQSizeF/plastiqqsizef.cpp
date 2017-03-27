#include "plastiqmethod.h"
#include "plastiqqsizef.h"

#include <QSizeF> 
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQSizeF::plastiqConstructors = {
    { "QSizeF()", { "QSizeF", "", "QSizeF*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSizeF(QSize&)", { "QSizeF", "QSize&", "QSizeF*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSizeF(double,double)", { "QSizeF", "qreal,qreal", "QSizeF*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSizeF::plastiqMethods = {
    { "boundedTo(QSizeF&)", { "boundedTo", "QSizeF&", "QSizeF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expandedTo(QSizeF&)", { "expandedTo", "QSizeF&", "QSizeF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rheight()", { "rheight", "", "qreal&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rwidth()", { "rwidth", "", "qreal&", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(double,double,enum)", { "scale", "qreal,qreal,Qt::AspectRatioMode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(QSizeF&,enum)", { "scale", "QSizeF&,Qt::AspectRatioMode", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(double,double,enum)", { "scaled", "qreal,qreal,Qt::AspectRatioMode", "QSizeF", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSizeF&,enum)", { "scaled", "QSizeF&,Qt::AspectRatioMode", "QSizeF", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeight(double)", { "setHeight", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(double)", { "setWidth", "qreal", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCGSize()", { "toCGSize", "", "CGSize", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toSize()", { "toSize", "", "QSize", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transpose()", { "transpose", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transposed()", { "transposed", "", "QSizeF", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromCGSize(CGSize)", { "fromCGSize", "CGSize", "QSizeF", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSizeF::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSizeF::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSizeF::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSizeF::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSizeF::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSizeF::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSizeF", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSizeF::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSizeF::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSizeF *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSizeF(); break;
        case 1: o = new QSizeF((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); break;
        case 2: o = new QSizeF(stack[1].s_double,
                    stack[2].s_double); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSizeF *p = new PlastiQQSizeF();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSizeF *p = new PlastiQQSizeF();
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
        QSizeF *o = sc ? Q_NULLPTR : reinterpret_cast<QSizeF*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->boundedTo((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->expandedTo((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { double _r = o->height();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->rheight() | ret: `qreal&` */ break;
        case 7: /* UNSUPPORTED_RETURN_VALUE o->rwidth() | ret: `qreal&` */ break;
        case 8: o->scale(stack[1].s_double,
                    stack[2].s_double,
                    Qt::AspectRatioMode(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->scale((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->scaled(stack[1].s_double,
                    stack[2].s_double,
                    Qt::AspectRatioMode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->scaled((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->setHeight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 14: /* UNSUPPORTED_RETURN_VALUE o->toCGSize() | ret: `CGSize` */ break;
        case 15: { /* COPY OBJECT */
            QSize *_r = new QSize(o->toSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: o->transpose();
                stack[0].type = PlastiQ::Void; break;
        case 17: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->transposed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { double _r = o->width();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 19: /* o->fromCGSize(UNSUPPORTED_TYPE_CGSize) | ret: `QSizeF` */ break;

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
        QSizeF *o = reinterpret_cast<QSizeF*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSizeF::~PlastiQQSizeF() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
