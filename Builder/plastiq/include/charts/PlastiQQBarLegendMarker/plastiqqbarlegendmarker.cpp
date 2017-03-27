#include "plastiqmethod.h"
#include "plastiqqbarlegendmarker.h"

#include "charts/PlastiQQLegendMarker/plastiqqlegendmarker.h"
#include <QBarLegendMarker> 
#include <QBarSet>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQBarLegendMarker::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQBarLegendMarker::plastiqMethods = {
    { "barset()", { "barset", "", "QBarSet*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBarLegendMarker::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQBarLegendMarker::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQBarLegendMarker::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBarLegendMarker::plastiqInherits = { &PlastiQQLegendMarker::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBarLegendMarker::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQBarLegendMarker::plastiq_static_metaObject = {
    { &PlastiQQLegendMarker::plastiq_static_metaObject, &plastiqInherits, "QBarLegendMarker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBarLegendMarker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBarLegendMarker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBarLegendMarker *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBarLegendMarker *p = new PlastiQQBarLegendMarker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBarLegendMarker *p = new PlastiQQBarLegendMarker();
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
        QBarLegendMarker *o = sc ? Q_NULLPTR : reinterpret_cast<QBarLegendMarker*>(object->plastiq_data());

        switch(id) {
        case 0: { QBarSet* _r = o->barset();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QBarSet"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLegendMarker::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QBarLegendMarker *o = reinterpret_cast<QBarLegendMarker*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QBarLegendMarker *o = reinterpret_cast<QBarLegendMarker*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QBarLegendMarker *o = reinterpret_cast<QBarLegendMarker*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QBarLegendMarker *o = reinterpret_cast<QBarLegendMarker*>(object->plastiq_data());

        if(className == "QLegendMarker") {
            stack[0].s_voidp = static_cast<QLegendMarker*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBarLegendMarker::~PlastiQQBarLegendMarker() {
    QBarLegendMarker* o = reinterpret_cast<QBarLegendMarker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
