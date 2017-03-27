#include "plastiqmethod.h"
#include "plastiqqwebenginescript.h"

#include <QWebEngineScript> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineScript::plastiqConstructors = {
    { "QWebEngineScript()", { "QWebEngineScript", "", "QWebEngineScript*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWebEngineScript(QWebEngineScript&)", { "QWebEngineScript", "QWebEngineScript&", "QWebEngineScript*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineScript::plastiqMethods = {
    { "injectionPoint()", { "injectionPoint", "", "InjectionPoint", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "runsOnSubFrames()", { "runsOnSubFrames", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInjectionPoint(enum)", { "setInjectionPoint", "InjectionPoint", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setName(QString)", { "setName", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRunsOnSubFrames(bool)", { "setRunsOnSubFrames", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSourceCode(QString)", { "setSourceCode", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWorldId(int)", { "setWorldId", "quint32", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sourceCode()", { "sourceCode", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QWebEngineScript&)", { "swap", "QWebEngineScript&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "worldId()", { "worldId", "", "quint32", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineScript::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineScript::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineScript::plastiqConstants = {

    /* QWebEngineScript::InjectionPoint */
   { "Deferred", QWebEngineScript::Deferred },
   { "DocumentReady", QWebEngineScript::DocumentReady },
   { "DocumentCreation", QWebEngineScript::DocumentCreation },

    /* QWebEngineScript::ScriptWorldId */
   { "MainWorld", QWebEngineScript::MainWorld },
   { "ApplicationWorld", QWebEngineScript::ApplicationWorld },
   { "UserWorld", QWebEngineScript::UserWorld },

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineScript::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWebEngineScript::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWebEngineScript::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWebEngineScript", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineScript::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineScript::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineScript *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWebEngineScript(); break;
        case 1: o = new QWebEngineScript((*reinterpret_cast< QWebEngineScript(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineScript *p = new PlastiQQWebEngineScript();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineScript *p = new PlastiQQWebEngineScript();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineScript *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineScript*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->injectionPoint(); // HACK for InjectionPoint 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r = o->runsOnSubFrames();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->setInjectionPoint(QWebEngineScript::InjectionPoint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setRunsOnSubFrames(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setSourceCode(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setWorldId(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: { QString _r = o->sourceCode();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: o->swap((*reinterpret_cast< QWebEngineScript(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: /* UNSUPPORTED_RETURN_VALUE o->worldId() | ret: `quint32` */ break;

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
        QWebEngineScript *o = reinterpret_cast<QWebEngineScript*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWebEngineScript::~PlastiQQWebEngineScript() {
    QWebEngineScript* o = reinterpret_cast<QWebEngineScript*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
