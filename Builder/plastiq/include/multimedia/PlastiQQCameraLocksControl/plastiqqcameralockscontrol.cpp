#include "plastiqmethod.h"
#include "plastiqqcameralockscontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraLocksControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQCameraLocksControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraLocksControl::plastiqMethods = {
    { "lockStatus(enum)", { "lockStatus", "QCamera::LockType", "QCamera::LockStatus", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "searchAndLock(enum)", { "searchAndLock", "QCamera::LockTypes", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedLocks()", { "supportedLocks", "", "QCamera::LockTypes", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unlock(enum)", { "unlock", "QCamera::LockTypes", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraLocksControl::plastiqSignals = {
    { "lockStatusChanged(enum,enum,enum)", { "lockStatusChanged", "QCamera::LockType,QCamera::LockStatus,QCamera::LockChangeReason", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraLocksControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraLocksControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraLocksControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraLocksControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraLocksControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraLocksControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraLocksControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraLocksControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraLocksControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraLocksControl *p = new PlastiQQCameraLocksControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraLocksControl *p = new PlastiQQCameraLocksControl();
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
        QCameraLocksControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraLocksControl*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->lockStatus(QCamera::LockType(stack[1].s_int64)); // HACK for QCamera::LockStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->searchAndLock(QCamera::LockTypes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: { qint64 _r = o->supportedLocks(); // HACK for QCamera::LockTypes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->unlock(QCamera::LockTypes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraLocksControl *o = reinterpret_cast<QCameraLocksControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraLocksControl::lockStatusChanged,
            [=](QCamera::LockType arg0, QCamera::LockStatus arg1, QCamera::LockChangeReason arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::LockType";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QCamera::LockStatus";
                    cstack[2].s_int64 = arg2;
                    cstack[2].type = PlastiQ::Enum; cstack[2].name = "QCamera::LockChangeReason";
                PlastiQ_activate(sender, "lockStatusChanged", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraLocksControl *o = reinterpret_cast<QCameraLocksControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraLocksControl *o = reinterpret_cast<QCameraLocksControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraLocksControl *o = reinterpret_cast<QCameraLocksControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraLocksControl::~PlastiQQCameraLocksControl() {
    QCameraLocksControl* o = reinterpret_cast<QCameraLocksControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
