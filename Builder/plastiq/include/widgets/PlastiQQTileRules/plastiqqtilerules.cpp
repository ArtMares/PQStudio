#include "plastiqmethod.h"
#include "plastiqqtilerules.h"

#include <QTileRules> 

QHash<QByteArray, PlastiQMethod> PlastiQQTileRules::plastiqConstructors = {
    { "QTileRules(enum,enum)", { "QTileRules", "Qt::TileRule,Qt::TileRule", "QTileRules*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTileRules()", { "QTileRules", "", "QTileRules*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTileRules(enum)", { "QTileRules", "Qt::TileRule", "QTileRules*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTileRules::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTileRules::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTileRules::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTileRules::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTileRules::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTileRules::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTileRules::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTileRules", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTileRules::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTileRules::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTileRules *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTileRules(Qt::TileRule(stack[1].s_int64),
                    Qt::TileRule(stack[2].s_int64)); break;
        case 1: o = new QTileRules(); break;
        case 2: o = new QTileRules(Qt::TileRule(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTileRules *p = new PlastiQQTileRules();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTileRules *p = new PlastiQQTileRules();
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
        QTileRules *o = sc ? Q_NULLPTR : reinterpret_cast<QTileRules*>(object->plastiq_data());

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
        QTileRules *o = reinterpret_cast<QTileRules*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTileRules::~PlastiQQTileRules() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
