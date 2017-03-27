#include "plastiqmethod.h"
#include "plastiqqaudioinputselectorcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QAudioInputSelectorControl> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioInputSelectorControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioInputSelectorControl::plastiqMethods = {
    { "activeInput()", { "activeInput", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultInput()", { "defaultInput", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputDescription(QString)", { "inputDescription", "QString&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActiveInput(QString)", { "setActiveInput", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioInputSelectorControl::plastiqSignals = {
    { "activeInputChanged(QString)", { "activeInputChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "availableInputsChanged()", { "availableInputsChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioInputSelectorControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioInputSelectorControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioInputSelectorControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioInputSelectorControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioInputSelectorControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QAudioInputSelectorControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioInputSelectorControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioInputSelectorControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioInputSelectorControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioInputSelectorControl *p = new PlastiQQAudioInputSelectorControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioInputSelectorControl *p = new PlastiQQAudioInputSelectorControl();
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
        QAudioInputSelectorControl *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioInputSelectorControl*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->activeInput();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->defaultInput();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->inputDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: o->setActiveInput(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAudioInputSelectorControl *o = reinterpret_cast<QAudioInputSelectorControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAudioInputSelectorControl::activeInputChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "activeInputChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAudioInputSelectorControl::availableInputsChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "availableInputsChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAudioInputSelectorControl *o = reinterpret_cast<QAudioInputSelectorControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioInputSelectorControl *o = reinterpret_cast<QAudioInputSelectorControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioInputSelectorControl *o = reinterpret_cast<QAudioInputSelectorControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioInputSelectorControl::~PlastiQQAudioInputSelectorControl() {
    QAudioInputSelectorControl* o = reinterpret_cast<QAudioInputSelectorControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
