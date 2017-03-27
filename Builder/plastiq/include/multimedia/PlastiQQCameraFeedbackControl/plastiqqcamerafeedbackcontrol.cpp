#include "plastiqmethod.h"
#include "plastiqqcamerafeedbackcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraFeedbackControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFeedbackControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFeedbackControl::plastiqMethods = {
    { "isEventFeedbackEnabled(enum)", { "isEventFeedbackEnabled", "EventType", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEventFeedbackLocked(enum)", { "isEventFeedbackLocked", "EventType", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetEventFeedback(enum)", { "resetEventFeedback", "EventType", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEventFeedbackEnabled(enum,bool)", { "setEventFeedbackEnabled", "EventType,bool", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEventFeedbackSound(enum,QString)", { "setEventFeedbackSound", "EventType,QString&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFeedbackControl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraFeedbackControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraFeedbackControl::plastiqConstants = {

    /* QCameraFeedbackControl::EventType */
   { "ViewfinderStarted", QCameraFeedbackControl::ViewfinderStarted },
   { "ViewfinderStopped", QCameraFeedbackControl::ViewfinderStopped },
   { "ImageCaptured", QCameraFeedbackControl::ImageCaptured },
   { "ImageSaved", QCameraFeedbackControl::ImageSaved },
   { "ImageError", QCameraFeedbackControl::ImageError },
   { "RecordingStarted", QCameraFeedbackControl::RecordingStarted },
   { "RecordingInProgress", QCameraFeedbackControl::RecordingInProgress },
   { "RecordingStopped", QCameraFeedbackControl::RecordingStopped },
   { "AutoFocusInProgress", QCameraFeedbackControl::AutoFocusInProgress },
   { "AutoFocusLocked", QCameraFeedbackControl::AutoFocusLocked },
   { "AutoFocusFailed", QCameraFeedbackControl::AutoFocusFailed },

};

QVector<PlastiQMetaObject*> PlastiQQCameraFeedbackControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraFeedbackControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraFeedbackControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraFeedbackControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraFeedbackControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraFeedbackControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraFeedbackControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraFeedbackControl *p = new PlastiQQCameraFeedbackControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraFeedbackControl *p = new PlastiQQCameraFeedbackControl();
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
        QCameraFeedbackControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraFeedbackControl*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isEventFeedbackEnabled(QCameraFeedbackControl::EventType(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isEventFeedbackLocked(QCameraFeedbackControl::EventType(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->resetEventFeedback(QCameraFeedbackControl::EventType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r = o->setEventFeedbackEnabled(QCameraFeedbackControl::EventType(stack[1].s_int64),
                    stack[2].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->setEventFeedbackSound(QCameraFeedbackControl::EventType(stack[1].s_int64),
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraFeedbackControl *o = reinterpret_cast<QCameraFeedbackControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraFeedbackControl *o = reinterpret_cast<QCameraFeedbackControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraFeedbackControl *o = reinterpret_cast<QCameraFeedbackControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraFeedbackControl *o = reinterpret_cast<QCameraFeedbackControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraFeedbackControl::~PlastiQQCameraFeedbackControl() {
    QCameraFeedbackControl* o = reinterpret_cast<QCameraFeedbackControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
