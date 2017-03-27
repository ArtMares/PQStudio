#include "plastiqmethod.h"
#include "plastiqqnetworkconfigurationmanager.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QNetworkConfigurationManager> 
#include <QNetworkConfiguration>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkConfigurationManager::plastiqConstructors = {
    { "QNetworkConfigurationManager()", { "QNetworkConfigurationManager", "", "QNetworkConfigurationManager*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkConfigurationManager(QObject*)", { "QNetworkConfigurationManager", "QObject*", "QNetworkConfigurationManager*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkConfigurationManager::plastiqMethods = {
    { "capabilities()", { "capabilities", "", "QNetworkConfigurationManager::Capabilities", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "configurationFromIdentifier(QString)", { "configurationFromIdentifier", "QString&", "QNetworkConfiguration", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultConfiguration()", { "defaultConfiguration", "", "QNetworkConfiguration", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isOnline()", { "isOnline", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateConfigurations()", { "updateConfigurations", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkConfigurationManager::plastiqSignals = {
    { "configurationAdded(QNetworkConfiguration&)", { "configurationAdded", "QNetworkConfiguration&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "configurationChanged(QNetworkConfiguration&)", { "configurationChanged", "QNetworkConfiguration&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "configurationRemoved(QNetworkConfiguration&)", { "configurationRemoved", "QNetworkConfiguration&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "onlineStateChanged(bool)", { "onlineStateChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "updateCompleted()", { "updateCompleted", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkConfigurationManager::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkConfigurationManager::plastiqConstants = {

    /* QNetworkConfigurationManager::Capability */
   { "CanStartAndStopInterfaces", QNetworkConfigurationManager::CanStartAndStopInterfaces },
   { "DirectConnectionRouting", QNetworkConfigurationManager::DirectConnectionRouting },
   { "SystemSessionSupport", QNetworkConfigurationManager::SystemSessionSupport },
   { "ApplicationLevelRoaming", QNetworkConfigurationManager::ApplicationLevelRoaming },
   { "ForcedRoaming", QNetworkConfigurationManager::ForcedRoaming },
   { "DataStatistics", QNetworkConfigurationManager::DataStatistics },
   { "NetworkSessionRequired", QNetworkConfigurationManager::NetworkSessionRequired },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkConfigurationManager::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQNetworkConfigurationManager::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQNetworkConfigurationManager::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QNetworkConfigurationManager", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkConfigurationManager::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkConfigurationManager::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkConfigurationManager *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkConfigurationManager(); break;
        case 1: o = new QNetworkConfigurationManager(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkConfigurationManager *p = new PlastiQQNetworkConfigurationManager();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkConfigurationManager *p = new PlastiQQNetworkConfigurationManager();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkConfigurationManager *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkConfigurationManager*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->capabilities(); // HACK for QNetworkConfigurationManager::Capabilities 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->configurationFromIdentifier(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->defaultConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { bool _r = o->isOnline();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->updateConfigurations();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QNetworkConfigurationManager *o = reinterpret_cast<QNetworkConfigurationManager*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QNetworkConfigurationManager::configurationAdded,
            [=](const QNetworkConfiguration& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QNetworkConfiguration(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QNetworkConfiguration";
                PlastiQ_activate(sender, "configurationAdded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QNetworkConfigurationManager::configurationChanged,
            [=](const QNetworkConfiguration& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QNetworkConfiguration(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QNetworkConfiguration";
                PlastiQ_activate(sender, "configurationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QNetworkConfigurationManager::configurationRemoved,
            [=](const QNetworkConfiguration& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QNetworkConfiguration(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QNetworkConfiguration";
                PlastiQ_activate(sender, "configurationRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QNetworkConfigurationManager::onlineStateChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "onlineStateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QNetworkConfigurationManager::updateCompleted,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "updateCompleted", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QNetworkConfigurationManager *o = reinterpret_cast<QNetworkConfigurationManager*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QNetworkConfigurationManager *o = reinterpret_cast<QNetworkConfigurationManager*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QNetworkConfigurationManager *o = reinterpret_cast<QNetworkConfigurationManager*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQNetworkConfigurationManager::~PlastiQQNetworkConfigurationManager() {
    QNetworkConfigurationManager* o = reinterpret_cast<QNetworkConfigurationManager*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
