#include "plastiqmethod.h"
#include "plastiqqnetworksession.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QNetworkSession> 
#include <QNetworkConfiguration>
#include <QString>
#include <QNetworkInterface>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkSession::plastiqConstructors = {
    { "QNetworkSession(QNetworkConfiguration&)", { "QNetworkSession", "QNetworkConfiguration&", "QNetworkSession*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkSession(QNetworkConfiguration&,QObject*)", { "QNetworkSession", "QNetworkConfiguration&,QObject*", "QNetworkSession*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkSession::plastiqMethods = {
    { "activeTime()", { "activeTime", "", "quint64", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesReceived()", { "bytesReceived", "", "quint64", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesWritten()", { "bytesWritten", "", "quint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "configuration()", { "configuration", "", "QNetworkConfiguration", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "SessionError", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "interface()", { "interface", "", "QNetworkInterface", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isOpen()", { "isOpen", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionProperty(QString)", { "sessionProperty", "QString&", "QVariant", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSessionProperty(QString,QVariant)", { "setSessionProperty", "QString&,QVariant&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "usagePolicies()", { "usagePolicies", "", "QNetworkSession::UsagePolicies", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForOpened()", { "waitForOpened", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "waitForOpened(int)", { "waitForOpened", "int", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "accept()", { "accept", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "close()", { "close", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "ignore()", { "ignore", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "migrate()", { "migrate", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "open()", { "open", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reject()", { "reject", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkSession::plastiqSignals = {
    { "closed()", { "closed", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QNetworkSession::SessionError", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "newConfigurationActivated()", { "newConfigurationActivated", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "opened()", { "opened", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "preferredConfigurationChanged(QNetworkConfiguration&,bool)", { "preferredConfigurationChanged", "QNetworkConfiguration&,bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QNetworkSession::State", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "usagePoliciesChanged(enum)", { "usagePoliciesChanged", "QNetworkSession::UsagePolicies", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkSession::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkSession::plastiqConstants = {

    /* QNetworkSession::SessionError */
   { "UnknownSessionError", QNetworkSession::UnknownSessionError },
   { "SessionAbortedError", QNetworkSession::SessionAbortedError },
   { "RoamingError", QNetworkSession::RoamingError },
   { "OperationNotSupportedError", QNetworkSession::OperationNotSupportedError },
   { "InvalidConfigurationError", QNetworkSession::InvalidConfigurationError },

    /* QNetworkSession::State */
   { "Invalid", QNetworkSession::Invalid },
   { "NotAvailable", QNetworkSession::NotAvailable },
   { "Connecting", QNetworkSession::Connecting },
   { "Connected", QNetworkSession::Connected },
   { "Closing", QNetworkSession::Closing },
   { "Disconnected", QNetworkSession::Disconnected },
   { "Roaming", QNetworkSession::Roaming },

    /* QNetworkSession::UsagePolicy */
   { "NoPolicy", QNetworkSession::NoPolicy },
   { "NoBackgroundTrafficPolicy", QNetworkSession::NoBackgroundTrafficPolicy },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkSession::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQNetworkSession::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQNetworkSession::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QNetworkSession", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkSession::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkSession::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkSession *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkSession((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp))); break;
        case 1: o = new QNetworkSession((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkSession *p = new PlastiQQNetworkSession();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkSession *p = new PlastiQQNetworkSession();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkSession *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkSession*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->activeTime() | ret: `quint64` */ break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->bytesReceived() | ret: `quint64` */ break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->bytesWritten() | ret: `quint64` */ break;
        case 3: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->configuration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->error(); // HACK for SessionError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { /* COPY OBJECT */
            QNetworkInterface *_r = new QNetworkInterface(o->interface());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkInterface";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { bool _r = o->isOpen();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->sessionProperty(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: o->setSessionProperty(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 10: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { qint64 _r = o->usagePolicies(); // HACK for QNetworkSession::UsagePolicies 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 12: { bool _r = o->waitForOpened();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->waitForOpened(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: o->accept();
                stack[0].type = PlastiQ::Void; break;
        case 15: o->close();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->ignore();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->migrate();
                stack[0].type = PlastiQ::Void; break;
        case 18: o->open();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->reject();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QNetworkSession *o = reinterpret_cast<QNetworkSession*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QNetworkSession::closed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "closed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QNetworkSession::*)(QNetworkSession::SessionError)>(&QNetworkSession::error),
            [=](QNetworkSession::SessionError arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QNetworkSession::SessionError";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QNetworkSession::newConfigurationActivated,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "newConfigurationActivated", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QNetworkSession::opened,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "opened", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QNetworkSession::preferredConfigurationChanged,
            [=](const QNetworkConfiguration& arg0, bool arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QNetworkConfiguration(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QNetworkConfiguration";
                    cstack[1].s_bool = arg1;
                    cstack[1].type = PlastiQ::Bool; cstack[1].name = "bool";
                PlastiQ_activate(sender, "preferredConfigurationChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QNetworkSession::stateChanged,
            [=](QNetworkSession::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QNetworkSession::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QNetworkSession::usagePoliciesChanged,
            [=](QNetworkSession::UsagePolicies arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QNetworkSession::UsagePolicies";
                PlastiQ_activate(sender, "usagePoliciesChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QNetworkSession *o = reinterpret_cast<QNetworkSession*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QNetworkSession *o = reinterpret_cast<QNetworkSession*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QNetworkSession *o = reinterpret_cast<QNetworkSession*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQNetworkSession::~PlastiQQNetworkSession() {
    QNetworkSession* o = reinterpret_cast<QNetworkSession*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
