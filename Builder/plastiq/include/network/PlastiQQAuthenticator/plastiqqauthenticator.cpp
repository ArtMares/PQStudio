#include "plastiqmethod.h"
#include "plastiqqauthenticator.h"

#include <QAuthenticator> 
#include <QVariant>
#include <QVariantHash>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAuthenticator::plastiqConstructors = {
    { "QAuthenticator()", { "QAuthenticator", "", "QAuthenticator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAuthenticator(QAuthenticator&)", { "QAuthenticator", "QAuthenticator&", "QAuthenticator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAuthenticator::plastiqMethods = {
    { "isNull()", { "isNull", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "option(QString)", { "option", "QString&", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "QVariantHash", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "password()", { "password", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "realm()", { "realm", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(QString,QVariant)", { "setOption", "QString&,QVariant&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPassword(QString)", { "setPassword", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUser(QString)", { "setUser", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "user()", { "user", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAuthenticator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAuthenticator::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAuthenticator::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAuthenticator::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAuthenticator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAuthenticator::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAuthenticator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAuthenticator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAuthenticator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAuthenticator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAuthenticator(); break;
        case 1: o = new QAuthenticator((*reinterpret_cast< QAuthenticator(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAuthenticator *p = new PlastiQQAuthenticator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAuthenticator *p = new PlastiQQAuthenticator();
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
        QAuthenticator *o = sc ? Q_NULLPTR : reinterpret_cast<QAuthenticator*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->option(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->options() | ret: `QVariantHash` */ break;
        case 3: { QString _r = o->password();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = o->realm();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: o->setOption(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setPassword(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setUser(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: { QString _r = o->user();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QAuthenticator *o = reinterpret_cast<QAuthenticator*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAuthenticator::~PlastiQQAuthenticator() {
    QAuthenticator* o = reinterpret_cast<QAuthenticator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
