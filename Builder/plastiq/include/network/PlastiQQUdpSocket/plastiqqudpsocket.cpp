#include "plastiqmethod.h"
#include "plastiqqudpsocket.h"

#include "network/PlastiQQAbstractSocket/plastiqqabstractsocket.h"
#include <QUdpSocket> 
#include <QNetworkInterface>
#include <QNetworkDatagram>

QHash<QByteArray, PlastiQMethod> PlastiQQUdpSocket::plastiqConstructors = {
    { "QUdpSocket()", { "QUdpSocket", "", "QUdpSocket*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUdpSocket(QObject*)", { "QUdpSocket", "QObject*", "QUdpSocket*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUdpSocket::plastiqMethods = {
    { "hasPendingDatagrams()", { "hasPendingDatagrams", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "joinMulticastGroup(QHostAddress&)", { "joinMulticastGroup", "QHostAddress&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "joinMulticastGroup(QHostAddress&,QNetworkInterface&)", { "joinMulticastGroup", "QHostAddress&,QNetworkInterface&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leaveMulticastGroup(QHostAddress&)", { "leaveMulticastGroup", "QHostAddress&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leaveMulticastGroup(QHostAddress&,QNetworkInterface&)", { "leaveMulticastGroup", "QHostAddress&,QNetworkInterface&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "multicastInterface()", { "multicastInterface", "", "QNetworkInterface", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pendingDatagramSize()", { "pendingDatagramSize", "", "qint64", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readDatagram(char*,long)", { "readDatagram", "char*,qint64", "qint64", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readDatagram(char*,long,QHostAddress*)", { "readDatagram", "char*,qint64,QHostAddress*", "qint64", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readDatagram(char*,long,QHostAddress*,quint16*)", { "readDatagram", "char*,qint64,QHostAddress*,quint16*", "qint64", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "receiveDatagram()", { "receiveDatagram", "", "QNetworkDatagram", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "receiveDatagram(long)", { "receiveDatagram", "qint64", "QNetworkDatagram", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMulticastInterface(QNetworkInterface&)", { "setMulticastInterface", "QNetworkInterface&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "writeDatagram(const char*,long,QHostAddress&,int)", { "writeDatagram", "char*,qint64,QHostAddress&,quint16", "qint64", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "writeDatagram(QNetworkDatagram&)", { "writeDatagram", "QNetworkDatagram&", "qint64", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "writeDatagram(QByteArray,QHostAddress&,int)", { "writeDatagram", "QByteArray&,QHostAddress&,quint16", "qint64", 15, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUdpSocket::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQUdpSocket::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQUdpSocket::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQUdpSocket::plastiqInherits = { &PlastiQQAbstractSocket::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQUdpSocket::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQUdpSocket::plastiq_static_metaObject = {
    { &PlastiQQAbstractSocket::plastiq_static_metaObject, &plastiqInherits, "QUdpSocket", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUdpSocket::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQUdpSocket::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QUdpSocket *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QUdpSocket(); break;
        case 1: o = new QUdpSocket(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQUdpSocket *p = new PlastiQQUdpSocket();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUdpSocket *p = new PlastiQQUdpSocket();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQAbstractSocket::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QUdpSocket *o = sc ? Q_NULLPTR : reinterpret_cast<QUdpSocket*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->hasPendingDatagrams();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->joinMulticastGroup((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->joinMulticastGroup((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QNetworkInterface(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->leaveMulticastGroup((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->leaveMulticastGroup((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QNetworkInterface(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { /* COPY OBJECT */
            QNetworkInterface *_r = new QNetworkInterface(o->multicastInterface());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkInterface";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { long _r = o->pendingDatagramSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 7: { long _r = o->readDatagram(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 8: { long _r = o->readDatagram(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long,
                    reinterpret_cast<QHostAddress*>(stack[3].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 9: { long _r = o->readDatagram(reinterpret_cast<char*>(stack[1].s_voidp),
                    stack[2].s_long,
                    reinterpret_cast<QHostAddress*>(stack[3].s_voidp),
                    reinterpret_cast<quint16*>(stack[4].s_voidp));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 10: /* UNSUPPORTED_RETURN_VALUE o->receiveDatagram() | ret: `QNetworkDatagram` */ break;
        case 11: /* UNSUPPORTED_RETURN_VALUE o->receiveDatagram(stack[1].s_long) | ret: `QNetworkDatagram` */ break;
        case 12: o->setMulticastInterface((*reinterpret_cast< QNetworkInterface(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: { long _r = o->writeDatagram(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_long,
                    (*reinterpret_cast< QHostAddress(*) >(stack[3].s_voidp)),
                    stack[4].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 14: { long _r = o->writeDatagram((*reinterpret_cast< QNetworkDatagram(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 15: { long _r = o->writeDatagram(stack[1].s_bytearray,
                    (*reinterpret_cast< QHostAddress(*) >(stack[2].s_voidp)),
                    stack[3].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractSocket::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QUdpSocket *o = reinterpret_cast<QUdpSocket*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QUdpSocket *o = reinterpret_cast<QUdpSocket*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QUdpSocket *o = reinterpret_cast<QUdpSocket*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QUdpSocket *o = reinterpret_cast<QUdpSocket*>(object->plastiq_data());

        if(className == "QAbstractSocket") {
            stack[0].s_voidp = static_cast<QAbstractSocket*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQUdpSocket::~PlastiQQUdpSocket() {
    QUdpSocket* o = reinterpret_cast<QUdpSocket*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
