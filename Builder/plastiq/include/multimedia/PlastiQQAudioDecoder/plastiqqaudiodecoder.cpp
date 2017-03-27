#include "plastiqmethod.h"
#include "plastiqqaudiodecoder.h"

#include "multimedia/PlastiQQMediaObject/plastiqqmediaobject.h"
#include <QAudioDecoder> 
#include <QAudioFormat>
#include <QString>
#include <QAudioBuffer>
#include <QIODevice>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDecoder::plastiqConstructors = {
    { "QAudioDecoder()", { "QAudioDecoder", "", "QAudioDecoder*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioDecoder(QObject*)", { "QAudioDecoder", "QObject*", "QAudioDecoder*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDecoder::plastiqMethods = {
    { "audioFormat()", { "audioFormat", "", "QAudioFormat", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bufferAvailable()", { "bufferAvailable", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "qint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "qint64", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read()", { "read", "", "QAudioBuffer", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioFormat(QAudioFormat&)", { "setAudioFormat", "QAudioFormat&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSourceDevice(QIODevice*)", { "setSourceDevice", "QIODevice*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSourceFilename(QString)", { "setSourceFilename", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sourceDevice()", { "sourceDevice", "", "QIODevice*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sourceFilename()", { "sourceFilename", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSupport(QString)", { "hasSupport", "QString&", "QMultimedia::SupportEstimate", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hasSupport(QString,QStringList&)", { "hasSupport", "QString&,QStringList&", "QMultimedia::SupportEstimate", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "start()", { "start", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDecoder::plastiqSignals = {
    { "bufferAvailableChanged(bool)", { "bufferAvailableChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "bufferReady()", { "bufferReady", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "durationChanged(long)", { "durationChanged", "qint64", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QAudioDecoder::Error", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished()", { "finished", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "formatChanged(QAudioFormat&)", { "formatChanged", "QAudioFormat&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "positionChanged(long)", { "positionChanged", "qint64", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sourceChanged()", { "sourceChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QAudioDecoder::State", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioDecoder::plastiqProperties = {
    { "bufferAvailable", { "bufferAvailable", "bool", "bufferAvailableChanged", "bufferAvailable" } },
    { "error", { "error", "QString", "", "errorString" } },
    { "sourceFilename", { "sourceFilename", "QString", "setSourceFilename", "sourceFilename" } },
    { "state", { "state", "long", "stateChanged", "state" } },

};

QHash<QByteArray, long> PlastiQQAudioDecoder::plastiqConstants = {

    /* QAudioDecoder::Error */
   { "NoError", QAudioDecoder::NoError },
   { "ResourceError", QAudioDecoder::ResourceError },
   { "FormatError", QAudioDecoder::FormatError },
   { "AccessDeniedError", QAudioDecoder::AccessDeniedError },
   { "ServiceMissingError", QAudioDecoder::ServiceMissingError },

    /* QAudioDecoder::State */
   { "StoppedState", QAudioDecoder::StoppedState },
   { "DecodingState", QAudioDecoder::DecodingState },

};

QVector<PlastiQMetaObject*> PlastiQQAudioDecoder::plastiqInherits = { &PlastiQQMediaObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioDecoder::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioDecoder::plastiq_static_metaObject = {
    { &PlastiQQMediaObject::plastiq_static_metaObject, &plastiqInherits, "QAudioDecoder", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioDecoder::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioDecoder::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioDecoder *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioDecoder(); break;
        case 1: o = new QAudioDecoder(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioDecoder *p = new PlastiQQAudioDecoder();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioDecoder *p = new PlastiQQAudioDecoder();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioDecoder *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioDecoder*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QAudioFormat *_r = new QAudioFormat(o->audioFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->bufferAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { long _r = o->duration();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 3: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { long _r = o->position();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: { /* COPY OBJECT */
            QAudioBuffer *_r = new QAudioBuffer(o->read());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioBuffer";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->setAudioFormat((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setSourceDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setSourceFilename(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: { QIODevice* _r = o->sourceDevice();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 11: { QString _r = o->sourceFilename();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: /* o->hasSupport(stack[1].s_string) | ret: `QMultimedia::SupportEstimate` */ break;
        case 14: /* o->hasSupport(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))) | ret: `QMultimedia::SupportEstimate` */ break;
        case 15: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAudioDecoder *o = reinterpret_cast<QAudioDecoder*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAudioDecoder::bufferAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "bufferAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAudioDecoder::bufferReady,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "bufferReady", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAudioDecoder::durationChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "durationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, static_cast<void (QAudioDecoder::*)(QAudioDecoder::Error)>(&QAudioDecoder::error),
            [=](QAudioDecoder::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAudioDecoder::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAudioDecoder::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QAudioDecoder::formatChanged,
            [=](const QAudioFormat& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QAudioFormat(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QAudioFormat";
                PlastiQ_activate(sender, "formatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QAudioDecoder::positionChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "positionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QAudioDecoder::sourceChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "sourceChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QAudioDecoder::stateChanged,
            [=](QAudioDecoder::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAudioDecoder::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAudioDecoder *o = reinterpret_cast<QAudioDecoder*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioDecoder *o = reinterpret_cast<QAudioDecoder*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioDecoder *o = reinterpret_cast<QAudioDecoder*>(object->plastiq_data());

        if(className == "QMediaObject") {
            stack[0].s_voidp = static_cast<QMediaObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioDecoder::~PlastiQQAudioDecoder() {
    QAudioDecoder* o = reinterpret_cast<QAudioDecoder*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
