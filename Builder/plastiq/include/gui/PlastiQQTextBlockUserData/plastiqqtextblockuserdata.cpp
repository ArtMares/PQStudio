#include "plastiqmethod.h"
#include "plastiqqtextblockuserdata.h"

#include <QTextBlockUserData> 

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockUserData::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockUserData::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockUserData::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextBlockUserData::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextBlockUserData::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextBlockUserData::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextBlockUserData::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextBlockUserData::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextBlockUserData", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextBlockUserData::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextBlockUserData::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextBlockUserData *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextBlockUserData *p = new PlastiQQTextBlockUserData();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextBlockUserData *p = new PlastiQQTextBlockUserData();
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
        QTextBlockUserData *o = sc ? Q_NULLPTR : reinterpret_cast<QTextBlockUserData*>(object->plastiq_data());

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
        QTextBlockUserData *o = reinterpret_cast<QTextBlockUserData*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextBlockUserData::~PlastiQQTextBlockUserData() {
    QTextBlockUserData* o = reinterpret_cast<QTextBlockUserData*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
