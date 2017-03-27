#include "plastiqmethod.h"
#include "plastiqqdnslookup.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QDnsLookup> 
#include <QString>
#include <QHostAddress>

QHash<QByteArray, PlastiQMethod> PlastiQQDnsLookup::plastiqConstructors = {
    { "QDnsLookup()", { "QDnsLookup", "", "QDnsLookup*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsLookup(QObject*)", { "QDnsLookup", "QObject*", "QDnsLookup*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsLookup(enum,QString)", { "QDnsLookup", "Type,QString&", "QDnsLookup*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsLookup(enum,QString,QObject*)", { "QDnsLookup", "Type,QString&,QObject*", "QDnsLookup*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsLookup(enum,QString,QHostAddress&)", { "QDnsLookup", "Type,QString&,QHostAddress&", "QDnsLookup*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDnsLookup(enum,QString,QHostAddress&,QObject*)", { "QDnsLookup", "Type,QString&,QHostAddress&,QObject*", "QDnsLookup*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsLookup::plastiqMethods = {
    { "error()", { "error", "", "Error", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFinished()", { "isFinished", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nameserver()", { "nameserver", "", "QHostAddress", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setName(QString)", { "setName", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNameserver(QHostAddress&)", { "setNameserver", "QHostAddress&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setType(enum)", { "setType", "QDnsLookup::Type", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "abort()", { "abort", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "lookup()", { "lookup", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDnsLookup::plastiqSignals = {
    { "finished()", { "finished", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "nameChanged(QString)", { "nameChanged", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "nameserverChanged(QHostAddress&)", { "nameserverChanged", "QHostAddress&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "typeChanged(enum)", { "typeChanged", "Type", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDnsLookup::plastiqProperties = {
    { "error", { "error", "long", "finished", "error" } },
    { "errorString", { "errorString", "QString", "finished", "errorString" } },
    { "name", { "name", "QString", "setName", "name" } },
    { "nameserver", { "nameserver", "QHostAddress", "setNameserver", "nameserver" } },
    { "type", { "type", "long", "setType", "type" } },

};

QHash<QByteArray, long> PlastiQQDnsLookup::plastiqConstants = {

    /* QDnsLookup::Error */
   { "NoError", QDnsLookup::NoError },
   { "ResolverError", QDnsLookup::ResolverError },
   { "OperationCancelledError", QDnsLookup::OperationCancelledError },
   { "InvalidRequestError", QDnsLookup::InvalidRequestError },
   { "InvalidReplyError", QDnsLookup::InvalidReplyError },
   { "ServerFailureError", QDnsLookup::ServerFailureError },
   { "ServerRefusedError", QDnsLookup::ServerRefusedError },
   { "NotFoundError", QDnsLookup::NotFoundError },

    /* QDnsLookup::Type */
   { "A", QDnsLookup::A },
   { "AAAA", QDnsLookup::AAAA },
   { "ANY", QDnsLookup::ANY },
   { "CNAME", QDnsLookup::CNAME },
   { "MX", QDnsLookup::MX },
   { "NS", QDnsLookup::NS },
   { "PTR", QDnsLookup::PTR },
   { "SRV", QDnsLookup::SRV },
   { "TXT", QDnsLookup::TXT },

};

QVector<PlastiQMetaObject*> PlastiQQDnsLookup::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDnsLookup::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQDnsLookup::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QDnsLookup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDnsLookup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDnsLookup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDnsLookup *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDnsLookup(); break;
        case 1: o = new QDnsLookup(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QDnsLookup(QDnsLookup::Type(stack[1].s_int64),
                    stack[2].s_string); break;
        case 3: o = new QDnsLookup(QDnsLookup::Type(stack[1].s_int64),
                    stack[2].s_string,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;
        case 4: o = new QDnsLookup(QDnsLookup::Type(stack[1].s_int64),
                    stack[2].s_string,
                    (*reinterpret_cast< QHostAddress(*) >(stack[3].s_voidp))); break;
        case 5: o = new QDnsLookup(QDnsLookup::Type(stack[1].s_int64),
                    stack[2].s_string,
                    (*reinterpret_cast< QHostAddress(*) >(stack[3].s_voidp)),
                    reinterpret_cast<QObject*>(stack[4].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDnsLookup *p = new PlastiQQDnsLookup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDnsLookup *p = new PlastiQQDnsLookup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDnsLookup *o = sc ? Q_NULLPTR : reinterpret_cast<QDnsLookup*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->isFinished();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { /* COPY OBJECT */
            QHostAddress *_r = new QHostAddress(o->nameserver());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostAddress";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->setName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setNameserver((*reinterpret_cast< QHostAddress(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setType(QDnsLookup::Type(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: o->abort();
                stack[0].type = PlastiQ::Void; break;
        case 10: o->lookup();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDnsLookup *o = reinterpret_cast<QDnsLookup*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDnsLookup::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDnsLookup::nameChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "nameChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QDnsLookup::nameserverChanged,
            [=](const QHostAddress& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QHostAddress(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QHostAddress";
                PlastiQ_activate(sender, "nameserverChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QDnsLookup::typeChanged,
            [=](QDnsLookup::Type arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Type";
                PlastiQ_activate(sender, "typeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDnsLookup *o = reinterpret_cast<QDnsLookup*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDnsLookup *o = reinterpret_cast<QDnsLookup*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDnsLookup *o = reinterpret_cast<QDnsLookup*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDnsLookup::~PlastiQQDnsLookup() {
    QDnsLookup* o = reinterpret_cast<QDnsLookup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
