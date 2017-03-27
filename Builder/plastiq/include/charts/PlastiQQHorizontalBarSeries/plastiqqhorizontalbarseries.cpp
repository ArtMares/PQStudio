#include "plastiqmethod.h"
#include "plastiqqhorizontalbarseries.h"

#include "charts/PlastiQQAbstractBarSeries/plastiqqabstractbarseries.h"
#include <QHorizontalBarSeries> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQHorizontalBarSeries::plastiqConstructors = {
    { "QHorizontalBarSeries()", { "QHorizontalBarSeries", "", "QHorizontalBarSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHorizontalBarSeries(QObject*)", { "QHorizontalBarSeries", "QObject*", "QHorizontalBarSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHorizontalBarSeries::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQHorizontalBarSeries::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHorizontalBarSeries::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHorizontalBarSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHorizontalBarSeries::plastiqInherits = { &PlastiQQAbstractBarSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHorizontalBarSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHorizontalBarSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractBarSeries::plastiq_static_metaObject, &plastiqInherits, "QHorizontalBarSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHorizontalBarSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHorizontalBarSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHorizontalBarSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHorizontalBarSeries(); break;
        case 1: o = new QHorizontalBarSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHorizontalBarSeries *p = new PlastiQQHorizontalBarSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHorizontalBarSeries *p = new PlastiQQHorizontalBarSeries();
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
        QHorizontalBarSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QHorizontalBarSeries*>(object->plastiq_data());

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

        QHorizontalBarSeries *o = reinterpret_cast<QHorizontalBarSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHorizontalBarSeries *o = reinterpret_cast<QHorizontalBarSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHorizontalBarSeries *o = reinterpret_cast<QHorizontalBarSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHorizontalBarSeries *o = reinterpret_cast<QHorizontalBarSeries*>(object->plastiq_data());

        if(className == "QAbstractBarSeries") {
            stack[0].s_voidp = static_cast<QAbstractBarSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHorizontalBarSeries::~PlastiQQHorizontalBarSeries() {
    QHorizontalBarSeries* o = reinterpret_cast<QHorizontalBarSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
