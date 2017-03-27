#include "plastiqmethod.h"
#include "plastiqqhostaddress.h"

#include <QHostAddress> 
#include <QString>
#include <Q_IPV6ADDR>

QHash<QByteArray, PlastiQMethod> PlastiQQHostAddress::plastiqConstructors = {
    { "QHostAddress()", { "QHostAddress", "", "QHostAddress*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(int)", { "QHostAddress", "quint32", "QHostAddress*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(quint8*)", { "QHostAddress", "quint8*", "QHostAddress*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(const quint8*)", { "QHostAddress", "quint8*", "QHostAddress*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(Q_IPV6ADDR&)", { "QHostAddress", "Q_IPV6ADDR&", "QHostAddress*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(const sockaddr*)", { "QHostAddress", "sockaddr*", "QHostAddress*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(QString)", { "QHostAddress", "QString&", "QHostAddress*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(QHostAddress&)", { "QHostAddress", "QHostAddress&", "QHostAddress*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostAddress(enum)", { "QHostAddress", "SpecialAddress", "QHostAddress*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHostAddress::plastiqMethods = {
    { "clear()", { "clear", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEqual(QHostAddress&)", { "isEqual", "QHostAddress&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEqual(QHostAddress&,enum)", { "isEqual", "QHostAddress&,ConversionMode", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isInSubnet(QHostAddress&,int)", { "isInSubnet", "QHostAddress&,int", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isInSubnet(const QPair<QHostAddress,int>&)", { "isInSubnet", "QPair<QHostAddress,int>&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLoopback()", { "isLoopback", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMulticast()", { "isMulticast", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "protocol()", { "protocol", "", "QAbstractSocket::NetworkLayerProtocol", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scopeId()", { "scopeId", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAddress(int)", { "setAddress", "quint32", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAddress(quint8*)", { "setAddress", "quint8*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAddress(Q_IPV6ADDR&)", { "setAddress", "Q_IPV6ADDR&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAddress(const sockaddr*)", { "setAddress", "sockaddr*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAddress(QString)", { "setAddress", "QString&", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAddress(enum)", { "setAddress", "SpecialAddress", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScopeId(QString)", { "setScopeId", "QString&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QHostAddress&)", { "swap", "QHostAddress&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toIPv4Address()", { "toIPv4Address", "", "quint32", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toIPv4Address(bool*)", { "toIPv4Address", "bool*", "quint32", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toIPv6Address()", { "toIPv6Address", "", "Q_IPV6ADDR", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHostAddress::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHostAddress::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHostAddress::plastiqConstants = {

    /* QHostAddress::ConversionModeFlag */
   { "ConvertV4MappedToIPv4", QHostAddress::ConvertV4MappedToIPv4 },
   { "ConvertV4CompatToIPv4", QHostAddress::ConvertV4CompatToIPv4 },
   { "ConvertUnspecifiedAddress", QHostAddress::ConvertUnspecifiedAddress },
   { "ConvertLocalHost", QHostAddress::ConvertLocalHost },
   { "TolerantConversion", QHostAddress::TolerantConversion },
   { "StrictConversion", QHostAddress::StrictConversion },

    /* QHostAddress::SpecialAddress */
   { "Null", QHostAddress::Null },
   { "Broadcast", QHostAddress::Broadcast },
   { "LocalHost", QHostAddress::LocalHost },
   { "LocalHostIPv6", QHostAddress::LocalHostIPv6 },
   { "Any", QHostAddress::Any },
   { "AnyIPv6", QHostAddress::AnyIPv6 },
   { "AnyIPv4", QHostAddress::AnyIPv4 },

};

QVector<PlastiQMetaObject*> PlastiQQHostAddress::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQHostAddress::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQHostAddress::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QHostAddress", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHostAddress::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHostAddress::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHostAddress *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHostAddress(); break;
        case 1: o = new QHostAddress(stack[1].s_int); break;
        case 2: o = new QHostAddress(reinterpret_cast<quint8*>(stack[1].s_voidp)); break;
        case 3: o = new QHostAddress(reinterpret_cast<const quint8*>(stack[1].s_voidp)); break;
        case 4: o = new QHostAddress((*reinterpret_cast< Q_IPV6ADDR(*) >(stack[1].s_voidp))); break;
        case 5: o = new QHostAddress(reinterpret_cast<const sockaddr*>(stack[1].s_voidp)); break;
        case 6: o = new QHostAddress(stack[1].s_string); break;
        case 7: o = new QHostAddress((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp))); break;
        case 8: o = new QHostAddress(QHostAddress::SpecialAddress(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHostAddress *p = new PlastiQQHostAddress();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHostAddress *p = new PlastiQQHostAddress();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHostAddress *o = sc ? Q_NULLPTR : reinterpret_cast<QHostAddress*>(object->plastiq_data());

        switch(id) {
        case 0: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->isEqual((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isEqual((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    QHostAddress::ConversionMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isInSubnet((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: /* o->isInSubnet(UNSUPPORTED_TYPE_const QPair<QHostAddress,
                    (*reinterpret_cast< int>(*) >(stack[2].s_voidp))) | ret: `bool` */ break;
        case 5: { bool _r = o->isLoopback();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isMulticast();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { qint64 _r = o->protocol(); // HACK for QAbstractSocket::NetworkLayerProtocol 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QString _r = o->scopeId();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: o->setAddress(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setAddress(reinterpret_cast<quint8*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setAddress((*reinterpret_cast< Q_IPV6ADDR(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setAddress(reinterpret_cast<const sockaddr*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: { bool _r = o->setAddress(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: o->setAddress(QHostAddress::SpecialAddress(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setScopeId(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->swap((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: /* UNSUPPORTED_RETURN_VALUE o->toIPv4Address() | ret: `quint32` */ break;
        case 19: /* UNSUPPORTED_RETURN_VALUE o->toIPv4Address(reinterpret_cast<bool*>(stack[1].s_voidp)) | ret: `quint32` */ break;
        case 20: /* UNSUPPORTED_RETURN_VALUE o->toIPv6Address() | ret: `Q_IPV6ADDR` */ break;
        case 21: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QHostAddress *o = reinterpret_cast<QHostAddress*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQHostAddress::~PlastiQQHostAddress() {
    QHostAddress* o = reinterpret_cast<QHostAddress*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
