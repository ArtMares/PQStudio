#include "plastiqmethod.h"
#include "plastiqqwebenginescriptcollection.h"

#include <QWebEngineScriptCollection> 
#include <QWebEngineScript>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineScriptCollection::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineScriptCollection::plastiqMethods = {
    { "clear()", { "clear", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QWebEngineScript&)", { "contains", "QWebEngineScript&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findScript(QString)", { "findScript", "QString&", "QWebEngineScript", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(QWebEngineScript&)", { "insert", "QWebEngineScript&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(QList<QWebEngineScript>&)", { "insert", "QList<QWebEngineScript>&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QWebEngineScript&)", { "remove", "QWebEngineScript&", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineScriptCollection::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineScriptCollection::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWebEngineScriptCollection::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineScriptCollection::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWebEngineScriptCollection::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWebEngineScriptCollection::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWebEngineScriptCollection", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineScriptCollection::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineScriptCollection::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineScriptCollection *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineScriptCollection *p = new PlastiQQWebEngineScriptCollection();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineScriptCollection *p = new PlastiQQWebEngineScriptCollection();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWebEngineScriptCollection *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineScriptCollection*>(object->plastiq_data());

        switch(id) {
        case 0: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->contains((*reinterpret_cast< QWebEngineScript(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QWebEngineScript *_r = new QWebEngineScript(o->findScript(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QWebEngineScript";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->insert((*reinterpret_cast< QWebEngineScript(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->insert((*reinterpret_cast< QList<QWebEngineScript>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->remove((*reinterpret_cast< QWebEngineScript(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QWebEngineScriptCollection *o = reinterpret_cast<QWebEngineScriptCollection*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWebEngineScriptCollection::~PlastiQQWebEngineScriptCollection() {
    QWebEngineScriptCollection* o = reinterpret_cast<QWebEngineScriptCollection*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
