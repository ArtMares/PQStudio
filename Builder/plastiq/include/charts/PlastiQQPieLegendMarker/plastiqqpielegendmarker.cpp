#include "plastiqmethod.h"
#include "plastiqqpielegendmarker.h"

#include "charts/PlastiQQLegendMarker/plastiqqlegendmarker.h"
#include <QPieLegendMarker> 
#include <QPieSlice>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQPieLegendMarker::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPieLegendMarker::plastiqMethods = {
    { "slice()", { "slice", "", "QPieSlice*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPieLegendMarker::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPieLegendMarker::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPieLegendMarker::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPieLegendMarker::plastiqInherits = { &PlastiQQLegendMarker::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPieLegendMarker::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPieLegendMarker::plastiq_static_metaObject = {
    { &PlastiQQLegendMarker::plastiq_static_metaObject, &plastiqInherits, "QPieLegendMarker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPieLegendMarker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPieLegendMarker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPieLegendMarker *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPieLegendMarker *p = new PlastiQQPieLegendMarker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPieLegendMarker *p = new PlastiQQPieLegendMarker();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQLegendMarker::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPieLegendMarker *o = sc ? Q_NULLPTR : reinterpret_cast<QPieLegendMarker*>(object->plastiq_data());

        switch(id) {
        case 0: { QPieSlice* _r = o->slice();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPieSlice"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLegendMarker::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPieLegendMarker *o = reinterpret_cast<QPieLegendMarker*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPieLegendMarker *o = reinterpret_cast<QPieLegendMarker*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPieLegendMarker *o = reinterpret_cast<QPieLegendMarker*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPieLegendMarker *o = reinterpret_cast<QPieLegendMarker*>(object->plastiq_data());

        if(className == "QLegendMarker") {
            stack[0].s_voidp = static_cast<QLegendMarker*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPieLegendMarker::~PlastiQQPieLegendMarker() {
    QPieLegendMarker* o = reinterpret_cast<QPieLegendMarker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
