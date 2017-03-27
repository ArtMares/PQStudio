#include "plastiqmethod.h"
#include "plastiqqmediaservicesupportedformatsinterface.h"

#include <QMediaServiceSupportedFormatsInterface> 
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceSupportedFormatsInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceSupportedFormatsInterface::plastiqMethods = {
    { "hasSupport(QString,QStringList&)", { "hasSupport", "QString&,QStringList&", "QMultimedia::SupportEstimate", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedMimeTypes()", { "supportedMimeTypes", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedMimeTypes())", { "supportedMimeTypes", ") ", "QStringList", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceSupportedFormatsInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaServiceSupportedFormatsInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaServiceSupportedFormatsInterface::plastiqConstants = {

};

const PlastiQ::ObjectType PlastiQQMediaServiceSupportedFormatsInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaServiceSupportedFormatsInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, "QMediaServiceSupportedFormatsInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaServiceSupportedFormatsInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaServiceSupportedFormatsInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaServiceSupportedFormatsInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        PlastiQQMediaServiceSupportedFormatsInterface *p = new PlastiQQMediaServiceSupportedFormatsInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaServiceSupportedFormatsInterface *p = new PlastiQQMediaServiceSupportedFormatsInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        QMediaServiceSupportedFormatsInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaServiceSupportedFormatsInterface*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->hasSupport(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))) | ret: `QMultimedia::SupportEstimate` */ break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedMimeTypes());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: /* o->supportedMimeTypes(UNSUPPORTED_TYPE_)) | ret: `QStringList` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
}

PlastiQQMediaServiceSupportedFormatsInterface::~PlastiQQMediaServiceSupportedFormatsInterface() {
    QMediaServiceSupportedFormatsInterface* o = reinterpret_cast<QMediaServiceSupportedFormatsInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
