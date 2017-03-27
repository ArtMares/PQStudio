#include "plastiqmethod.h"
#include "plastiqqaudioencodersettingscontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QAudioEncoderSettingsControl> 
#include <QAudioEncoderSettings>
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioEncoderSettingsControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioEncoderSettingsControl::plastiqMethods = {
    { "audioSettings()", { "audioSettings", "", "QAudioEncoderSettings", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "codecDescription(QString)", { "codecDescription", "QString&", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioSettings(QAudioEncoderSettings&)", { "setAudioSettings", "QAudioEncoderSettings&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedAudioCodecs()", { "supportedAudioCodecs", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioEncoderSettingsControl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioEncoderSettingsControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioEncoderSettingsControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioEncoderSettingsControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioEncoderSettingsControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioEncoderSettingsControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QAudioEncoderSettingsControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioEncoderSettingsControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioEncoderSettingsControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioEncoderSettingsControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioEncoderSettingsControl *p = new PlastiQQAudioEncoderSettingsControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioEncoderSettingsControl *p = new PlastiQQAudioEncoderSettingsControl();
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
        QAudioEncoderSettingsControl *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioEncoderSettingsControl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QAudioEncoderSettings *_r = new QAudioEncoderSettings(o->audioSettings());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioEncoderSettings";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->codecDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: o->setAudioSettings((*reinterpret_cast< QAudioEncoderSettings(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedAudioCodecs());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
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

        QAudioEncoderSettingsControl *o = reinterpret_cast<QAudioEncoderSettingsControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAudioEncoderSettingsControl *o = reinterpret_cast<QAudioEncoderSettingsControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioEncoderSettingsControl *o = reinterpret_cast<QAudioEncoderSettingsControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioEncoderSettingsControl *o = reinterpret_cast<QAudioEncoderSettingsControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioEncoderSettingsControl::~PlastiQQAudioEncoderSettingsControl() {
    QAudioEncoderSettingsControl* o = reinterpret_cast<QAudioEncoderSettingsControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
