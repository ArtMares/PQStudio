#include "plastiqmethod.h"
#include "plastiqqsplineseries.h"

#include "charts/PlastiQQLineSeries/plastiqqlineseries.h"
#include <QSplineSeries> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQSplineSeries::plastiqConstructors = {
    { "QSplineSeries()", { "QSplineSeries", "", "QSplineSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplineSeries(QObject*)", { "QSplineSeries", "QObject*", "QSplineSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplineSeries::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplineSeries::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSplineSeries::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSplineSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSplineSeries::plastiqInherits = { &PlastiQQLineSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSplineSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSplineSeries::plastiq_static_metaObject = {
    { &PlastiQQLineSeries::plastiq_static_metaObject, &plastiqInherits, "QSplineSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSplineSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSplineSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSplineSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSplineSeries(); break;
        case 1: o = new QSplineSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSplineSeries *p = new PlastiQQSplineSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSplineSeries *p = new PlastiQQSplineSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLineSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSplineSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QSplineSeries*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLineSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSplineSeries *o = reinterpret_cast<QSplineSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSplineSeries *o = reinterpret_cast<QSplineSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSplineSeries *o = reinterpret_cast<QSplineSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSplineSeries *o = reinterpret_cast<QSplineSeries*>(object->plastiq_data());

        if(className == "QLineSeries") {
            stack[0].s_voidp = static_cast<QLineSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSplineSeries::~PlastiQQSplineSeries() {
    QSplineSeries* o = reinterpret_cast<QSplineSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
