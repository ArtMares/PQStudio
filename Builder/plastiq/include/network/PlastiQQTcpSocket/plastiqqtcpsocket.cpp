#include "plastiqmethod.h"
#include "plastiqqtcpsocket.h"

#include "network/PlastiQQAbstractSocket/plastiqqabstractsocket.h"
#include <QTcpSocket> 

QHash<QByteArray, PlastiQMethod> PlastiQQTcpSocket::plastiqConstructors = {
    { "QTcpSocket()", { "QTcpSocket", "", "QTcpSocket*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTcpSocket(QObject*)", { "QTcpSocket", "QObject*", "QTcpSocket*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTcpSocket::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTcpSocket::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTcpSocket::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTcpSocket::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTcpSocket::plastiqInherits = { &PlastiQQAbstractSocket::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTcpSocket::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTcpSocket::plastiq_static_metaObject = {
    { &PlastiQQAbstractSocket::plastiq_static_metaObject, &plastiqInherits, "QTcpSocket", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTcpSocket::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTcpSocket::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTcpSocket *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTcpSocket(); break;
        case 1: o = new QTcpSocket(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTcpSocket *p = new PlastiQQTcpSocket();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTcpSocket *p = new PlastiQQTcpSocket();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractSocket::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTcpSocket *o = sc ? Q_NULLPTR : reinterpret_cast<QTcpSocket*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractSocket::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTcpSocket *o = reinterpret_cast<QTcpSocket*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTcpSocket *o = reinterpret_cast<QTcpSocket*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTcpSocket *o = reinterpret_cast<QTcpSocket*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTcpSocket *o = reinterpret_cast<QTcpSocket*>(object->plastiq_data());

        if(className == "QAbstractSocket") {
            stack[0].s_voidp = static_cast<QAbstractSocket*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTcpSocket::~PlastiQQTcpSocket() {
    QTcpSocket* o = reinterpret_cast<QTcpSocket*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
