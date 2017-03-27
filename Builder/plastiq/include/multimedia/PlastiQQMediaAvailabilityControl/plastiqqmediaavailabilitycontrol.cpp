#include "plastiqmethod.h"
#include "plastiqqmediaavailabilitycontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaAvailabilityControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQMediaAvailabilityControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaAvailabilityControl::plastiqMethods = {
    { "availability()", { "availability", "", "QMultimedia::AvailabilityStatus", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaAvailabilityControl::plastiqSignals = {
    { "availabilityChanged(QMultimedia::AvailabilityStatus)", { "availabilityChanged", "QMultimedia::AvailabilityStatus", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaAvailabilityControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaAvailabilityControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaAvailabilityControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaAvailabilityControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaAvailabilityControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaAvailabilityControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaAvailabilityControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaAvailabilityControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaAvailabilityControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaAvailabilityControl *p = new PlastiQQMediaAvailabilityControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaAvailabilityControl *p = new PlastiQQMediaAvailabilityControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaAvailabilityControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaAvailabilityControl*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->availability() | ret: `QMultimedia::AvailabilityStatus` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaAvailabilityControl *o = reinterpret_cast<QMediaAvailabilityControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaAvailabilityControl::availabilityChanged,
            [=](QMultimedia::AvailabilityStatus arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QMultimedia::AvailabilityStatus";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "availabilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaAvailabilityControl *o = reinterpret_cast<QMediaAvailabilityControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaAvailabilityControl *o = reinterpret_cast<QMediaAvailabilityControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaAvailabilityControl *o = reinterpret_cast<QMediaAvailabilityControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaAvailabilityControl::~PlastiQQMediaAvailabilityControl() {
    QMediaAvailabilityControl* o = reinterpret_cast<QMediaAvailabilityControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
