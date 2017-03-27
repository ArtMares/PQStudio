#include "plastiqmethod.h"
#include "plastiqqsslpresharedkeyauthenticator.h"

#include <QSslPreSharedKeyAuthenticator> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQSslPreSharedKeyAuthenticator::plastiqConstructors = {
    { "QSslPreSharedKeyAuthenticator()", { "QSslPreSharedKeyAuthenticator", "", "QSslPreSharedKeyAuthenticator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator&)", { "QSslPreSharedKeyAuthenticator", "QSslPreSharedKeyAuthenticator&", "QSslPreSharedKeyAuthenticator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslPreSharedKeyAuthenticator::plastiqMethods = {
    { "identity()", { "identity", "", "QByteArray", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "identityHint()", { "identityHint", "", "QByteArray", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumIdentityLength()", { "maximumIdentityLength", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumPreSharedKeyLength()", { "maximumPreSharedKeyLength", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preSharedKey()", { "preSharedKey", "", "QByteArray", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIdentity(QByteArray)", { "setIdentity", "QByteArray&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPreSharedKey(QByteArray)", { "setPreSharedKey", "QByteArray&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QSslPreSharedKeyAuthenticator&)", { "swap", "QSslPreSharedKeyAuthenticator&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslPreSharedKeyAuthenticator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslPreSharedKeyAuthenticator::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslPreSharedKeyAuthenticator::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSslPreSharedKeyAuthenticator::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslPreSharedKeyAuthenticator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslPreSharedKeyAuthenticator::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslPreSharedKeyAuthenticator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslPreSharedKeyAuthenticator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslPreSharedKeyAuthenticator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslPreSharedKeyAuthenticator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslPreSharedKeyAuthenticator(); break;
        case 1: o = new QSslPreSharedKeyAuthenticator((*reinterpret_cast< QSslPreSharedKeyAuthenticator(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslPreSharedKeyAuthenticator *p = new PlastiQQSslPreSharedKeyAuthenticator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslPreSharedKeyAuthenticator *p = new PlastiQQSslPreSharedKeyAuthenticator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslPreSharedKeyAuthenticator *o = sc ? Q_NULLPTR : reinterpret_cast<QSslPreSharedKeyAuthenticator*>(object->plastiq_data());

        switch(id) {
        case 0: { QByteArray _r = o->identity();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 1: { QByteArray _r = o->identityHint();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 2: { int _r = o->maximumIdentityLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->maximumPreSharedKeyLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QByteArray _r = o->preSharedKey();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 5: o->setIdentity(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setPreSharedKey(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->swap((*reinterpret_cast< QSslPreSharedKeyAuthenticator(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

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
        QSslPreSharedKeyAuthenticator *o = reinterpret_cast<QSslPreSharedKeyAuthenticator*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslPreSharedKeyAuthenticator::~PlastiQQSslPreSharedKeyAuthenticator() {
    QSslPreSharedKeyAuthenticator* o = reinterpret_cast<QSslPreSharedKeyAuthenticator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
