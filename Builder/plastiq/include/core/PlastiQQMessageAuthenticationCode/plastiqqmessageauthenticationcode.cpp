#include "plastiqmethod.h"
#include "plastiqqmessageauthenticationcode.h"

#include <QMessageAuthenticationCode> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQMessageAuthenticationCode::plastiqConstructors = {
    { "QMessageAuthenticationCode(enum)", { "QMessageAuthenticationCode", "QCryptographicHash::Algorithm", "QMessageAuthenticationCode*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMessageAuthenticationCode(enum,QByteArray)", { "QMessageAuthenticationCode", "QCryptographicHash::Algorithm,QByteArray&", "QMessageAuthenticationCode*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMessageAuthenticationCode::plastiqMethods = {
    { "addData(const char*,int)", { "addData", "char*,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addData(QByteArray)", { "addData", "QByteArray&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addData(QIODevice*)", { "addData", "QIODevice*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "result()", { "result", "", "QByteArray", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKey(QByteArray)", { "setKey", "QByteArray&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hash(QByteArray,QByteArray,enum)", { "hash", "QByteArray&,QByteArray&,QCryptographicHash::Algorithm", "QByteArray", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMessageAuthenticationCode::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMessageAuthenticationCode::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMessageAuthenticationCode::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMessageAuthenticationCode::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMessageAuthenticationCode::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMessageAuthenticationCode::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMessageAuthenticationCode", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMessageAuthenticationCode::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMessageAuthenticationCode::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMessageAuthenticationCode *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMessageAuthenticationCode(QCryptographicHash::Algorithm(stack[1].s_int64)); break;
        case 1: o = new QMessageAuthenticationCode(QCryptographicHash::Algorithm(stack[1].s_int64),
                    stack[2].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMessageAuthenticationCode *p = new PlastiQQMessageAuthenticationCode();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMessageAuthenticationCode *p = new PlastiQQMessageAuthenticationCode();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMessageAuthenticationCode *o = sc ? Q_NULLPTR : reinterpret_cast<QMessageAuthenticationCode*>(object->plastiq_data());

        switch(id) {
        case 0: o->addData(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addData(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->addData(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 4: { QByteArray _r = o->result();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 5: o->setKey(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 6: { QByteArray _r = sc ? QMessageAuthenticationCode::hash(stack[1].s_bytearray,
                    stack[2].s_bytearray,
                    QCryptographicHash::Algorithm(stack[3].s_int64)) : o->hash(stack[1].s_bytearray,
                    stack[2].s_bytearray,
                    QCryptographicHash::Algorithm(stack[3].s_int64));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;

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
        QMessageAuthenticationCode *o = reinterpret_cast<QMessageAuthenticationCode*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMessageAuthenticationCode::~PlastiQQMessageAuthenticationCode() {
    QMessageAuthenticationCode* o = reinterpret_cast<QMessageAuthenticationCode*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
