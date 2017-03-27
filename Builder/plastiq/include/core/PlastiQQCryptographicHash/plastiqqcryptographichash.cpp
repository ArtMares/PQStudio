#include "plastiqmethod.h"
#include "plastiqqcryptographichash.h"

#include <QCryptographicHash> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQCryptographicHash::plastiqConstructors = {
    { "QCryptographicHash(enum)", { "QCryptographicHash", "Algorithm", "QCryptographicHash*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCryptographicHash::plastiqMethods = {
    { "addData(const char*,int)", { "addData", "char*,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addData(QByteArray)", { "addData", "QByteArray&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addData(QIODevice*)", { "addData", "QIODevice*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "result()", { "result", "", "QByteArray", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hash(QByteArray,enum)", { "hash", "QByteArray&,Algorithm", "QByteArray", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCryptographicHash::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCryptographicHash::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCryptographicHash::plastiqConstants = {

    /* QCryptographicHash::Algorithm */
   { "Md4", QCryptographicHash::Md4 },
   { "Md5", QCryptographicHash::Md5 },
   { "Sha1", QCryptographicHash::Sha1 },
   { "Sha224", QCryptographicHash::Sha224 },
   { "Sha256", QCryptographicHash::Sha256 },
   { "Sha384", QCryptographicHash::Sha384 },
   { "Sha512", QCryptographicHash::Sha512 },
   { "Sha3_224", QCryptographicHash::Sha3_224 },
   { "Sha3_256", QCryptographicHash::Sha3_256 },
   { "Sha3_384", QCryptographicHash::Sha3_384 },
   { "Sha3_512", QCryptographicHash::Sha3_512 },

};

QVector<PlastiQMetaObject*> PlastiQQCryptographicHash::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCryptographicHash::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCryptographicHash::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCryptographicHash", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCryptographicHash::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCryptographicHash::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCryptographicHash *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCryptographicHash(QCryptographicHash::Algorithm(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCryptographicHash *p = new PlastiQQCryptographicHash();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCryptographicHash *p = new PlastiQQCryptographicHash();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCryptographicHash *o = sc ? Q_NULLPTR : reinterpret_cast<QCryptographicHash*>(object->plastiq_data());

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
        case 5: { QByteArray _r = sc ? QCryptographicHash::hash(stack[1].s_bytearray,
                    QCryptographicHash::Algorithm(stack[2].s_int64)) : o->hash(stack[1].s_bytearray,
                    QCryptographicHash::Algorithm(stack[2].s_int64));
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
        QCryptographicHash *o = reinterpret_cast<QCryptographicHash*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCryptographicHash::~PlastiQQCryptographicHash() {
    QCryptographicHash* o = reinterpret_cast<QCryptographicHash*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
