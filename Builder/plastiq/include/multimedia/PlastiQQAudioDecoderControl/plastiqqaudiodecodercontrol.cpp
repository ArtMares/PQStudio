#include "plastiqmethod.h"
#include "plastiqqaudiodecodercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QAudioDecoderControl> 
#include <QAudioFormat>
#include <QAudioBuffer>
#include <QIODevice>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDecoderControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDecoderControl::plastiqMethods = {
    { "audioFormat()", { "audioFormat", "", "QAudioFormat", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bufferAvailable()", { "bufferAvailable", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "qint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "qint64", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read()", { "read", "", "QAudioBuffer", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioFormat(QAudioFormat&)", { "setAudioFormat", "QAudioFormat&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSourceDevice(QIODevice*)", { "setSourceDevice", "QIODevice*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSourceFilename(QString)", { "setSourceFilename", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sourceDevice()", { "sourceDevice", "", "QIODevice*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sourceFilename()", { "sourceFilename", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QAudioDecoder::State", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioDecoderControl::plastiqSignals = {
    { "bufferAvailableChanged(bool)", { "bufferAvailableChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "bufferReady()", { "bufferReady", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "durationChanged(long)", { "durationChanged", "qint64", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(int,QString)", { "error", "int,QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished()", { "finished", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "formatChanged(QAudioFormat&)", { "formatChanged", "QAudioFormat&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "positionChanged(long)", { "positionChanged", "qint64", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sourceChanged()", { "sourceChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QAudioDecoder::State", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioDecoderControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioDecoderControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioDecoderControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioDecoderControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioDecoderControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QAudioDecoderControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioDecoderControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioDecoderControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioDecoderControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioDecoderControl *p = new PlastiQQAudioDecoderControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioDecoderControl *p = new PlastiQQAudioDecoderControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioDecoderControl *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioDecoderControl*>(object->plastiq_data());

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
        case 3: { long _r = o->position();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 4: { /* COPY OBJECT */
            QAudioBuffer *_r = new QAudioBuffer(o->read());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioBuffer";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->setAudioFormat((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setSourceDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setSourceFilename(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: { QIODevice* _r = o->sourceDevice();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 9: { QString _r = o->sourceFilename();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 11: { qint64 _r = o->state(); // HACK for QAudioDecoder::State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 12: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAudioDecoderControl *o = reinterpret_cast<QAudioDecoderControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAudioDecoderControl::bufferAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "bufferAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAudioDecoderControl::bufferReady,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "bufferReady", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAudioDecoderControl::durationChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "durationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAudioDecoderControl::error,
            [=](int arg0, const QString& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAudioDecoderControl::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QAudioDecoderControl::formatChanged,
            [=](const QAudioFormat& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QAudioFormat(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QAudioFormat";
                PlastiQ_activate(sender, "formatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QAudioDecoderControl::positionChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "positionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QAudioDecoderControl::sourceChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "sourceChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QAudioDecoderControl::stateChanged,
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
        QAudioDecoderControl *o = reinterpret_cast<QAudioDecoderControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioDecoderControl *o = reinterpret_cast<QAudioDecoderControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioDecoderControl *o = reinterpret_cast<QAudioDecoderControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioDecoderControl::~PlastiQQAudioDecoderControl() {
    QAudioDecoderControl* o = reinterpret_cast<QAudioDecoderControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
