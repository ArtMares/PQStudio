#include "plastiqmethod.h"
#include "plastiqqsize.h"

#include <QSize> 

QHash<QByteArray, PlastiQMethod> PlastiQQSize::plastiqConstructors = {
    { "QSize()", { "QSize", "", "QSize*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSize(int,int)", { "QSize", "int,int", "QSize*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSize::plastiqMethods = {
    { "boundedTo(QSize&)", { "boundedTo", "QSize&", "QSize", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expandedTo(QSize&)", { "expandedTo", "QSize&", "QSize", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rheight()", { "rheight", "", "int&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rwidth()", { "rwidth", "", "int&", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(int,int,enum)", { "scale", "int,int,Qt::AspectRatioMode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(QSize&,enum)", { "scale", "QSize&,Qt::AspectRatioMode", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(int,int,enum)", { "scaled", "int,int,Qt::AspectRatioMode", "QSize", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSize&,enum)", { "scaled", "QSize&,Qt::AspectRatioMode", "QSize", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeight(int)", { "setHeight", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(int)", { "setWidth", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCGSize()", { "toCGSize", "", "CGSize", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transpose()", { "transpose", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transposed()", { "transposed", "", "QSize", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSize::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSize::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSize::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSize::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSize::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSize::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSize", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSize::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSize::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSize *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSize(); break;
        case 1: o = new QSize(stack[1].s_int,
                    stack[2].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSize *p = new PlastiQQSize();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSize *p = new PlastiQQSize();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSize *o = sc ? Q_NULLPTR : reinterpret_cast<QSize*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSize *_r = new QSize(o->boundedTo((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QSize *_r = new QSize(o->expandedTo((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->rheight() | ret: `int&` */ break;
        case 7: /* UNSUPPORTED_RETURN_VALUE o->rwidth() | ret: `int&` */ break;
        case 8: o->scale(stack[1].s_int,
                    stack[2].s_int,
                    Qt::AspectRatioMode(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->scale((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: { /* COPY OBJECT */
            QSize *_r = new QSize(o->scaled(stack[1].s_int,
                    stack[2].s_int,
                    Qt::AspectRatioMode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QSize *_r = new QSize(o->scaled((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->setHeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: /* UNSUPPORTED_RETURN_VALUE o->toCGSize() | ret: `CGSize` */ break;
        case 15: o->transpose();
                stack[0].type = PlastiQ::Void; break;
        case 16: { /* COPY OBJECT */
            QSize *_r = new QSize(o->transposed());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { int _r = o->width();
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
        QSize *o = reinterpret_cast<QSize*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSize::~PlastiQQSize() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
