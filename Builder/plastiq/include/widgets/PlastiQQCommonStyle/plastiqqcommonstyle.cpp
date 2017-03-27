#include "plastiqmethod.h"
#include "plastiqqcommonstyle.h"

#include "widgets/PlastiQQStyle/plastiqqstyle.h"
#include <QCommonStyle> 

QHash<QByteArray, PlastiQMethod> PlastiQQCommonStyle::plastiqConstructors = {
    { "QCommonStyle()", { "QCommonStyle", "", "QCommonStyle*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommonStyle::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommonStyle::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCommonStyle::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCommonStyle::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCommonStyle::plastiqInherits = { &PlastiQQStyle::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCommonStyle::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCommonStyle::plastiq_static_metaObject = {
    { &PlastiQQStyle::plastiq_static_metaObject, &plastiqInherits, "QCommonStyle", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCommonStyle::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCommonStyle::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCommonStyle *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCommonStyle(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCommonStyle *p = new PlastiQQCommonStyle();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCommonStyle *p = new PlastiQQCommonStyle();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQStyle::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCommonStyle *o = sc ? Q_NULLPTR : reinterpret_cast<QCommonStyle*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQStyle::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCommonStyle *o = reinterpret_cast<QCommonStyle*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCommonStyle *o = reinterpret_cast<QCommonStyle*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCommonStyle *o = reinterpret_cast<QCommonStyle*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCommonStyle *o = reinterpret_cast<QCommonStyle*>(object->plastiq_data());

        if(className == "QStyle") {
            stack[0].s_voidp = static_cast<QStyle*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCommonStyle::~PlastiQQCommonStyle() {
    QCommonStyle* o = reinterpret_cast<QCommonStyle*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
