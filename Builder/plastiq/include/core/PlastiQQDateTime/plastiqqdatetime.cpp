#include "plastiqmethod.h"
#include "plastiqqdatetime.h"

#include <QDateTime> 
#include <QDate>
#include <QTime>
#include <QTimeZone>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDateTime::plastiqConstructors = {
    { "QDateTime()", { "QDateTime", "", "QDateTime*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTime(QDate&)", { "QDateTime", "QDate&", "QDateTime*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTime(QDate&,QTime&)", { "QDateTime", "QDate&,QTime&", "QDateTime*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTime(QDate&,QTime&,enum)", { "QDateTime", "QDate&,QTime&,Qt::TimeSpec", "QDateTime*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTime(QDate&,QTime&,enum,int)", { "QDateTime", "QDate&,QTime&,Qt::TimeSpec,int", "QDateTime*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTime(QDate&,QTime&,QTimeZone&)", { "QDateTime", "QDate&,QTime&,QTimeZone&", "QDateTime*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTime(QDateTime&)", { "QDateTime", "QDateTime&", "QDateTime*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTime(QDateTime&&)", { "QDateTime", "QDateTime&&", "QDateTime*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateTime::plastiqMethods = {
    { "addDays(long)", { "addDays", "qint64", "QDateTime", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMSecs(long)", { "addMSecs", "qint64", "QDateTime", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMonths(int)", { "addMonths", "int", "QDateTime", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSecs(long)", { "addSecs", "qint64", "QDateTime", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addYears(int)", { "addYears", "int", "QDateTime", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "date()", { "date", "", "QDate", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "daysTo(QDateTime&)", { "daysTo", "QDateTime&", "qint64", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDaylightTime()", { "isDaylightTime", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "msecsTo(QDateTime&)", { "msecsTo", "QDateTime&", "qint64", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offsetFromUtc()", { "offsetFromUtc", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "secsTo(QDateTime&)", { "secsTo", "QDateTime&", "qint64", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDate(QDate&)", { "setDate", "QDate&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMSecsSinceEpoch(long)", { "setMSecsSinceEpoch", "qint64", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOffsetFromUtc(int)", { "setOffsetFromUtc", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSecsSinceEpoch(long)", { "setSecsSinceEpoch", "qint64", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTime(QTime&)", { "setTime", "QTime&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimeSpec(enum)", { "setTimeSpec", "Qt::TimeSpec", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimeZone(QTimeZone&)", { "setTimeZone", "QTimeZone&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QDateTime&)", { "swap", "QDateTime&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "time()", { "time", "", "QTime", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeSpec()", { "timeSpec", "", "Qt::TimeSpec", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeZone()", { "timeZone", "", "QTimeZone", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timeZoneAbbreviation()", { "timeZoneAbbreviation", "", "QString", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCFDate()", { "toCFDate", "", "CFDateRef", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toLocalTime()", { "toLocalTime", "", "QDateTime", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toMSecsSinceEpoch()", { "toMSecsSinceEpoch", "", "qint64", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toOffsetFromUtc(int)", { "toOffsetFromUtc", "int", "QDateTime", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toSecsSinceEpoch()", { "toSecsSinceEpoch", "", "qint64", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QString)", { "toString", "QString&", "QString", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(enum)", { "toString", "Qt::DateFormat", "QString", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTimeSpec(enum)", { "toTimeSpec", "Qt::TimeSpec", "QDateTime", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTimeZone(QTimeZone&)", { "toTimeZone", "QTimeZone&", "QDateTime", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUTC()", { "toUTC", "", "QDateTime", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentDateTime()", { "currentDateTime", "", "QDateTime", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "currentDateTimeUtc()", { "currentDateTimeUtc", "", "QDateTime", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "currentMSecsSinceEpoch()", { "currentMSecsSinceEpoch", "", "qint64", 38, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "currentSecsSinceEpoch()", { "currentSecsSinceEpoch", "", "qint64", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCFDate(CFDateRef)", { "fromCFDate", "CFDateRef", "QDateTime", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromMSecsSinceEpoch(long)", { "fromMSecsSinceEpoch", "qint64", "QDateTime", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromMSecsSinceEpoch(long,enum)", { "fromMSecsSinceEpoch", "qint64,Qt::TimeSpec", "QDateTime", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromMSecsSinceEpoch(long,enum,int)", { "fromMSecsSinceEpoch", "qint64,Qt::TimeSpec,int", "QDateTime", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromMSecsSinceEpoch(long,QTimeZone&)", { "fromMSecsSinceEpoch", "qint64,QTimeZone&", "QDateTime", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromSecsSinceEpoch(long)", { "fromSecsSinceEpoch", "qint64", "QDateTime", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromSecsSinceEpoch(long,enum)", { "fromSecsSinceEpoch", "qint64,Qt::TimeSpec", "QDateTime", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromSecsSinceEpoch(long,enum,int)", { "fromSecsSinceEpoch", "qint64,Qt::TimeSpec,int", "QDateTime", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromSecsSinceEpoch(long,QTimeZone&)", { "fromSecsSinceEpoch", "qint64,QTimeZone&", "QDateTime", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString)", { "fromString", "QString&", "QDateTime", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,enum)", { "fromString", "QString&,Qt::DateFormat", "QDateTime", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,QString)", { "fromString", "QString&,QString&", "QDateTime", 51, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateTime::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDateTime::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDateTime::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDateTime::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDateTime::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDateTime::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDateTime", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDateTime::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDateTime::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDateTime *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDateTime(); break;
        case 1: o = new QDateTime((*reinterpret_cast< QDate(*) >(stack[1].s_voidp))); break;
        case 2: o = new QDateTime((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTime(*) >(stack[2].s_voidp))); break;
        case 3: o = new QDateTime((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTime(*) >(stack[2].s_voidp)),
                    Qt::TimeSpec(stack[3].s_int64)); break;
        case 4: o = new QDateTime((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTime(*) >(stack[2].s_voidp)),
                    Qt::TimeSpec(stack[3].s_int64),
                    stack[4].s_int); break;
        case 5: o = new QDateTime((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTime(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QTimeZone(*) >(stack[3].s_voidp))); break;
        case 6: o = new QDateTime((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp))); break;
        case 7: o = new QDateTime((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDateTime *p = new PlastiQQDateTime();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDateTime *p = new PlastiQQDateTime();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 52) {
            id -= 52;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDateTime *o = sc ? Q_NULLPTR : reinterpret_cast<QDateTime*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->addDays(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->addMSecs(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->addMonths(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->addSecs(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->addYears(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QDate *_r = new QDate(o->date());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { long _r = o->daysTo((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 7: { bool _r = o->isDaylightTime();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { long _r = o->msecsTo((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 11: { int _r = o->offsetFromUtc();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { long _r = o->secsTo((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 13: o->setDate((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setMSecsSinceEpoch(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setOffsetFromUtc(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setSecsSinceEpoch(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setTime((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setTimeSpec(Qt::TimeSpec(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setTimeZone((*reinterpret_cast< QTimeZone(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->swap((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: { /* COPY OBJECT */
            QTime *_r = new QTime(o->time());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { qint64 _r = o->timeSpec(); // HACK for Qt::TimeSpec 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 23: { /* COPY OBJECT */
            QTimeZone *_r = new QTimeZone(o->timeZone());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTimeZone";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { QString _r = o->timeZoneAbbreviation();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 25: /* UNSUPPORTED_RETURN_VALUE o->toCFDate() | ret: `CFDateRef` */ break;
        case 26: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toLocalTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { long _r = o->toMSecsSinceEpoch();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 28: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toOffsetFromUtc(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { long _r = o->toSecsSinceEpoch();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 30: { QString _r = o->toString(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 32: { QString _r = o->toString(Qt::DateFormat(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 33: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toTimeSpec(Qt::TimeSpec(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toTimeZone((*reinterpret_cast< QTimeZone(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 35: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->toUTC());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::currentDateTime()) : new QDateTime(o->currentDateTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 37: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::currentDateTimeUtc()) : new QDateTime(o->currentDateTimeUtc());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { long _r = sc ? QDateTime::currentMSecsSinceEpoch() : o->currentMSecsSinceEpoch();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 39: { long _r = sc ? QDateTime::currentSecsSinceEpoch() : o->currentSecsSinceEpoch();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 40: /* o->fromCFDate(UNSUPPORTED_TYPE_CFDateRef) | ret: `QDateTime` */ break;
        case 41: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromMSecsSinceEpoch(stack[1].s_long)) : new QDateTime(o->fromMSecsSinceEpoch(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromMSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64))) : new QDateTime(o->fromMSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromMSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64),
                    stack[3].s_int)) : new QDateTime(o->fromMSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64),
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromMSecsSinceEpoch(stack[1].s_long,
                    (*reinterpret_cast< QTimeZone(*) >(stack[2].s_voidp)))) : new QDateTime(o->fromMSecsSinceEpoch(stack[1].s_long,
                    (*reinterpret_cast< QTimeZone(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromSecsSinceEpoch(stack[1].s_long)) : new QDateTime(o->fromSecsSinceEpoch(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 46: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64))) : new QDateTime(o->fromSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 47: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64),
                    stack[3].s_int)) : new QDateTime(o->fromSecsSinceEpoch(stack[1].s_long,
                    Qt::TimeSpec(stack[2].s_int64),
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 48: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromSecsSinceEpoch(stack[1].s_long,
                    (*reinterpret_cast< QTimeZone(*) >(stack[2].s_voidp)))) : new QDateTime(o->fromSecsSinceEpoch(stack[1].s_long,
                    (*reinterpret_cast< QTimeZone(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 49: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromString(stack[1].s_string)) : new QDateTime(o->fromString(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 50: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromString(stack[1].s_string,
                    Qt::DateFormat(stack[2].s_int64))) : new QDateTime(o->fromString(stack[1].s_string,
                    Qt::DateFormat(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: { /* COPY OBJECT */
            QDateTime *_r = sc ? new QDateTime(QDateTime::fromString(stack[1].s_string,
                    stack[2].s_string)) : new QDateTime(o->fromString(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
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
        QDateTime *o = reinterpret_cast<QDateTime*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDateTime::~PlastiQQDateTime() {
    QDateTime* o = reinterpret_cast<QDateTime*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
