#include "plastiqmethod.h"
#include "plastiqqtimezone.h"

#include <QTimeZone> 
#include <QString>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQTimeZone::plastiqConstructors = {
    { "QTimeZone()", { "QTimeZone", "", "QTimeZone*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeZone(QByteArray)", { "QTimeZone", "QByteArray&", "QTimeZone*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeZone(int)", { "QTimeZone", "int", "QTimeZone*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeZone(QByteArray,int,QString,QString)", { "QTimeZone", "QByteArray&,int,QString&,QString&", "QTimeZone*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeZone(QByteArray,int,QString,QString,enum)", { "QTimeZone", "QByteArray&,int,QString&,QString&,QLocale::Country", "QTimeZone*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeZone(QByteArray,int,QString,QString,enum,QString)", { "QTimeZone", "QByteArray&,int,QString&,QString&,QLocale::Country,QString&", "QTimeZone*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeZone(QTimeZone&)", { "QTimeZone", "QTimeZone&", "QTimeZone*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimeZone::plastiqMethods = {
    { "abbreviation(QDateTime&)", { "abbreviation", "QDateTime&", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "comment()", { "comment", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "country()", { "country", "", "QLocale::Country", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "daylightTimeOffset(QDateTime&)", { "daylightTimeOffset", "QDateTime&", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayName(QDateTime&)", { "displayName", "QDateTime&", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayName(QDateTime&,enum)", { "displayName", "QDateTime&,QTimeZone::NameType", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayName(QDateTime&,enum,QLocale&)", { "displayName", "QDateTime&,QTimeZone::NameType,QLocale&", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayName(enum)", { "displayName", "QTimeZone::TimeType", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayName(enum,enum)", { "displayName", "QTimeZone::TimeType,QTimeZone::NameType", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayName(enum,enum,QLocale&)", { "displayName", "QTimeZone::TimeType,QTimeZone::NameType,QLocale&", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasDaylightTime()", { "hasDaylightTime", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasTransitions()", { "hasTransitions", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "id()", { "id", "", "QByteArray", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDaylightTime(QDateTime&)", { "isDaylightTime", "QDateTime&", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextTransition(QDateTime&)", { "nextTransition", "QDateTime&", "OffsetData", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offsetData(QDateTime&)", { "offsetData", "QDateTime&", "OffsetData", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offsetFromUtc(QDateTime&)", { "offsetFromUtc", "QDateTime&", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "previousTransition(QDateTime&)", { "previousTransition", "QDateTime&", "OffsetData", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardTimeOffset(QDateTime&)", { "standardTimeOffset", "QDateTime&", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QTimeZone&)", { "swap", "QTimeZone&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transitions(QDateTime&,QDateTime&)", { "transitions", "QDateTime&,QDateTime&", "OffsetDataList", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ianaIdToWindowsId(QByteArray)", { "ianaIdToWindowsId", "QByteArray&", "QByteArray", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isTimeZoneIdAvailable(QByteArray)", { "isTimeZoneIdAvailable", "QByteArray&", "bool", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "systemTimeZone()", { "systemTimeZone", "", "QTimeZone", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "systemTimeZoneId()", { "systemTimeZoneId", "", "QByteArray", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "utc()", { "utc", "", "QTimeZone", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowsIdToDefaultIanaId(QByteArray)", { "windowsIdToDefaultIanaId", "QByteArray&", "QByteArray", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowsIdToDefaultIanaId(QByteArray,enum)", { "windowsIdToDefaultIanaId", "QByteArray&,QLocale::Country", "QByteArray", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimeZone::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTimeZone::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTimeZone::plastiqConstants = {

    /* QTimeZone::NameType */
   { "DefaultName", QTimeZone::DefaultName },
   { "LongName", QTimeZone::LongName },
   { "ShortName", QTimeZone::ShortName },
   { "OffsetName", QTimeZone::OffsetName },

    /* QTimeZone::TimeType */
   { "StandardTime", QTimeZone::StandardTime },
   { "DaylightTime", QTimeZone::DaylightTime },
   { "GenericTime", QTimeZone::GenericTime },

};

QVector<PlastiQMetaObject*> PlastiQQTimeZone::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTimeZone::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTimeZone::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTimeZone", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTimeZone::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTimeZone::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTimeZone *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTimeZone(); break;
        case 1: o = new QTimeZone(stack[1].s_bytearray); break;
        case 2: o = new QTimeZone(stack[1].s_int); break;
        case 3: o = new QTimeZone(stack[1].s_bytearray,
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_string); break;
        case 4: o = new QTimeZone(stack[1].s_bytearray,
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_string,
                    QLocale::Country(stack[5].s_int64)); break;
        case 5: o = new QTimeZone(stack[1].s_bytearray,
                    stack[2].s_int,
                    stack[3].s_string,
                    stack[4].s_string,
                    QLocale::Country(stack[5].s_int64),
                    stack[6].s_string); break;
        case 6: o = new QTimeZone((*reinterpret_cast< QTimeZone(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTimeZone *p = new PlastiQQTimeZone();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTimeZone *p = new PlastiQQTimeZone();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 29) {
            id -= 29;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTimeZone *o = sc ? Q_NULLPTR : reinterpret_cast<QTimeZone*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->abbreviation((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->comment();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { qint64 _r = o->country(); // HACK for QLocale::Country 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { int _r = o->daylightTimeOffset((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QString _r = o->displayName((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = o->displayName((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    QTimeZone::NameType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->displayName((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    QTimeZone::NameType(stack[2].s_int64),
                    (*reinterpret_cast< QLocale(*) >(stack[3].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { QString _r = o->displayName(QTimeZone::TimeType(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->displayName(QTimeZone::TimeType(stack[1].s_int64),
                    QTimeZone::NameType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = o->displayName(QTimeZone::TimeType(stack[1].s_int64),
                    QTimeZone::NameType(stack[2].s_int64),
                    (*reinterpret_cast< QLocale(*) >(stack[3].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { bool _r = o->hasDaylightTime();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->hasTransitions();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { QByteArray _r = o->id();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 13: { bool _r = o->isDaylightTime((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: /* UNSUPPORTED_RETURN_VALUE o->nextTransition((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp))) | ret: `OffsetData` */ break;
        case 16: /* UNSUPPORTED_RETURN_VALUE o->offsetData((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp))) | ret: `OffsetData` */ break;
        case 17: { int _r = o->offsetFromUtc((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: /* UNSUPPORTED_RETURN_VALUE o->previousTransition((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp))) | ret: `OffsetData` */ break;
        case 19: { int _r = o->standardTimeOffset((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: o->swap((*reinterpret_cast< QTimeZone(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: /* o->transitions((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QDateTime(*) >(stack[2].s_voidp))) | ret: `OffsetDataList` (INTERNAL CLASS) */ break;
        case 22: { QByteArray _r = sc ? QTimeZone::ianaIdToWindowsId(stack[1].s_bytearray) : o->ianaIdToWindowsId(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 23: { bool _r = sc ? QTimeZone::isTimeZoneIdAvailable(stack[1].s_bytearray) : o->isTimeZoneIdAvailable(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { /* COPY OBJECT */
            QTimeZone *_r = sc ? new QTimeZone(QTimeZone::systemTimeZone()) : new QTimeZone(o->systemTimeZone());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTimeZone";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { QByteArray _r = sc ? QTimeZone::systemTimeZoneId() : o->systemTimeZoneId();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 26: { /* COPY OBJECT */
            QTimeZone *_r = sc ? new QTimeZone(QTimeZone::utc()) : new QTimeZone(o->utc());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTimeZone";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { QByteArray _r = sc ? QTimeZone::windowsIdToDefaultIanaId(stack[1].s_bytearray) : o->windowsIdToDefaultIanaId(stack[1].s_bytearray);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 28: { QByteArray _r = sc ? QTimeZone::windowsIdToDefaultIanaId(stack[1].s_bytearray,
                    QLocale::Country(stack[2].s_int64)) : o->windowsIdToDefaultIanaId(stack[1].s_bytearray,
                    QLocale::Country(stack[2].s_int64));
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
        QTimeZone *o = reinterpret_cast<QTimeZone*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTimeZone::~PlastiQQTimeZone() {
    QTimeZone* o = reinterpret_cast<QTimeZone*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
