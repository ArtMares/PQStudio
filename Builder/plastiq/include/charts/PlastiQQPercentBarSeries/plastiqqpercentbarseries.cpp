#include "plastiqmethod.h"
#include "plastiqqpercentbarseries.h"

#include "charts/PlastiQQAbstractBarSeries/plastiqqabstractbarseries.h"
#include <QPercentBarSeries> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQPercentBarSeries::plastiqConstructors = {
    { "QPercentBarSeries()", { "QPercentBarSeries", "", "QPercentBarSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPercentBarSeries(QObject*)", { "QPercentBarSeries", "QObject*", "QPercentBarSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPercentBarSeries::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPercentBarSeries::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPercentBarSeries::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPercentBarSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPercentBarSeries::plastiqInherits = { &PlastiQQAbstractBarSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPercentBarSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPercentBarSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractBarSeries::plastiq_static_metaObject, &plastiqInherits, "QPercentBarSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPercentBarSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPercentBarSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPercentBarSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPercentBarSeries(); break;
        case 1: o = new QPercentBarSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPercentBarSeries *p = new PlastiQQPercentBarSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPercentBarSeries *p = new PlastiQQPercentBarSeries();
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
        QPercentBarSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QPercentBarSeries*>(object->plastiq_data());

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

        QPercentBarSeries *o = reinterpret_cast<QPercentBarSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPercentBarSeries *o = reinterpret_cast<QPercentBarSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPercentBarSeries *o = reinterpret_cast<QPercentBarSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPercentBarSeries *o = reinterpret_cast<QPercentBarSeries*>(object->plastiq_data());

        if(className == "QAbstractBarSeries") {
            stack[0].s_voidp = static_cast<QAbstractBarSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPercentBarSeries::~PlastiQQPercentBarSeries() {
    QPercentBarSeries* o = reinterpret_cast<QPercentBarSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
