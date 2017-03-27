#include "plastiqmethod.h"
#include "plastiqqdnshostaddressrecord.h"

#include <QDnsHostAddressRecord> 
#include <QString>
#include <QHostAddress>

QHash<QByteArray, PlastiQMethod> PlastiQQDnsHostAddressRecord::plastiqConstructors = {
    { "QDnsHostAddressRecord()", { "QDnsHostAddressRecord", "", "QDnsHostAddressRecord*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsHostAddressRecord(QDnsHostAddressRecord&)", { "QDnsHostAddressRecord", "QDnsHostAddressRecord&", "QDnsHostAddressRecord*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsHostAddressRecord::plastiqMethods = {
    { "name()", { "name", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QDnsHostAddressRecord&)", { "swap", "QDnsHostAddressRecord&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeToLive()", { "timeToLive", "", "quint32", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "QHostAddress", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsHostAddressRecord::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDnsHostAddressRecord::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDnsHostAddressRecord::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDnsHostAddressRecord::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDnsHostAddressRecord::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDnsHostAddressRecord::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDnsHostAddressRecord", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDnsHostAddressRecord::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDnsHostAddressRecord::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDnsHostAddressRecord *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDnsHostAddressRecord(); break;
        case 1: o = new QDnsHostAddressRecord((*reinterpret_cast< QDnsHostAddressRecord(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDnsHostAddressRecord *p = new PlastiQQDnsHostAddressRecord();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDnsHostAddressRecord *p = new PlastiQQDnsHostAddressRecord();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDnsHostAddressRecord *o = sc ? Q_NULLPTR : reinterpret_cast<QDnsHostAddressRecord*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: o->swap((*reinterpret_cast< QDnsHostAddressRecord(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->timeToLive() | ret: `quint32` */ break;
        case 3: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->value());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QDnsHostAddressRecord *o = reinterpret_cast<QDnsHostAddressRecord*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDnsHostAddressRecord::~PlastiQQDnsHostAddressRecord() {
    QDnsHostAddressRecord* o = reinterpret_cast<QDnsHostAddressRecord*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
