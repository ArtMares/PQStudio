#include "plastiqmethod.h"
#include "plastiqqmediabindableinterface.h"

#include <QMediaBindableInterface> 
#include <QMediaObject>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaBindableInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaBindableInterface::plastiqMethods = {
    { "mediaObject()", { "mediaObject", "", "QMediaObject*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMediaObject(QMediaObject*)", { "setMediaObject", "QMediaObject*", "bool", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaBindableInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaBindableInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaBindableInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaBindableInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMediaBindableInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaBindableInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMediaBindableInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaBindableInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaBindableInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaBindableInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaBindableInterface *p = new PlastiQQMediaBindableInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaBindableInterface *p = new PlastiQQMediaBindableInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaBindableInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaBindableInterface*>(object->plastiq_data());

        switch(id) {
        case 0: { QMediaObject* _r = o->mediaObject();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMediaObject"; } break;
        case 1: { bool _r; stack[0].type = PlastiQ::Error; } break;

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
        QMediaBindableInterface *o = reinterpret_cast<QMediaBindableInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMediaBindableInterface::~PlastiQQMediaBindableInterface() {
    QMediaBindableInterface* o = reinterpret_cast<QMediaBindableInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
