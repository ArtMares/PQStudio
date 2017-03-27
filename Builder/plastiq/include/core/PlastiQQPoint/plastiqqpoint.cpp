#include "plastiqmethod.h"
#include "plastiqqpoint.h"

#include <QPoint> 

QHash<QByteArray, PlastiQMethod> PlastiQQPoint::plastiqConstructors = {
    { "QPoint()", { "QPoint", "", "QPoint*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPoint(int,int)", { "QPoint", "int,int", "QPoint*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPoint::plastiqMethods = {
    { "isNull()", { "isNull", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "manhattanLength()", { "manhattanLength", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rx()", { "rx", "", "int&", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ry()", { "ry", "", "int&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(int)", { "setX", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(int)", { "setY", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCGPoint()", { "toCGPoint", "", "CGPoint", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dotProduct(QPoint&,QPoint&)", { "dotProduct", "QPoint&,QPoint&", "int", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPoint::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPoint::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPoint::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPoint::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPoint::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPoint::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPoint", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPoint::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPoint::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPoint *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPoint(); break;
        case 1: o = new QPoint(stack[1].s_int,
                    stack[2].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPoint *p = new PlastiQQPoint();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPoint *p = new PlastiQQPoint();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPoint *o = sc ? Q_NULLPTR : reinterpret_cast<QPoint*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->manhattanLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->rx() | ret: `int&` */ break;
        case 3: /* UNSUPPORTED_RETURN_VALUE o->ry() | ret: `int&` */ break;
        case 4: o->setX(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setY(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->toCGPoint() | ret: `CGPoint` */ break;
        case 7: { int _r = o->x();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->y();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = sc ? QPoint::dotProduct((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))) : o->dotProduct((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)));
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
        QPoint *o = reinterpret_cast<QPoint*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPoint::~PlastiQQPoint() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
