#include "plastiqmethod.h"
#include "plastiqqaudiorecorder.h"

#include "multimedia/PlastiQQMediaRecorder/plastiqqmediarecorder.h"
#include <QAudioRecorder> 
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioRecorder::plastiqConstructors = {
    { "QAudioRecorder()", { "QAudioRecorder", "", "QAudioRecorder*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioRecorder(QObject*)", { "QAudioRecorder", "QObject*", "QAudioRecorder*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioRecorder::plastiqMethods = {
    { "audioInput()", { "audioInput", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "audioInputDescription(QString)", { "audioInputDescription", "QString&", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "audioInputs()", { "audioInputs", "", "QStringList", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultAudioInput()", { "defaultAudioInput", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioInput(QString)", { "setAudioInput", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioRecorder::plastiqSignals = {
    { "audioInputChanged(QString)", { "audioInputChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "availableAudioInputsChanged()", { "availableAudioInputsChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioRecorder::plastiqProperties = {
    { "audioInput", { "audioInput", "QString", "setAudioInput", "audioInput" } },

};

QHash<QByteArray, long> PlastiQQAudioRecorder::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioRecorder::plastiqInherits = { &PlastiQQMediaRecorder::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioRecorder::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioRecorder::plastiq_static_metaObject = {
    { &PlastiQQMediaRecorder::plastiq_static_metaObject, &plastiqInherits, "QAudioRecorder", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioRecorder::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioRecorder::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioRecorder *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioRecorder(); break;
        case 1: o = new QAudioRecorder(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioRecorder *p = new PlastiQQAudioRecorder();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioRecorder *p = new PlastiQQAudioRecorder();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQMediaRecorder::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioRecorder *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioRecorder*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->audioInput();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->audioInputDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->audioInputs());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { QString _r = o->defaultAudioInput();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: o->setAudioInput(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaRecorder::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAudioRecorder *o = reinterpret_cast<QAudioRecorder*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAudioRecorder::audioInputChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "audioInputChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAudioRecorder::availableAudioInputsChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "availableAudioInputsChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAudioRecorder *o = reinterpret_cast<QAudioRecorder*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioRecorder *o = reinterpret_cast<QAudioRecorder*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioRecorder *o = reinterpret_cast<QAudioRecorder*>(object->plastiq_data());

        if(className == "QMediaRecorder") {
            stack[0].s_voidp = static_cast<QMediaRecorder*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioRecorder::~PlastiQQAudioRecorder() {
    QAudioRecorder* o = reinterpret_cast<QAudioRecorder*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
