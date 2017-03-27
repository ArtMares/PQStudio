#include "plastiqmethod.h"
#include "plastiqqaudiorolecontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QAudioRoleControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQAudioRoleControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioRoleControl::plastiqMethods = {
    { "audioRole()", { "audioRole", "", "QAudio::Role", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioRole(QAudio::Role)", { "setAudioRole", "QAudio::Role", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioRoleControl::plastiqSignals = {
    { "audioRoleChanged(QAudio::Role)", { "audioRoleChanged", "QAudio::Role", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioRoleControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioRoleControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioRoleControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAudioRoleControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAudioRoleControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QAudioRoleControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioRoleControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioRoleControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioRoleControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioRoleControl *p = new PlastiQQAudioRoleControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioRoleControl *p = new PlastiQQAudioRoleControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioRoleControl *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioRoleControl*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->audioRole() | ret: `QAudio::Role` */ break;
        case 1: /* o->setAudioRole(UNSUPPORTED_TYPE_QAudio::Role) | ret: `void` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAudioRoleControl *o = reinterpret_cast<QAudioRoleControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAudioRoleControl::audioRoleChanged,
            [=](QAudio::Role arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QAudio::Role";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "audioRoleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAudioRoleControl *o = reinterpret_cast<QAudioRoleControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAudioRoleControl *o = reinterpret_cast<QAudioRoleControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAudioRoleControl *o = reinterpret_cast<QAudioRoleControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAudioRoleControl::~PlastiQQAudioRoleControl() {
    QAudioRoleControl* o = reinterpret_cast<QAudioRoleControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
