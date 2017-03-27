#include "plastiqmethod.h"
#include "plastiqqmediarecorder.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "multimedia/PlastiQQMediaBindableInterface/plastiqqmediabindableinterface.h"
#include <QMediaRecorder> 
#include <QUrl>
#include <QString>
#include <QAudioEncoderSettings>
#include <QStringList>
#include <QVariant>
#include <QVideoEncoderSettings>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaRecorder::plastiqConstructors = {
    { "QMediaRecorder(QMediaObject*)", { "QMediaRecorder", "QMediaObject*", "QMediaRecorder*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaRecorder(QMediaObject*,QObject*)", { "QMediaRecorder", "QMediaObject*,QObject*", "QMediaRecorder*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaRecorder::plastiqMethods = {
    { "actualLocation()", { "actualLocation", "", "QUrl", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "audioCodecDescription(QString)", { "audioCodecDescription", "QString&", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "audioSettings()", { "audioSettings", "", "QAudioEncoderSettings", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availability()", { "availability", "", "QMultimedia::AvailabilityStatus", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableMetaData()", { "availableMetaData", "", "QStringList", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "containerDescription(QString)", { "containerDescription", "QString&", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "containerFormat()", { "containerFormat", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "qint64", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAvailable()", { "isAvailable", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMetaDataAvailable()", { "isMetaDataAvailable", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMetaDataWritable()", { "isMetaDataWritable", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMuted()", { "isMuted", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData(QString)", { "metaData", "QString&", "QVariant", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "outputLocation()", { "outputLocation", "", "QUrl", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioSettings(QAudioEncoderSettings&)", { "setAudioSettings", "QAudioEncoderSettings&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContainerFormat(QString)", { "setContainerFormat", "QString&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingSettings(QAudioEncoderSettings&)", { "setEncodingSettings", "QAudioEncoderSettings&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingSettings(QAudioEncoderSettings&,QVideoEncoderSettings&)", { "setEncodingSettings", "QAudioEncoderSettings&,QVideoEncoderSettings&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingSettings(QAudioEncoderSettings&,QVideoEncoderSettings&,QString)", { "setEncodingSettings", "QAudioEncoderSettings&,QVideoEncoderSettings&,QString&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMetaData(QString,QVariant)", { "setMetaData", "QString&,QVariant&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOutputLocation(QUrl&)", { "setOutputLocation", "QUrl&", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVideoSettings(QVideoEncoderSettings&)", { "setVideoSettings", "QVideoEncoderSettings&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "Status", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedAudioCodecs()", { "supportedAudioCodecs", "", "QStringList", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedContainers()", { "supportedContainers", "", "QStringList", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedVideoCodecs()", { "supportedVideoCodecs", "", "QStringList", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "videoCodecDescription(QString)", { "videoCodecDescription", "QString&", "QString", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "videoSettings()", { "videoSettings", "", "QVideoEncoderSettings", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "qreal", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pause()", { "pause", "", "void", 32, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "record()", { "record", "", "void", 33, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMuted(bool)", { "setMuted", "bool", "void", 34, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVolume(double)", { "setVolume", "qreal", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaRecorder::plastiqSignals = {
    { "actualLocationChanged(QUrl&)", { "actualLocationChanged", "QUrl&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "availabilityChanged(bool)", { "availabilityChanged", "bool", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "availabilityChanged(QMultimedia::AvailabilityStatus)", { "availabilityChanged", "QMultimedia::AvailabilityStatus", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "durationChanged(long)", { "durationChanged", "qint64", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QMediaRecorder::Error", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataAvailableChanged(bool)", { "metaDataAvailableChanged", "bool", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged()", { "metaDataChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged(QString,QVariant)", { "metaDataChanged", "QString&,QVariant&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataWritableChanged(bool)", { "metaDataWritableChanged", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mutedChanged(bool)", { "mutedChanged", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QMediaRecorder::State", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "statusChanged(enum)", { "statusChanged", "QMediaRecorder::Status", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "volumeChanged(double)", { "volumeChanged", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaRecorder::plastiqProperties = {
    { "actualLocation", { "actualLocation", "QUrl", "actualLocationChanged", "actualLocation" } },
    { "duration", { "duration", "qint64", "durationChanged", "duration" } },
    { "metaDataAvailable", { "metaDataAvailable", "bool", "metaDataAvailableChanged", "isMetaDataAvailable" } },
    { "metaDataWritable", { "metaDataWritable", "bool", "metaDataWritableChanged", "isMetaDataWritable" } },
    { "muted", { "muted", "bool", "setMuted", "isMuted" } },
    { "outputLocation", { "outputLocation", "QUrl", "", "setOutputLocation" } },
    { "state", { "state", "long", "stateChanged", "state" } },
    { "status", { "status", "long", "statusChanged", "status" } },
    { "volume", { "volume", "qreal", "setVolume", "volume" } },

};

QHash<QByteArray, long> PlastiQQMediaRecorder::plastiqConstants = {

    /* QMediaRecorder::Error */
   { "NoError", QMediaRecorder::NoError },
   { "ResourceError", QMediaRecorder::ResourceError },
   { "FormatError", QMediaRecorder::FormatError },
   { "OutOfSpaceError", QMediaRecorder::OutOfSpaceError },

    /* QMediaRecorder::State */
   { "StoppedState", QMediaRecorder::StoppedState },
   { "RecordingState", QMediaRecorder::RecordingState },
   { "PausedState", QMediaRecorder::PausedState },

    /* QMediaRecorder::Status */
   { "UnavailableStatus", QMediaRecorder::UnavailableStatus },
   { "UnloadedStatus", QMediaRecorder::UnloadedStatus },
   { "LoadingStatus", QMediaRecorder::LoadingStatus },
   { "LoadedStatus", QMediaRecorder::LoadedStatus },
   { "StartingStatus", QMediaRecorder::StartingStatus },
   { "RecordingStatus", QMediaRecorder::RecordingStatus },
   { "PausedStatus", QMediaRecorder::PausedStatus },
   { "FinalizingStatus", QMediaRecorder::FinalizingStatus },

};

QVector<PlastiQMetaObject*> PlastiQQMediaRecorder::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQMediaBindableInterface::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaRecorder::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaRecorder::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QMediaRecorder", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaRecorder::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaRecorder::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaRecorder *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMediaRecorder(reinterpret_cast<QMediaObject*>(stack[1].s_voidp)); break;
        case 1: o = new QMediaRecorder(reinterpret_cast<QMediaObject*>(stack[1].s_voidp),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaRecorder *p = new PlastiQQMediaRecorder();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaRecorder *p = new PlastiQQMediaRecorder();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 37) {
            id -= 37;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaRecorder *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaRecorder*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->actualLocation());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->audioCodecDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { /* COPY OBJECT */
            QAudioEncoderSettings *_r = new QAudioEncoderSettings(o->audioSettings());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioEncoderSettings";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: /* o->availability() | ret: `QMultimedia::AvailabilityStatus` */ break;
        case 4: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->availableMetaData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { QString _r = o->containerDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->containerFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { long _r = o->duration();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 8: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { bool _r = o->isAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isMetaDataAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isMetaDataWritable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->isMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->metaData(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->outputLocation());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: o->setAudioSettings((*reinterpret_cast< QAudioEncoderSettings(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setContainerFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setEncodingSettings((*reinterpret_cast< QAudioEncoderSettings(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setEncodingSettings((*reinterpret_cast< QAudioEncoderSettings(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVideoEncoderSettings(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setEncodingSettings((*reinterpret_cast< QAudioEncoderSettings(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVideoEncoderSettings(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setMetaData(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 22: { bool _r = o->setOutputLocation((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: o->setVideoSettings((*reinterpret_cast< QVideoEncoderSettings(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 25: { qint64 _r = o->status(); // HACK for Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 26: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedAudioCodecs());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedContainers());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedVideoCodecs());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { QString _r = o->videoCodecDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 30: { /* COPY OBJECT */
            QVideoEncoderSettings *_r = new QVideoEncoderSettings(o->videoSettings());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVideoEncoderSettings";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { double _r = o->volume();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 32: o->pause();
                stack[0].type = PlastiQ::Void; break;
        case 33: o->record();
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setVolume(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 13) {
            id -= 13;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaRecorder *o = reinterpret_cast<QMediaRecorder*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaRecorder::actualLocationChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "actualLocationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QMediaRecorder::*)(bool)>(&QMediaRecorder::availabilityChanged),
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "availabilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QMediaRecorder::*)(QMultimedia::AvailabilityStatus)>(&QMediaRecorder::availabilityChanged),
            [=](QMultimedia::AvailabilityStatus arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QMultimedia::AvailabilityStatus";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "availabilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QMediaRecorder::durationChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "durationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, static_cast<void (QMediaRecorder::*)(QMediaRecorder::Error)>(&QMediaRecorder::error),
            [=](QMediaRecorder::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaRecorder::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QMediaRecorder::metaDataAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "metaDataAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, static_cast<void (QMediaRecorder::*)()>(&QMediaRecorder::metaDataChanged),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, static_cast<void (QMediaRecorder::*)(const QString&,const QVariant&)>(&QMediaRecorder::metaDataChanged),
            [=](const QString& arg0, const QVariant& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                    cstack[1].s_voidp = new QVariant(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QVariant";
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QMediaRecorder::metaDataWritableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "metaDataWritableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QMediaRecorder::mutedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "mutedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QMediaRecorder::stateChanged,
            [=](QMediaRecorder::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaRecorder::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QMediaRecorder::statusChanged,
            [=](QMediaRecorder::Status arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaRecorder::Status";
                PlastiQ_activate(sender, "statusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QMediaRecorder::volumeChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "volumeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaRecorder *o = reinterpret_cast<QMediaRecorder*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaRecorder *o = reinterpret_cast<QMediaRecorder*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaRecorder *o = reinterpret_cast<QMediaRecorder*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QMediaBindableInterface") {
            stack[0].s_voidp = static_cast<QMediaBindableInterface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaRecorder::~PlastiQQMediaRecorder() {
    QMediaRecorder* o = reinterpret_cast<QMediaRecorder*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
