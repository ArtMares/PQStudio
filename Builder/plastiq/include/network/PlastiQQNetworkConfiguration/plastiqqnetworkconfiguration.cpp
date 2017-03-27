#include "plastiqmethod.h"
#include "plastiqqnetworkconfiguration.h"

#include <QNetworkConfiguration> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkConfiguration::plastiqConstructors = {
    { "QNetworkConfiguration()", { "QNetworkConfiguration", "", "QNetworkConfiguration*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkConfiguration(QNetworkConfiguration&)", { "QNetworkConfiguration", "QNetworkConfiguration&", "QNetworkConfiguration*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkConfiguration::plastiqMethods = {
    { "bearerType()", { "bearerType", "", "BearerType", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bearerTypeFamily()", { "bearerTypeFamily", "", "BearerType", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bearerTypeName()", { "bearerTypeName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "identifier()", { "identifier", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRoamingAvailable()", { "isRoamingAvailable", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "purpose()", { "purpose", "", "Purpose", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "StateFlags", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkConfiguration&)", { "swap", "QNetworkConfiguration&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkConfiguration::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkConfiguration::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkConfiguration::plastiqConstants = {

    /* QNetworkConfiguration::BearerType */
   { "BearerUnknown", QNetworkConfiguration::BearerUnknown },
   { "BearerEthernet", QNetworkConfiguration::BearerEthernet },
   { "BearerWLAN", QNetworkConfiguration::BearerWLAN },
   { "Bearer2G", QNetworkConfiguration::Bearer2G },
   { "BearerCDMA2000", QNetworkConfiguration::BearerCDMA2000 },
   { "BearerWCDMA", QNetworkConfiguration::BearerWCDMA },
   { "BearerHSPA", QNetworkConfiguration::BearerHSPA },
   { "BearerBluetooth", QNetworkConfiguration::BearerBluetooth },
   { "BearerWiMAX", QNetworkConfiguration::BearerWiMAX },
   { "BearerEVDO", QNetworkConfiguration::BearerEVDO },
   { "BearerLTE", QNetworkConfiguration::BearerLTE },
   { "Bearer3G", QNetworkConfiguration::Bearer3G },
   { "Bearer4G", QNetworkConfiguration::Bearer4G },

    /* QNetworkConfiguration::Purpose */
   { "UnknownPurpose", QNetworkConfiguration::UnknownPurpose },
   { "PublicPurpose", QNetworkConfiguration::PublicPurpose },
   { "PrivatePurpose", QNetworkConfiguration::PrivatePurpose },
   { "ServiceSpecificPurpose", QNetworkConfiguration::ServiceSpecificPurpose },

    /* QNetworkConfiguration::StateFlag */
   { "Undefined", QNetworkConfiguration::Undefined },
   { "Defined", QNetworkConfiguration::Defined },
   { "Discovered", QNetworkConfiguration::Discovered },
   { "Active", QNetworkConfiguration::Active },

    /* QNetworkConfiguration::Type */
   { "InternetAccessPoint", QNetworkConfiguration::InternetAccessPoint },
   { "ServiceNetwork", QNetworkConfiguration::ServiceNetwork },
   { "UserChoice", QNetworkConfiguration::UserChoice },
   { "Invalid", QNetworkConfiguration::Invalid },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkConfiguration::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkConfiguration::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkConfiguration::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkConfiguration", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkConfiguration::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkConfiguration::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkConfiguration *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkConfiguration(); break;
        case 1: o = new QNetworkConfiguration((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkConfiguration *p = new PlastiQQNetworkConfiguration();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkConfiguration *p = new PlastiQQNetworkConfiguration();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkConfiguration *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkConfiguration*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->bearerType(); // HACK for BearerType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->bearerTypeFamily(); // HACK for BearerType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->bearerTypeName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->identifier();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { bool _r = o->isRoamingAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { qint64 _r = o->purpose(); // HACK for Purpose 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { qint64 _r = o->state(); // HACK for StateFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: o->swap((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QNetworkConfiguration *o = reinterpret_cast<QNetworkConfiguration*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkConfiguration::~PlastiQQNetworkConfiguration() {
    QNetworkConfiguration* o = reinterpret_cast<QNetworkConfiguration*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
