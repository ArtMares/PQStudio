#include "plastiqmethod.h"
#include "plastiqqsessionmanager.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QSessionManager> 
#include <QStringList>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSessionManager::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSessionManager::plastiqMethods = {
    { "allowsErrorInteraction()", { "allowsErrorInteraction", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "allowsInteraction()", { "allowsInteraction", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cancel()", { "cancel", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "discardCommand()", { "discardCommand", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPhase2()", { "isPhase2", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "release()", { "release", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestPhase2()", { "requestPhase2", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restartCommand()", { "restartCommand", "", "QStringList", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restartHint()", { "restartHint", "", "RestartHint", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionId()", { "sessionId", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionKey()", { "sessionKey", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDiscardCommand(QStringList&)", { "setDiscardCommand", "QStringList&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setManagerProperty(QString,QStringList&)", { "setManagerProperty", "QString&,QStringList&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setManagerProperty(QString,QString)", { "setManagerProperty", "QString&,QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRestartCommand(QStringList&)", { "setRestartCommand", "QStringList&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRestartHint(enum)", { "setRestartHint", "RestartHint", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSessionManager::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSessionManager::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSessionManager::plastiqConstants = {

    /* QSessionManager::RestartHint */
   { "RestartIfRunning", QSessionManager::RestartIfRunning },
   { "RestartAnyway", QSessionManager::RestartAnyway },
   { "RestartImmediately", QSessionManager::RestartImmediately },
   { "RestartNever", QSessionManager::RestartNever },

};

QVector<PlastiQMetaObject*> PlastiQQSessionManager::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSessionManager::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSessionManager::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QSessionManager", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSessionManager::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSessionManager::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSessionManager *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSessionManager *p = new PlastiQQSessionManager();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSessionManager *p = new PlastiQQSessionManager();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSessionManager *o = sc ? Q_NULLPTR : reinterpret_cast<QSessionManager*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->allowsErrorInteraction();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->allowsInteraction();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->cancel();
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->discardCommand());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->isPhase2();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: o->release();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->requestPhase2();
                stack[0].type = PlastiQ::Void; break;
        case 7: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->restartCommand());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { qint64 _r = o->restartHint(); // HACK for RestartHint 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QString _r = o->sessionId();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { QString _r = o->sessionKey();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: o->setDiscardCommand((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setManagerProperty(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setManagerProperty(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setRestartCommand((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setRestartHint(QSessionManager::RestartHint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSessionManager *o = reinterpret_cast<QSessionManager*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSessionManager *o = reinterpret_cast<QSessionManager*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSessionManager *o = reinterpret_cast<QSessionManager*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSessionManager *o = reinterpret_cast<QSessionManager*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSessionManager::~PlastiQQSessionManager() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
