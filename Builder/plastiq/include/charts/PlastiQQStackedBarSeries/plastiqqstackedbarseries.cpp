#include "plastiqmethod.h"
#include "plastiqqstackedbarseries.h"

#include "charts/PlastiQQAbstractBarSeries/plastiqqabstractbarseries.h"
#include <QStackedBarSeries> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQStackedBarSeries::plastiqConstructors = {
    { "QStackedBarSeries()", { "QStackedBarSeries", "", "QStackedBarSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStackedBarSeries(QObject*)", { "QStackedBarSeries", "QObject*", "QStackedBarSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStackedBarSeries::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStackedBarSeries::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStackedBarSeries::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStackedBarSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStackedBarSeries::plastiqInherits = { &PlastiQQAbstractBarSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStackedBarSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQStackedBarSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractBarSeries::plastiq_static_metaObject, &plastiqInherits, "QStackedBarSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStackedBarSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStackedBarSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStackedBarSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStackedBarSeries(); break;
        case 1: o = new QStackedBarSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStackedBarSeries *p = new PlastiQQStackedBarSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStackedBarSeries *p = new PlastiQQStackedBarSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractBarSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStackedBarSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QStackedBarSeries*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractBarSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStackedBarSeries *o = reinterpret_cast<QStackedBarSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStackedBarSeries *o = reinterpret_cast<QStackedBarSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStackedBarSeries *o = reinterpret_cast<QStackedBarSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStackedBarSeries *o = reinterpret_cast<QStackedBarSeries*>(object->plastiq_data());

        if(className == "QAbstractBarSeries") {
            stack[0].s_voidp = static_cast<QAbstractBarSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStackedBarSeries::~PlastiQQStackedBarSeries() {
    QStackedBarSeries* o = reinterpret_cast<QStackedBarSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
