#include "plastiqmethod.h"
#include "plastiqqradialgradient.h"

#include "gui/PlastiQQGradient/plastiqqgradient.h"
#include <QRadialGradient> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQRadialGradient::plastiqConstructors = {
    { "QRadialGradient()", { "QRadialGradient", "", "QRadialGradient*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadialGradient(QPointF&,double,QPointF&)", { "QRadialGradient", "QPointF&,qreal,QPointF&", "QRadialGradient*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadialGradient(double,double,double,double,double)", { "QRadialGradient", "qreal,qreal,qreal,qreal,qreal", "QRadialGradient*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadialGradient(QPointF&,double)", { "QRadialGradient", "QPointF&,qreal", "QRadialGradient*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadialGradient(double,double,double)", { "QRadialGradient", "qreal,qreal,qreal", "QRadialGradient*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadialGradient(QPointF&,double,QPointF&,double)", { "QRadialGradient", "QPointF&,qreal,QPointF&,qreal", "QRadialGradient*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadialGradient(double,double,double,double,double,double)", { "QRadialGradient", "qreal,qreal,qreal,qreal,qreal,qreal", "QRadialGradient*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadialGradient::plastiqMethods = {
    { "center()", { "center", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "centerRadius()", { "centerRadius", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focalPoint()", { "focalPoint", "", "QPointF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focalRadius()", { "focalRadius", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "radius()", { "radius", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenter(QPointF&)", { "setCenter", "QPointF&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenter(double,double)", { "setCenter", "qreal,qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenterRadius(double)", { "setCenterRadius", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocalPoint(QPointF&)", { "setFocalPoint", "QPointF&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocalPoint(double,double)", { "setFocalPoint", "qreal,qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocalRadius(double)", { "setFocalRadius", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRadius(double)", { "setRadius", "qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadialGradient::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRadialGradient::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRadialGradient::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRadialGradient::plastiqInherits = { &PlastiQQGradient::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRadialGradient::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRadialGradient::plastiq_static_metaObject = {
    { &PlastiQQGradient::plastiq_static_metaObject, &plastiqInherits, "QRadialGradient", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRadialGradient::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRadialGradient::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRadialGradient *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRadialGradient(); break;
        case 1: o = new QRadialGradient((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp))); break;
        case 2: o = new QRadialGradient(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double); break;
        case 3: o = new QRadialGradient((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_double); break;
        case 4: o = new QRadialGradient(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double); break;
        case 5: o = new QRadialGradient((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)),
                    stack[4].s_double); break;
        case 6: o = new QRadialGradient(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRadialGradient *p = new PlastiQQRadialGradient();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRadialGradient *p = new PlastiQQRadialGradient();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQGradient::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRadialGradient *o = sc ? Q_NULLPTR : reinterpret_cast<QRadialGradient*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->center());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { double _r = o->centerRadius();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->focalPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { double _r = o->focalRadius();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->radius();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: o->setCenter((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setCenter(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setCenterRadius(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFocalPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setFocalPoint(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setFocalRadius(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setRadius(stack[1].s_double);
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
        QRadialGradient *o = reinterpret_cast<QRadialGradient*>(object->plastiq_data());

        if(className == "QGradient") {
            stack[0].s_voidp = static_cast<QGradient*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRadialGradient::~PlastiQQRadialGradient() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
