#include "plastiqmethod.h"
#include "plastiqqdnsservicerecord.h"

#include <QDnsServiceRecord> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDnsServiceRecord::plastiqConstructors = {
    { "QDnsServiceRecord()", { "QDnsServiceRecord", "", "QDnsServiceRecord*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsServiceRecord(QDnsServiceRecord&)", { "QDnsServiceRecord", "QDnsServiceRecord&", "QDnsServiceRecord*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsServiceRecord::plastiqMethods = {
    { "name()", { "name", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "port()", { "port", "", "quint16", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "priority()", { "priority", "", "quint16", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QDnsServiceRecord&)", { "swap", "QDnsServiceRecord&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "target()", { "target", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeToLive()", { "timeToLive", "", "quint32", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weight()", { "weight", "", "quint16", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsServiceRecord::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDnsServiceRecord::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDnsServiceRecord::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDnsServiceRecord::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDnsServiceRecord::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDnsServiceRecord::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDnsServiceRecord", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDnsServiceRecord::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDnsServiceRecord::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDnsServiceRecord *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDnsServiceRecord(); break;
        case 1: o = new QDnsServiceRecord((*reinterpret_cast< QDnsServiceRecord(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDnsServiceRecord *p = new PlastiQQDnsServiceRecord();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDnsServiceRecord *p = new PlastiQQDnsServiceRecord();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDnsServiceRecord *o = sc ? Q_NULLPTR : reinterpret_cast<QDnsServiceRecord*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->port() | ret: `quint16` */ break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->priority() | ret: `quint16` */ break;
        case 3: o->swap((*reinterpret_cast< QDnsServiceRecord(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QString _r = o->target();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->timeToLive() | ret: `quint32` */ break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->weight() | ret: `quint16` */ break;

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
        QDnsServiceRecord *o = reinterpret_cast<QDnsServiceRecord*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDnsServiceRecord::~PlastiQQDnsServiceRecord() {
    QDnsServiceRecord* o = reinterpret_cast<QDnsServiceRecord*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
