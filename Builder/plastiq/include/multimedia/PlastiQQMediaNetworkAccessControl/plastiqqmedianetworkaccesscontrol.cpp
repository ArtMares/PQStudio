#include "plastiqmethod.h"
#include "plastiqqmedianetworkaccesscontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaNetworkAccessControl> 
#include <QNetworkConfiguration>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaNetworkAccessControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaNetworkAccessControl::plastiqMethods = {
    { "currentConfiguration()", { "currentConfiguration", "", "QNetworkConfiguration", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setConfigurations(QList<QNetworkConfiguration>&)", { "setConfigurations", "QList<QNetworkConfiguration>&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaNetworkAccessControl::plastiqSignals = {
    { "configurationChanged(QNetworkConfiguration&)", { "configurationChanged", "QNetworkConfiguration&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaNetworkAccessControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaNetworkAccessControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaNetworkAccessControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaNetworkAccessControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaNetworkAccessControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaNetworkAccessControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaNetworkAccessControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaNetworkAccessControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaNetworkAccessControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaNetworkAccessControl *p = new PlastiQQMediaNetworkAccessControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaNetworkAccessControl *p = new PlastiQQMediaNetworkAccessControl();
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
        QMediaNetworkAccessControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaNetworkAccessControl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->currentConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setConfigurations((*reinterpret_cast< QList<QNetworkConfiguration>(*) >(stack[1].s_voidp)));
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

        QMediaNetworkAccessControl *o = reinterpret_cast<QMediaNetworkAccessControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaNetworkAccessControl::configurationChanged,
            [=](const QNetworkConfiguration& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QNetworkConfiguration(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QNetworkConfiguration";
                PlastiQ_activate(sender, "configurationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaNetworkAccessControl *o = reinterpret_cast<QMediaNetworkAccessControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaNetworkAccessControl *o = reinterpret_cast<QMediaNetworkAccessControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaNetworkAccessControl *o = reinterpret_cast<QMediaNetworkAccessControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaNetworkAccessControl::~PlastiQQMediaNetworkAccessControl() {
    QMediaNetworkAccessControl* o = reinterpret_cast<QMediaNetworkAccessControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
