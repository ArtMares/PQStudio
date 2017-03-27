#include "plastiqmethod.h"
#include "plastiqqaudioinput.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAudioInput> 
#include <QAudioFormat>
#include <QIODevice>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioInput::plastiqConstructors = {
    { "QAudioInput()", { "QAudioInput", "", "QAudioInput*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioInput(QAudioFormat&)", { "QAudioInput", "QAudioFormat&", "QAudioInput*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioInput(QAudioFormat&,QObject*)", { "QAudioInput", "QAudioFormat&,QObject*", "QAudioInput*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioInput(QAudioDeviceInfo&)", { "QAudioInput", "QAudioDeviceInfo&", "QAudioInput*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioInput(QAudioDeviceInfo&,QAudioFormat&)", { "QAudioInput", "QAudioDeviceInfo&,QAudioFormat&", "QAudioInput*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioInput(QAudioDeviceInfo&,QAudioFormat&,QObject*)", { "QAudioInput", "QAudioDeviceInfo&,QAudioFormat&,QObject*", "QAudioInput*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioInput::plastiqMethods = {
    { "bufferSize()", { "bufferSize", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesReady()", { "bytesReady", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elapsedUSecs()", { "elapsedUSecs", "", "qint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "QAudio::Error", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QAudioFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notifyInterval()", { "notifyInterval", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "periodSize()", { "periodSize", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processedUSecs()", { "processedUSecs", "", "qint64", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resume()", { "resume", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBufferSize(int)", { "setBufferSize", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNotifyInterval(int)", { "setNotifyInterval", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVolume(double)", { "setVolume", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QIODevice*)", { "start", "QIODevice*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "QIODevice*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QAudio::State", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "suspend()", { "suspend", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "qreal", 18, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioInput::plastiqSignals = {
    { "notify()", { "notify", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(QAudio::State)", { "stateChanged", "QAudio::State", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioInput::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioInput::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioInput::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioInput::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioInput::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAudioInput", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioInput::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioInput::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioInput *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioInput(); break;
        case 1: o = new QAudioInput((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp))); break;
        case 2: o = new QAudioInput((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 3: o = new QAudioInput((*reinterpret_cast< QAudioDeviceInfo(*) >(stack[1].s_voidp))); break;
        case 4: o = new QAudioInput((*reinterpret_cast< QAudioDeviceInfo(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp))); break;
        case 5: o = new QAudioInput((*reinterpret_cast< QAudioDeviceInfo(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioInput *p = new PlastiQQAudioInput();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioInput *p = new PlastiQQAudioInput();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioInput *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioInput*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->bufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->bytesReady();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { long _r = o->elapsedUSecs();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 3: /* o->error() | ret: `QAudio::Error` */ break;
        case 4: { /* COPY OBJECT */
            QAudioFormat *_r = new QAudioFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->notifyInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->periodSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { long _r = o->processedUSecs();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 8: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 9: o->resume();
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setNotifyInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVolume(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->start(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: { QIODevice* _r = o->start();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 15: /* o->state() | ret: `QAudio::State` */ break;
        case 16: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->suspend();
                stack[0].type = PlastiQ::Void; break;
        case 18: { double _r = o->volume();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAudioInput *o = reinterpret_cast<QAudioInput*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QAudioInput::*)()>(&QAudioInput::notify),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "notify", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAudioInput::stateChanged,
            [=](QAudio::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QAudio::State";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAudioInput *o = reinterpret_cast<QAudioInput*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioInput *o = reinterpret_cast<QAudioInput*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioInput *o = reinterpret_cast<QAudioInput*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioInput::~PlastiQQAudioInput() {
    QAudioInput* o = reinterpret_cast<QAudioInput*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
