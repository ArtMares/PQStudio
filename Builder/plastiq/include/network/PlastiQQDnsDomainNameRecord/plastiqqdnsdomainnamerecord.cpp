#include "plastiqmethod.h"
#include "plastiqqdnsdomainnamerecord.h"

#include <QDnsDomainNameRecord> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDnsDomainNameRecord::plastiqConstructors = {
    { "QDnsDomainNameRecord()", { "QDnsDomainNameRecord", "", "QDnsDomainNameRecord*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsDomainNameRecord(QDnsDomainNameRecord&)", { "QDnsDomainNameRecord", "QDnsDomainNameRecord&", "QDnsDomainNameRecord*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsDomainNameRecord::plastiqMethods = {
    { "name()", { "name", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QDnsDomainNameRecord&)", { "swap", "QDnsDomainNameRecord&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeToLive()", { "timeToLive", "", "quint32", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsDomainNameRecord::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDnsDomainNameRecord::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDnsDomainNameRecord::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDnsDomainNameRecord::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDnsDomainNameRecord::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDnsDomainNameRecord::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDnsDomainNameRecord", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDnsDomainNameRecord::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDnsDomainNameRecord::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDnsDomainNameRecord *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDnsDomainNameRecord(); break;
        case 1: o = new QDnsDomainNameRecord((*reinterpret_cast< QDnsDomainNameRecord(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDnsDomainNameRecord *p = new PlastiQQDnsDomainNameRecord();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDnsDomainNameRecord *p = new PlastiQQDnsDomainNameRecord();
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
        QDnsDomainNameRecord *o = sc ? Q_NULLPTR : reinterpret_cast<QDnsDomainNameRecord*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: o->swap((*reinterpret_cast< QDnsDomainNameRecord(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->timeToLive() | ret: `quint32` */ break;
        case 3: { QString _r = o->value();
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
        QDnsDomainNameRecord *o = reinterpret_cast<QDnsDomainNameRecord*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDnsDomainNameRecord::~PlastiQQDnsDomainNameRecord() {
    QDnsDomainNameRecord* o = reinterpret_cast<QDnsDomainNameRecord*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
