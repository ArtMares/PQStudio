#include "plastiqmethod.h"
#include "plastiqqmediacontainercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaContainerControl> 
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaContainerControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaContainerControl::plastiqMethods = {
    { "containerDescription(QString)", { "containerDescription", "QString&", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "containerFormat()", { "containerFormat", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContainerFormat(QString)", { "setContainerFormat", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedContainers()", { "supportedContainers", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaContainerControl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaContainerControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaContainerControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaContainerControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaContainerControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaContainerControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaContainerControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaContainerControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaContainerControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaContainerControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaContainerControl *p = new PlastiQQMediaContainerControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaContainerControl *p = new PlastiQQMediaContainerControl();
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
        QMediaContainerControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaContainerControl*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->containerDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->containerFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: o->setContainerFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedContainers());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaContainerControl *o = reinterpret_cast<QMediaContainerControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaContainerControl *o = reinterpret_cast<QMediaContainerControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaContainerControl *o = reinterpret_cast<QMediaContainerControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaContainerControl *o = reinterpret_cast<QMediaContainerControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaContainerControl::~PlastiQQMediaContainerControl() {
    QMediaContainerControl* o = reinterpret_cast<QMediaContainerControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
