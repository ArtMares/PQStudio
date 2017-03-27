#include "plastiqmethod.h"
#include "plastiqqidentityproxymodel.h"

#include "core/PlastiQQAbstractProxyModel/plastiqqabstractproxymodel.h"
#include <QIdentityProxyModel> 

QHash<QByteArray, PlastiQMethod> PlastiQQIdentityProxyModel::plastiqConstructors = {
    { "QIdentityProxyModel()", { "QIdentityProxyModel", "", "QIdentityProxyModel*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIdentityProxyModel(QObject*)", { "QIdentityProxyModel", "QObject*", "QIdentityProxyModel*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIdentityProxyModel::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQIdentityProxyModel::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQIdentityProxyModel::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQIdentityProxyModel::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQIdentityProxyModel::plastiqInherits = { &PlastiQQAbstractProxyModel::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQIdentityProxyModel::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQIdentityProxyModel::plastiq_static_metaObject = {
    { &PlastiQQAbstractProxyModel::plastiq_static_metaObject, &plastiqInherits, "QIdentityProxyModel", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQIdentityProxyModel::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQIdentityProxyModel::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QIdentityProxyModel *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QIdentityProxyModel(); break;
        case 1: o = new QIdentityProxyModel(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQIdentityProxyModel *p = new PlastiQQIdentityProxyModel();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQIdentityProxyModel *p = new PlastiQQIdentityProxyModel();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractProxyModel::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QIdentityProxyModel *o = sc ? Q_NULLPTR : reinterpret_cast<QIdentityProxyModel*>(object->plastiq_data());

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
        QIdentityProxyModel *o = reinterpret_cast<QIdentityProxyModel*>(object->plastiq_data());

        if(className == "QAbstractProxyModel") {
            stack[0].s_voidp = static_cast<QAbstractProxyModel*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQIdentityProxyModel::~PlastiQQIdentityProxyModel() {
    QIdentityProxyModel* o = reinterpret_cast<QIdentityProxyModel*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
