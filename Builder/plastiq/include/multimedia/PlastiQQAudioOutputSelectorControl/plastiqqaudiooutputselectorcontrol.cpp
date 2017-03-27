#include "plastiqmethod.h"
#include "plastiqqaudiooutputselectorcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QAudioOutputSelectorControl> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioOutputSelectorControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioOutputSelectorControl::plastiqMethods = {
    { "activeOutput()", { "activeOutput", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultOutput()", { "defaultOutput", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "outputDescription(QString)", { "outputDescription", "QString&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActiveOutput(QString)", { "setActiveOutput", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioOutputSelectorControl::plastiqSignals = {
    { "activeOutputChanged(QString)", { "activeOutputChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "availableOutputsChanged()", { "availableOutputsChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioOutputSelectorControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioOutputSelectorControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioOutputSelectorControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioOutputSelectorControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioOutputSelectorControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QAudioOutputSelectorControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioOutputSelectorControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioOutputSelectorControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioOutputSelectorControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioOutputSelectorControl *p = new PlastiQQAudioOutputSelectorControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioOutputSelectorControl *p = new PlastiQQAudioOutputSelectorControl();
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
        QAudioOutputSelectorControl *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioOutputSelectorControl*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->activeOutput();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->defaultOutput();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->outputDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: o->setActiveOutput(stack[1].s_string);
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

        QAudioOutputSelectorControl *o = reinterpret_cast<QAudioOutputSelectorControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAudioOutputSelectorControl::activeOutputChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "activeOutputChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAudioOutputSelectorControl::availableOutputsChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "availableOutputsChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAudioOutputSelectorControl *o = reinterpret_cast<QAudioOutputSelectorControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioOutputSelectorControl *o = reinterpret_cast<QAudioOutputSelectorControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioOutputSelectorControl *o = reinterpret_cast<QAudioOutputSelectorControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioOutputSelectorControl::~PlastiQQAudioOutputSelectorControl() {
    QAudioOutputSelectorControl* o = reinterpret_cast<QAudioOutputSelectorControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
