#include "plastiqmethod.h"
#include "plastiqqaudiodeviceinfo.h"

#include <QAudioDeviceInfo> 
#include <QString>
#include <QAudioFormat>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDeviceInfo::plastiqConstructors = {
    { "QAudioDeviceInfo()", { "QAudioDeviceInfo", "", "QAudioDeviceInfo*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioDeviceInfo(QAudioDeviceInfo&)", { "QAudioDeviceInfo", "QAudioDeviceInfo&", "QAudioDeviceInfo*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDeviceInfo::plastiqMethods = {
    { "deviceName()", { "deviceName", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFormatSupported(QAudioFormat&)", { "isFormatSupported", "QAudioFormat&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nearestFormat(QAudioFormat&)", { "nearestFormat", "QAudioFormat&", "QAudioFormat", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preferredFormat()", { "preferredFormat", "", "QAudioFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedCodecs()", { "supportedCodecs", "", "QStringList", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultInputDevice()", { "defaultInputDevice", "", "QAudioDeviceInfo", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "defaultOutputDevice()", { "defaultOutputDevice", "", "QAudioDeviceInfo", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDeviceInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioDeviceInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioDeviceInfo::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioDeviceInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAudioDeviceInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAudioDeviceInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAudioDeviceInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioDeviceInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioDeviceInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioDeviceInfo *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioDeviceInfo(); break;
        case 1: o = new QAudioDeviceInfo((*reinterpret_cast< QAudioDeviceInfo(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioDeviceInfo *p = new PlastiQQAudioDeviceInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioDeviceInfo *p = new PlastiQQAudioDeviceInfo();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioDeviceInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioDeviceInfo*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->deviceName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { bool _r = o->isFormatSupported((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QAudioFormat *_r = new QAudioFormat(o->nearestFormat((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QAudioFormat *_r = new QAudioFormat(o->preferredFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedCodecs());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QAudioDeviceInfo *_r = sc ? new QAudioDeviceInfo(QAudioDeviceInfo::defaultInputDevice()) : new QAudioDeviceInfo(o->defaultInputDevice());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioDeviceInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QAudioDeviceInfo *_r = sc ? new QAudioDeviceInfo(QAudioDeviceInfo::defaultOutputDevice()) : new QAudioDeviceInfo(o->defaultOutputDevice());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioDeviceInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QAudioDeviceInfo *o = reinterpret_cast<QAudioDeviceInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAudioDeviceInfo::~PlastiQQAudioDeviceInfo() {
    QAudioDeviceInfo* o = reinterpret_cast<QAudioDeviceInfo*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
