#include "plastiqmethod.h"
#include "plastiqqcameraviewfindersettingscontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraViewfinderSettingsControl> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraViewfinderSettingsControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraViewfinderSettingsControl::plastiqMethods = {
    { "isViewfinderParameterSupported(enum)", { "isViewfinderParameterSupported", "ViewfinderParameter", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewfinderParameter(enum,QVariant)", { "setViewfinderParameter", "ViewfinderParameter,QVariant&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewfinderParameter(enum)", { "viewfinderParameter", "ViewfinderParameter", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraViewfinderSettingsControl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraViewfinderSettingsControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraViewfinderSettingsControl::plastiqConstants = {

    /* QCameraViewfinderSettingsControl::ViewfinderParameter */
   { "Resolution", QCameraViewfinderSettingsControl::Resolution },
   { "PixelAspectRatio", QCameraViewfinderSettingsControl::PixelAspectRatio },
   { "MinimumFrameRate", QCameraViewfinderSettingsControl::MinimumFrameRate },
   { "MaximumFrameRate", QCameraViewfinderSettingsControl::MaximumFrameRate },
   { "PixelFormat", QCameraViewfinderSettingsControl::PixelFormat },
   { "UserParameter", QCameraViewfinderSettingsControl::UserParameter },

};

QVector<PlastiQMetaObject*> PlastiQQCameraViewfinderSettingsControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraViewfinderSettingsControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraViewfinderSettingsControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraViewfinderSettingsControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraViewfinderSettingsControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraViewfinderSettingsControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraViewfinderSettingsControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraViewfinderSettingsControl *p = new PlastiQQCameraViewfinderSettingsControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraViewfinderSettingsControl *p = new PlastiQQCameraViewfinderSettingsControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraViewfinderSettingsControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraViewfinderSettingsControl*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isViewfinderParameterSupported(QCameraViewfinderSettingsControl::ViewfinderParameter(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->setViewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->viewfinderParameter(QCameraViewfinderSettingsControl::ViewfinderParameter(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraViewfinderSettingsControl *o = reinterpret_cast<QCameraViewfinderSettingsControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraViewfinderSettingsControl *o = reinterpret_cast<QCameraViewfinderSettingsControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraViewfinderSettingsControl *o = reinterpret_cast<QCameraViewfinderSettingsControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraViewfinderSettingsControl *o = reinterpret_cast<QCameraViewfinderSettingsControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraViewfinderSettingsControl::~PlastiQQCameraViewfinderSettingsControl() {
    QCameraViewfinderSettingsControl* o = reinterpret_cast<QCameraViewfinderSettingsControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
