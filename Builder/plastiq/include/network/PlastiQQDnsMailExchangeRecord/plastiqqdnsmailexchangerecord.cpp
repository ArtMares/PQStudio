#include "plastiqmethod.h"
#include "plastiqqdnsmailexchangerecord.h"

#include <QDnsMailExchangeRecord> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDnsMailExchangeRecord::plastiqConstructors = {
    { "QDnsMailExchangeRecord()", { "QDnsMailExchangeRecord", "", "QDnsMailExchangeRecord*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsMailExchangeRecord(QDnsMailExchangeRecord&)", { "QDnsMailExchangeRecord", "QDnsMailExchangeRecord&", "QDnsMailExchangeRecord*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsMailExchangeRecord::plastiqMethods = {
    { "exchange()", { "exchange", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preference()", { "preference", "", "quint16", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QDnsMailExchangeRecord&)", { "swap", "QDnsMailExchangeRecord&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeToLive()", { "timeToLive", "", "quint32", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsMailExchangeRecord::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDnsMailExchangeRecord::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDnsMailExchangeRecord::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDnsMailExchangeRecord::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDnsMailExchangeRecord::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDnsMailExchangeRecord::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDnsMailExchangeRecord", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDnsMailExchangeRecord::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDnsMailExchangeRecord::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDnsMailExchangeRecord *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDnsMailExchangeRecord(); break;
        case 1: o = new QDnsMailExchangeRecord((*reinterpret_cast< QDnsMailExchangeRecord(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDnsMailExchangeRecord *p = new PlastiQQDnsMailExchangeRecord();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDnsMailExchangeRecord *p = new PlastiQQDnsMailExchangeRecord();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDnsMailExchangeRecord *o = sc ? Q_NULLPTR : reinterpret_cast<QDnsMailExchangeRecord*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->exchange();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->preference() | ret: `quint16` */ break;
        case 3: o->swap((*reinterpret_cast< QDnsMailExchangeRecord(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: /* UNSUPPORTED_RETURN_VALUE o->timeToLive() | ret: `quint32` */ break;

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
        QDnsMailExchangeRecord *o = reinterpret_cast<QDnsMailExchangeRecord*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDnsMailExchangeRecord::~PlastiQQDnsMailExchangeRecord() {
    QDnsMailExchangeRecord* o = reinterpret_cast<QDnsMailExchangeRecord*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
