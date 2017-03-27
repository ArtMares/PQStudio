#include "plastiqmethod.h"
#include "plastiqqwebenginefullscreenrequest.h"

#include <QWebEngineFullScreenRequest> 
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineFullScreenRequest::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineFullScreenRequest::plastiqMethods = {
    { "accept()", { "accept", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "origin()", { "origin", "", "const QUrl&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reject()", { "reject", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toggleOn()", { "toggleOn", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWebEngineFullScreenRequest::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWebEngineFullScreenRequest::plastiqProperties = {
    { "origin", { "origin", "QUrl", "", "origin" } },
    { "toggleOn", { "toggleOn", "bool", "", "toggleOn" } },

};

QHash<QByteArray, long> PlastiQQWebEngineFullScreenRequest::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWebEngineFullScreenRequest::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWebEngineFullScreenRequest::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWebEngineFullScreenRequest::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWebEngineFullScreenRequest", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWebEngineFullScreenRequest::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWebEngineFullScreenRequest::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWebEngineFullScreenRequest *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWebEngineFullScreenRequest *p = new PlastiQQWebEngineFullScreenRequest();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWebEngineFullScreenRequest *p = new PlastiQQWebEngineFullScreenRequest();
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
        QWebEngineFullScreenRequest *o = sc ? Q_NULLPTR : reinterpret_cast<QWebEngineFullScreenRequest*>(object->plastiq_data());

        switch(id) {
        case 0: o->accept();
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->origin());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->reject();
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r = o->toggleOn();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QWebEngineFullScreenRequest *o = reinterpret_cast<QWebEngineFullScreenRequest*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWebEngineFullScreenRequest::~PlastiQQWebEngineFullScreenRequest() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
