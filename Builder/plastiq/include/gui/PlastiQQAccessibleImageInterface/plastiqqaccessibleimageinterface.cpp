#include "plastiqmethod.h"
#include "plastiqqaccessibleimageinterface.h"

#include <QAccessibleImageInterface> 

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleImageInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleImageInterface::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleImageInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleImageInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleImageInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleImageInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessibleImageInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleImageInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessibleImageInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleImageInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleImageInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleImageInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleImageInterface *p = new PlastiQQAccessibleImageInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleImageInterface *p = new PlastiQQAccessibleImageInterface();
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
        QAccessibleImageInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleImageInterface*>(object->plastiq_data());

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
        QAccessibleImageInterface *o = reinterpret_cast<QAccessibleImageInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessibleImageInterface::~PlastiQQAccessibleImageInterface() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
