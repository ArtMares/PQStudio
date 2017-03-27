#include "plastiqmethod.h"
#include "plastiqqaudiooutput.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAudioOutput> 
#include <QString>
#include <QAudioFormat>
#include <QIODevice>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioOutput::plastiqConstructors = {
    { "QAudioOutput()", { "QAudioOutput", "", "QAudioOutput*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioOutput(QAudioFormat&)", { "QAudioOutput", "QAudioFormat&", "QAudioOutput*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioOutput(QAudioFormat&,QObject*)", { "QAudioOutput", "QAudioFormat&,QObject*", "QAudioOutput*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioOutput(QAudioDeviceInfo&)", { "QAudioOutput", "QAudioDeviceInfo&", "QAudioOutput*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioOutput(QAudioDeviceInfo&,QAudioFormat&)", { "QAudioOutput", "QAudioDeviceInfo&,QAudioFormat&", "QAudioOutput*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioOutput(QAudioDeviceInfo&,QAudioFormat&,QObject*)", { "QAudioOutput", "QAudioDeviceInfo&,QAudioFormat&,QObject*", "QAudioOutput*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioOutput::plastiqMethods = {
    { "bufferSize()", { "bufferSize", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesFree()", { "bytesFree", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "category()", { "category", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elapsedUSecs()", { "elapsedUSecs", "", "qint64", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "QAudio::Error", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QAudioFormat", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notifyInterval()", { "notifyInterval", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "periodSize()", { "periodSize", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "processedUSecs()", { "processedUSecs", "", "qint64", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resume()", { "resume", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBufferSize(int)", { "setBufferSize", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCategory(QString)", { "setCategory", "QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNotifyInterval(int)", { "setNotifyInterval", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVolume(double)", { "setVolume", "qreal", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QIODevice*)", { "start", "QIODevice*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "QIODevice*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QAudio::State", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "suspend()", { "suspend", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "qreal", 20, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioOutput::plastiqSignals = {
    { "notify()", { "notify", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(QAudio::State)", { "stateChanged", "QAudio::State", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioOutput::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioOutput::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioOutput::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioOutput::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioOutput::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAudioOutput", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioOutput::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioOutput::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioOutput *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioOutput(); break;
        case 1: o = new QAudioOutput((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp))); break;
        case 2: o = new QAudioOutput((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 3: o = new QAudioOutput((*reinterpret_cast< QAudioDeviceInfo(*) >(stack[1].s_voidp))); break;
        case 4: o = new QAudioOutput((*reinterpret_cast< QAudioDeviceInfo(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp))); break;
        case 5: o = new QAudioOutput((*reinterpret_cast< QAudioDeviceInfo(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QAudioFormat(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioOutput *p = new PlastiQQAudioOutput();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioOutput *p = new PlastiQQAudioOutput();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioOutput *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioOutput*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->bufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->bytesFree();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QString _r = o->category();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { long _r = o->elapsedUSecs();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 4: /* o->error() | ret: `QAudio::Error` */ break;
        case 5: { /* COPY OBJECT */
            QAudioFormat *_r = new QAudioFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QAudioFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { int _r = o->notifyInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->periodSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { long _r = o->processedUSecs();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 9: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 10: o->resume();
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setCategory(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setNotifyInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setVolume(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->start(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: { QIODevice* _r = o->start();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 17: /* o->state() | ret: `QAudio::State` */ break;
        case 18: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->suspend();
                stack[0].type = PlastiQ::Void; break;
        case 20: { double _r = o->volume();
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

        QAudioOutput *o = reinterpret_cast<QAudioOutput*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QAudioOutput::*)()>(&QAudioOutput::notify),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "notify", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAudioOutput::stateChanged,
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
        QAudioOutput *o = reinterpret_cast<QAudioOutput*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioOutput *o = reinterpret_cast<QAudioOutput*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioOutput *o = reinterpret_cast<QAudioOutput*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioOutput::~PlastiQQAudioOutput() {
    QAudioOutput* o = reinterpret_cast<QAudioOutput*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
