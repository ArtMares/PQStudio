#include "plastiqmethod.h"
#include "plastiqqnetworkaddressentry.h"

#include <QNetworkAddressEntry> 
#include <QHostAddress>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkAddressEntry::plastiqConstructors = {
    { "QNetworkAddressEntry()", { "QNetworkAddressEntry", "", "QNetworkAddressEntry*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkAddressEntry(QNetworkAddressEntry&)", { "QNetworkAddressEntry", "QNetworkAddressEntry&", "QNetworkAddressEntry*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkAddressEntry::plastiqMethods = {
    { "broadcast()", { "broadcast", "", "QHostAddress", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ip()", { "ip", "", "QHostAddress", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "netmask()", { "netmask", "", "QHostAddress", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "prefixLength()", { "prefixLength", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBroadcast(QHostAddress&)", { "setBroadcast", "QHostAddress&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIp(QHostAddress&)", { "setIp", "QHostAddress&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNetmask(QHostAddress&)", { "setNetmask", "QHostAddress&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPrefixLength(int)", { "setPrefixLength", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkAddressEntry&)", { "swap", "QNetworkAddressEntry&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkAddressEntry::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkAddressEntry::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkAddressEntry::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQNetworkAddressEntry::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkAddressEntry::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkAddressEntry::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkAddressEntry", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkAddressEntry::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkAddressEntry::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkAddressEntry *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkAddressEntry(); break;
        case 1: o = new QNetworkAddressEntry((*reinterpret_cast< QNetworkAddressEntry(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkAddressEntry *p = new PlastiQQNetworkAddressEntry();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkAddressEntry *p = new PlastiQQNetworkAddressEntry();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkAddressEntry *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkAddressEntry*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->broadcast());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->ip());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->netmask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { int _r = o->prefixLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setBroadcast((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setIp((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setNetmask((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setPrefixLength(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->swap((*reinterpret_cast< QNetworkAddressEntry(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QNetworkAddressEntry *o = reinterpret_cast<QNetworkAddressEntry*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkAddressEntry::~PlastiQQNetworkAddressEntry() {
    QNetworkAddressEntry* o = reinterpret_cast<QNetworkAddressEntry*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
