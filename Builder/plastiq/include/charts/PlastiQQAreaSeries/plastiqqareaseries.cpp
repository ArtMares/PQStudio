#include "plastiqmethod.h"
#include "plastiqqareaseries.h"

#include <QAreaSeries> 
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQAreaSeries::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAreaSeries::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAreaSeries::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAreaSeries::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAreaSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAreaSeries::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAreaSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAreaSeries::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAreaSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAreaSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAreaSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAreaSeries *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAreaSeries *p = new PlastiQQAreaSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAreaSeries *p = new PlastiQQAreaSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAreaSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QAreaSeries*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            return;
        }

        QAreaSeries *o = reinterpret_cast<QAreaSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAreaSeries *o = reinterpret_cast<QAreaSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAreaSeries *o = reinterpret_cast<QAreaSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAreaSeries *o = reinterpret_cast<QAreaSeries*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAreaSeries::~PlastiQQAreaSeries() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
