#include "plastiqmethod.h"
#include "plastiqquuid.h"

#include <QUuid> 
#include <QByteArray>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQUuid::plastiqConstructors = {
    { "QUuid()", { "QUuid", "", "QUuid*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUuid(long,int,int,uchar,uchar,uchar,uchar,uchar,uchar,uchar,uchar)", { "QUuid", "uint,ushort,ushort,uchar,uchar,uchar,uchar,uchar,uchar,uchar,uchar", "QUuid*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUuid(QString)", { "QUuid", "QString&", "QUuid*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUuid(QByteArray)", { "QUuid", "QByteArray&", "QUuid*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUuid(GUID&)", { "QUuid", "GUID&", "QUuid*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUuid::plastiqMethods = {
    { "isNull()", { "isNull", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toByteArray()", { "toByteArray", "", "QByteArray", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCFUUID()", { "toCFUUID", "", "CFUUIDRef", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRfc4122()", { "toRfc4122", "", "QByteArray", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "variant()", { "variant", "", "QUuid::Variant", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "version()", { "version", "", "QUuid::Version", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createUuid()", { "createUuid", "", "QUuid", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createUuidV3(QUuid&,QByteArray)", { "createUuidV3", "QUuid&,QByteArray&", "QUuid", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createUuidV3(QUuid&,QString)", { "createUuidV3", "QUuid&,QString&", "QUuid", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createUuidV5(QUuid&,QByteArray)", { "createUuidV5", "QUuid&,QByteArray&", "QUuid", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createUuidV5(QUuid&,QString)", { "createUuidV5", "QUuid&,QString&", "QUuid", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCFUUID(CFUUIDRef)", { "fromCFUUID", "CFUUIDRef", "QUuid", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRfc4122(QByteArray)", { "fromRfc4122", "QByteArray&", "QUuid", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUuid::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQUuid::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQUuid::plastiqConstants = {

    /* QUuid::Variant */
   { "VarUnknown", QUuid::VarUnknown },
   { "NCS", QUuid::NCS },
   { "DCE", QUuid::DCE },
   { "Microsoft", QUuid::Microsoft },
   { "Reserved", QUuid::Reserved },

    /* QUuid::Version */
   { "VerUnknown", QUuid::VerUnknown },
   { "Time", QUuid::Time },
   { "EmbeddedPOSIX", QUuid::EmbeddedPOSIX },
   { "Md5", QUuid::Md5 },
   { "Name", QUuid::Name },
   { "Random", QUuid::Random },
   { "Sha1", QUuid::Sha1 },

};

QVector<PlastiQMetaObject*> PlastiQQUuid::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQUuid::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQUuid::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QUuid", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUuid::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQUuid::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QUuid *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QUuid(); break;
        /*case 1: o = new QUuid(stack[1].s_long,
                    stack[2].s_int,
                    stack[3].s_int,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar); break;*/
        case 2: o = new QUuid(stack[1].s_string); break;
        case 3: o = new QUuid(stack[1].s_bytearray); break;
        case 4: o = new QUuid((*reinterpret_cast< GUID(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQUuid *p = new PlastiQQUuid();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUuid *p = new PlastiQQUuid();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QUuid *o = sc ? Q_NULLPTR : reinterpret_cast<QUuid*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QByteArray _r = o->toByteArray();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->toCFUUID() | ret: `CFUUIDRef` */ break;
        case 3: { QByteArray _r = o->toRfc4122();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 4: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { qint64 _r = o->variant(); // HACK for QUuid::Variant 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { qint64 _r = o->version(); // HACK for QUuid::Version 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { /* COPY OBJECT */
            QUuid *_r = sc ? new QUuid(QUuid::createUuid()) : new QUuid(o->createUuid());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUuid";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QUuid *_r = sc ? new QUuid(QUuid::createUuidV3((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray)) : new QUuid(o->createUuidV3((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUuid";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QUuid *_r = sc ? new QUuid(QUuid::createUuidV3((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_string)) : new QUuid(o->createUuidV3((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUuid";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QUuid *_r = sc ? new QUuid(QUuid::createUuidV5((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray)) : new QUuid(o->createUuidV5((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUuid";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QUuid *_r = sc ? new QUuid(QUuid::createUuidV5((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_string)) : new QUuid(o->createUuidV5((*reinterpret_cast< QUuid(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUuid";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: /* o->fromCFUUID(UNSUPPORTED_TYPE_CFUUIDRef) | ret: `QUuid` */ break;
        case 13: { /* COPY OBJECT */
            QUuid *_r = sc ? new QUuid(QUuid::fromRfc4122(stack[1].s_bytearray)) : new QUuid(o->fromRfc4122(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUuid";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QUuid *o = reinterpret_cast<QUuid*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQUuid::~PlastiQQUuid() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
