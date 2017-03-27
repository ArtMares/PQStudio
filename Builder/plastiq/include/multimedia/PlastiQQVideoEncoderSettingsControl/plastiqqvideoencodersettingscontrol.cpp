#include "plastiqmethod.h"
#include "plastiqqvideoencodersettingscontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QVideoEncoderSettingsControl> 
#include <QStringList>
#include <QString>
#include <QVideoEncoderSettings>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoEncoderSettingsControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoEncoderSettingsControl::plastiqMethods = {
    { "setVideoSettings(QVideoEncoderSettings&)", { "setVideoSettings", "QVideoEncoderSettings&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedVideoCodecs()", { "supportedVideoCodecs", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "videoCodecDescription(QString)", { "videoCodecDescription", "QString&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "videoSettings()", { "videoSettings", "", "QVideoEncoderSettings", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoEncoderSettingsControl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoEncoderSettingsControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoEncoderSettingsControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVideoEncoderSettingsControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVideoEncoderSettingsControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVideoEncoderSettingsControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QVideoEncoderSettingsControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoEncoderSettingsControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoEncoderSettingsControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoEncoderSettingsControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoEncoderSettingsControl *p = new PlastiQQVideoEncoderSettingsControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoEncoderSettingsControl *p = new PlastiQQVideoEncoderSettingsControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoEncoderSettingsControl *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoEncoderSettingsControl*>(object->plastiq_data());

        switch(id) {
        case 0: o->setVideoSettings((*reinterpret_cast< QVideoEncoderSettings(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedVideoCodecs());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QString _r = o->videoCodecDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { /* COPY OBJECT */
            QVideoEncoderSettings *_r = new QVideoEncoderSettings(o->videoSettings());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVideoEncoderSettings";
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

        QVideoEncoderSettingsControl *o = reinterpret_cast<QVideoEncoderSettingsControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVideoEncoderSettingsControl *o = reinterpret_cast<QVideoEncoderSettingsControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVideoEncoderSettingsControl *o = reinterpret_cast<QVideoEncoderSettingsControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVideoEncoderSettingsControl *o = reinterpret_cast<QVideoEncoderSettingsControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVideoEncoderSettingsControl::~PlastiQQVideoEncoderSettingsControl() {
    QVideoEncoderSettingsControl* o = reinterpret_cast<QVideoEncoderSettingsControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
