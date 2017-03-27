#include "plastiqmethod.h"
#include "plastiqqlineargradient.h"

#include "gui/PlastiQQGradient/plastiqqgradient.h"
#include <QLinearGradient> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQLinearGradient::plastiqConstructors = {
    { "QLinearGradient()", { "QLinearGradient", "", "QLinearGradient*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLinearGradient(QPointF&,QPointF&)", { "QLinearGradient", "QPointF&,QPointF&", "QLinearGradient*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLinearGradient(double,double,double,double)", { "QLinearGradient", "qreal,qreal,qreal,qreal", "QLinearGradient*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLinearGradient::plastiqMethods = {
    { "finalStop()", { "finalStop", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFinalStop(QPointF&)", { "setFinalStop", "QPointF&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFinalStop(double,double)", { "setFinalStop", "qreal,qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStart(QPointF&)", { "setStart", "QPointF&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStart(double,double)", { "setStart", "qreal,qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "QPointF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLinearGradient::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLinearGradient::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLinearGradient::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLinearGradient::plastiqInherits = { &PlastiQQGradient::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLinearGradient::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLinearGradient::plastiq_static_metaObject = {
    { &PlastiQQGradient::plastiq_static_metaObject, &plastiqInherits, "QLinearGradient", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLinearGradient::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLinearGradient::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLinearGradient *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLinearGradient(); break;
        case 1: o = new QLinearGradient((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp))); break;
        case 2: o = new QLinearGradient(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLinearGradient *p = new PlastiQQLinearGradient();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLinearGradient *p = new PlastiQQLinearGradient();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQGradient::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLinearGradient *o = sc ? Q_NULLPTR : reinterpret_cast<QLinearGradient*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->finalStop());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setFinalStop((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setFinalStop(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setStart((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setStart(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->start());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
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
        QLinearGradient *o = reinterpret_cast<QLinearGradient*>(object->plastiq_data());

        if(className == "QGradient") {
            stack[0].s_voidp = static_cast<QGradient*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLinearGradient::~PlastiQQLinearGradient() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
