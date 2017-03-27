#include "plastiqmethod.h"
#include "plastiqqdnstextrecord.h"

#include <QDnsTextRecord> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDnsTextRecord::plastiqConstructors = {
    { "QDnsTextRecord()", { "QDnsTextRecord", "", "QDnsTextRecord*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsTextRecord(QDnsTextRecord&)", { "QDnsTextRecord", "QDnsTextRecord&", "QDnsTextRecord*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsTextRecord::plastiqMethods = {
    { "name()", { "name", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QDnsTextRecord&)", { "swap", "QDnsTextRecord&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeToLive()", { "timeToLive", "", "quint32", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsTextRecord::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDnsTextRecord::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDnsTextRecord::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDnsTextRecord::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDnsTextRecord::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDnsTextRecord::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDnsTextRecord", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDnsTextRecord::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDnsTextRecord::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDnsTextRecord *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDnsTextRecord(); break;
        case 1: o = new QDnsTextRecord((*reinterpret_cast< QDnsTextRecord(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDnsTextRecord *p = new PlastiQQDnsTextRecord();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDnsTextRecord *p = new PlastiQQDnsTextRecord();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDnsTextRecord *o = sc ? Q_NULLPTR : reinterpret_cast<QDnsTextRecord*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: o->swap((*reinterpret_cast< QDnsTextRecord(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->timeToLive() | ret: `quint32` */ break;

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
        QDnsTextRecord *o = reinterpret_cast<QDnsTextRecord*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDnsTextRecord::~PlastiQQDnsTextRecord() {
    QDnsTextRecord* o = reinterpret_cast<QDnsTextRecord*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
