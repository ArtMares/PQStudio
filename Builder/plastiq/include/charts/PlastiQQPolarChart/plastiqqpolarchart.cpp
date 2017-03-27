#include "plastiqmethod.h"
#include "plastiqqpolarchart.h"

#include "charts/PlastiQQChart/plastiqqchart.h"
#include <QPolarChart> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQPolarChart::plastiqConstructors = {
    { "QPolarChart()", { "QPolarChart", "", "QPolarChart*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPolarChart(QGraphicsItem*)", { "QPolarChart", "QGraphicsItem*", "QPolarChart*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPolarChart(QGraphicsItem*,enum)", { "QPolarChart", "QGraphicsItem*,Qt::WindowFlags", "QPolarChart*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPolarChart::plastiqMethods = {
    { "addAxis(QAbstractAxis*,enum)", { "addAxis", "QAbstractAxis*,PolarOrientation", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "axisPolarOrientation(QAbstractAxis*)", { "axisPolarOrientation", "QAbstractAxis*", "PolarOrientation", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPolarChart::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPolarChart::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPolarChart::plastiqConstants = {

    /* QPolarChart::PolarOrientation */
   { "PolarOrientationRadial", QPolarChart::PolarOrientationRadial },
   { "PolarOrientationAngular", QPolarChart::PolarOrientationAngular },

};

QVector<PlastiQMetaObject*> PlastiQQPolarChart::plastiqInherits = { &PlastiQQChart::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPolarChart::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPolarChart::plastiq_static_metaObject = {
    { &PlastiQQChart::plastiq_static_metaObject, &plastiqInherits, "QPolarChart", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPolarChart::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPolarChart::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPolarChart *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPolarChart(); break;
        case 1: o = new QPolarChart(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QPolarChart(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPolarChart *p = new PlastiQQPolarChart();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPolarChart *p = new PlastiQQPolarChart();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQChart::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPolarChart *o = sc ? Q_NULLPTR : reinterpret_cast<QPolarChart*>(object->plastiq_data());

        switch(id) {
        case 0: o->addAxis(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp),
                    QPolarChart::PolarOrientation(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 1: { qint64 _r = sc ? QPolarChart::axisPolarOrientation(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp)) : o->axisPolarOrientation(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp)); // HACK for PolarOrientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQChart::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPolarChart *o = reinterpret_cast<QPolarChart*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPolarChart *o = reinterpret_cast<QPolarChart*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPolarChart *o = reinterpret_cast<QPolarChart*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPolarChart *o = reinterpret_cast<QPolarChart*>(object->plastiq_data());

        if(className == "QChart") {
            stack[0].s_voidp = static_cast<QChart*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPolarChart::~PlastiQQPolarChart() {
    QPolarChart* o = reinterpret_cast<QPolarChart*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
