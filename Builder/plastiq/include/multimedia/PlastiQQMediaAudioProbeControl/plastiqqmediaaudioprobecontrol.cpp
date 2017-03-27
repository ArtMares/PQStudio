#include "plastiqmethod.h"
#include "plastiqqmediaaudioprobecontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaAudioProbeControl> 
#include <QAudioBuffer>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaAudioProbeControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaAudioProbeControl::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaAudioProbeControl::plastiqSignals = {
    { "audioBufferProbed(QAudioBuffer&)", { "audioBufferProbed", "QAudioBuffer&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "flush()", { "flush", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaAudioProbeControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaAudioProbeControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaAudioProbeControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaAudioProbeControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaAudioProbeControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaAudioProbeControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaAudioProbeControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaAudioProbeControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaAudioProbeControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaAudioProbeControl *p = new PlastiQQMediaAudioProbeControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaAudioProbeControl *p = new PlastiQQMediaAudioProbeControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaAudioProbeControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaAudioProbeControl*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaAudioProbeControl *o = reinterpret_cast<QMediaAudioProbeControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaAudioProbeControl::audioBufferProbed,
            [=](const QAudioBuffer& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QAudioBuffer(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QAudioBuffer";
                PlastiQ_activate(sender, "audioBufferProbed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaAudioProbeControl::flush,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "flush", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaAudioProbeControl *o = reinterpret_cast<QMediaAudioProbeControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaAudioProbeControl *o = reinterpret_cast<QMediaAudioProbeControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaAudioProbeControl *o = reinterpret_cast<QMediaAudioProbeControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaAudioProbeControl::~PlastiQQMediaAudioProbeControl() {
    QMediaAudioProbeControl* o = reinterpret_cast<QMediaAudioProbeControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
