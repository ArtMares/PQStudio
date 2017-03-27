#include "plastiqmethod.h"
#include "plastiqqshareddata.h"

#include <QSharedData> 

QHash<QByteArray, PlastiQMethod> PlastiQQSharedData::plastiqConstructors = {
    { "QSharedData()", { "QSharedData", "", "QSharedData*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSharedData(QSharedData&)", { "QSharedData", "QSharedData&", "QSharedData*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSharedData::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSharedData::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSharedData::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSharedData::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSharedData::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSharedData::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSharedData::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSharedData", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSharedData::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSharedData::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSharedData *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSharedData(); break;
        case 1: o = new QSharedData((*reinterpret_cast< QSharedData(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSharedData *p = new PlastiQQSharedData();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSharedData *p = new PlastiQQSharedData();
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
        QSharedData *o = sc ? Q_NULLPTR : reinterpret_cast<QSharedData*>(object->plastiq_data());

        switch(id) {

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
        QSharedData *o = reinterpret_cast<QSharedData*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSharedData::~PlastiQQSharedData() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
