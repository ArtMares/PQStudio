#include "plastiqmethod.h"
#include "plastiqqconicalgradient.h"

#include "gui/PlastiQQGradient/plastiqqgradient.h"
#include <QConicalGradient> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQConicalGradient::plastiqConstructors = {
    { "QConicalGradient()", { "QConicalGradient", "", "QConicalGradient*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QConicalGradient(QPointF&,double)", { "QConicalGradient", "QPointF&,qreal", "QConicalGradient*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QConicalGradient(double,double,double)", { "QConicalGradient", "qreal,qreal,qreal", "QConicalGradient*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQConicalGradient::plastiqMethods = {
    { "angle()", { "angle", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "center()", { "center", "", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAngle(double)", { "setAngle", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenter(QPointF&)", { "setCenter", "QPointF&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenter(double,double)", { "setCenter", "qreal,qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQConicalGradient::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQConicalGradient::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQConicalGradient::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQConicalGradient::plastiqInherits = { &PlastiQQGradient::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQConicalGradient::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQConicalGradient::plastiq_static_metaObject = {
    { &PlastiQQGradient::plastiq_static_metaObject, &plastiqInherits, "QConicalGradient", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQConicalGradient::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQConicalGradient::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QConicalGradient *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QConicalGradient(); break;
        case 1: o = new QConicalGradient((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_double); break;
        case 2: o = new QConicalGradient(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQConicalGradient *p = new PlastiQQConicalGradient();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQConicalGradient *p = new PlastiQQConicalGradient();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQGradient::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QConicalGradient *o = sc ? Q_NULLPTR : reinterpret_cast<QConicalGradient*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->angle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->center());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->setAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setCenter((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setCenter(stack[1].s_double,
                    stack[2].s_double);
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
        QConicalGradient *o = reinterpret_cast<QConicalGradient*>(object->plastiq_data());

        if(className == "QGradient") {
            stack[0].s_voidp = static_cast<QGradient*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQConicalGradient::~PlastiQQConicalGradient() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
