#include "plastiqmethod.h"
#include "plastiqqabstractlistmodel.h"

#include "core/PlastiQQAbstractItemModel/plastiqqabstractitemmodel.h"
#include <QAbstractListModel> 

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractListModel::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractListModel::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractListModel::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractListModel::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractListModel::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractListModel::plastiqInherits = { &PlastiQQAbstractItemModel::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractListModel::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractListModel::plastiq_static_metaObject = {
    { &PlastiQQAbstractItemModel::plastiq_static_metaObject, &plastiqInherits, "QAbstractListModel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractListModel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractListModel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractListModel *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractListModel *p = new PlastiQQAbstractListModel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractListModel *p = new PlastiQQAbstractListModel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractListModel *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractListModel*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractItemModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractListModel *o = reinterpret_cast<QAbstractListModel*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractListModel *o = reinterpret_cast<QAbstractListModel*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractListModel *o = reinterpret_cast<QAbstractListModel*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractListModel *o = reinterpret_cast<QAbstractListModel*>(object->plastiq_data());

        if(className == "QAbstractItemModel") {
            stack[0].s_voidp = static_cast<QAbstractItemModel*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractListModel::~PlastiQQAbstractListModel() {
    QAbstractListModel* o = reinterpret_cast<QAbstractListModel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
