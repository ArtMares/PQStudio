#include "plastiqmethod.h"
#include "plastiqqmediastreamscontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaStreamsControl> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaStreamsControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaStreamsControl::plastiqMethods = {
    { "isActive(int)", { "isActive", "int", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData(int,QString)", { "metaData", "int,QString&", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActive(int,bool)", { "setActive", "int,bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "streamCount()", { "streamCount", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "streamType(int)", { "streamType", "int", "StreamType", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaStreamsControl::plastiqSignals = {
    { "activeStreamsChanged()", { "activeStreamsChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "streamsChanged()", { "streamsChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaStreamsControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaStreamsControl::plastiqConstants = {

    /* QMediaStreamsControl::StreamType */
   { "UnknownStream", QMediaStreamsControl::UnknownStream },
   { "VideoStream", QMediaStreamsControl::VideoStream },
   { "AudioStream", QMediaStreamsControl::AudioStream },
   { "SubPictureStream", QMediaStreamsControl::SubPictureStream },
   { "DataStream", QMediaStreamsControl::DataStream },

};

QVector<PlastiQMetaObject*> PlastiQQMediaStreamsControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaStreamsControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaStreamsControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaStreamsControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaStreamsControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaStreamsControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaStreamsControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaStreamsControl *p = new PlastiQQMediaStreamsControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaStreamsControl *p = new PlastiQQMediaStreamsControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaStreamsControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaStreamsControl*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isActive(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->metaData(stack[1].s_int,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->setActive(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 3: { int _r = o->streamCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { qint64 _r = o->streamType(stack[1].s_int); // HACK for StreamType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaStreamsControl *o = reinterpret_cast<QMediaStreamsControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaStreamsControl::activeStreamsChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "activeStreamsChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaStreamsControl::streamsChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "streamsChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaStreamsControl *o = reinterpret_cast<QMediaStreamsControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaStreamsControl *o = reinterpret_cast<QMediaStreamsControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaStreamsControl *o = reinterpret_cast<QMediaStreamsControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaStreamsControl::~PlastiQQMediaStreamsControl() {
    QMediaStreamsControl* o = reinterpret_cast<QMediaStreamsControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
