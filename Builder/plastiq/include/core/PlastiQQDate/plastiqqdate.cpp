#include "plastiqmethod.h"
#include "plastiqqdate.h"

#include <QDate> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQDate::plastiqConstructors = {
    { "QDate()", { "QDate", "", "QDate*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDate(int,int,int)", { "QDate", "int,int,int", "QDate*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDate::plastiqMethods = {
    { "addDays(long)", { "addDays", "qint64", "QDate", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMonths(int)", { "addMonths", "int", "QDate", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addYears(int)", { "addYears", "int", "QDate", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "day()", { "day", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dayOfWeek()", { "dayOfWeek", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dayOfYear()", { "dayOfYear", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "daysInMonth()", { "daysInMonth", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "daysInYear()", { "daysInYear", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "daysTo(QDate&)", { "daysTo", "QDate&", "qint64", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getDate(int*,int*,int*)", { "getDate", "int*,int*,int*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "month()", { "month", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDate(int,int,int)", { "setDate", "int,int,int", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toJulianDay()", { "toJulianDay", "", "qint64", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QString)", { "toString", "QString&", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(enum)", { "toString", "Qt::DateFormat", "QString", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weekNumber()", { "weekNumber", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weekNumber(int*)", { "weekNumber", "int*", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "year()", { "year", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentDate()", { "currentDate", "", "QDate", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromJulianDay(long)", { "fromJulianDay", "qint64", "QDate", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString)", { "fromString", "QString&", "QDate", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,enum)", { "fromString", "QString&,Qt::DateFormat", "QDate", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,QString)", { "fromString", "QString&,QString&", "QDate", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isLeapYear(int)", { "isLeapYear", "int", "bool", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isValid(int,int,int)", { "isValid", "int,int,int", "bool", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "longDayName(int)", { "longDayName", "int", "QString", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "longDayName(int,enum)", { "longDayName", "int,MonthNameType", "QString", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "longMonthName(int)", { "longMonthName", "int", "QString", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "longMonthName(int,enum)", { "longMonthName", "int,MonthNameType", "QString", 31, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "shortDayName(int)", { "shortDayName", "int", "QString", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "shortDayName(int,enum)", { "shortDayName", "int,MonthNameType", "QString", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "shortMonthName(int)", { "shortMonthName", "int", "QString", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "shortMonthName(int,enum)", { "shortMonthName", "int,MonthNameType", "QString", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDate::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDate::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDate::plastiqConstants = {

    /* QDate::MonthNameType */
   { "DateFormat", QDate::DateFormat },
   { "StandaloneFormat", QDate::StandaloneFormat },

};

QVector<PlastiQMetaObject*> PlastiQQDate::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDate::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDate::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDate", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDate::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDate::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDate *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDate(); break;
        case 1: o = new QDate(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDate *p = new PlastiQQDate();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDate *p = new PlastiQQDate();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 36) {
            id -= 36;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDate *o = sc ? Q_NULLPTR : reinterpret_cast<QDate*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QDate *_r = new QDate(o->addDays(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QDate *_r = new QDate(o->addMonths(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QDate *_r = new QDate(o->addYears(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { int _r = o->day();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->dayOfWeek();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->dayOfYear();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->daysInMonth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->daysInYear();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { long _r = o->daysTo((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 9: o->getDate(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { int _r = o->month();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { bool _r = o->setDate(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { long _r = o->toJulianDay();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 15: { QString _r = o->toString(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 16: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: { QString _r = o->toString(Qt::DateFormat(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 18: { int _r = o->weekNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { int _r = o->weekNumber(reinterpret_cast<int*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { int _r = o->year();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { /* COPY OBJECT */
            QDate *_r = sc ? new QDate(QDate::currentDate()) : new QDate(o->currentDate());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { /* COPY OBJECT */
            QDate *_r = sc ? new QDate(QDate::fromJulianDay(stack[1].s_long)) : new QDate(o->fromJulianDay(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QDate *_r = sc ? new QDate(QDate::fromString(stack[1].s_string)) : new QDate(o->fromString(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QDate *_r = sc ? new QDate(QDate::fromString(stack[1].s_string,
                    Qt::DateFormat(stack[2].s_int64))) : new QDate(o->fromString(stack[1].s_string,
                    Qt::DateFormat(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QDate *_r = sc ? new QDate(QDate::fromString(stack[1].s_string,
                    stack[2].s_string)) : new QDate(o->fromString(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDate";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { bool _r = sc ? QDate::isLeapYear(stack[1].s_int) : o->isLeapYear(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { bool _r = sc ? QDate::isValid(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int) : o->isValid(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { QString _r = sc ? QDate::longDayName(stack[1].s_int) : o->longDayName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 29: { QString _r = sc ? QDate::longDayName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64)) : o->longDayName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 30: { QString _r = sc ? QDate::longMonthName(stack[1].s_int) : o->longMonthName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 31: { QString _r = sc ? QDate::longMonthName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64)) : o->longMonthName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 32: { QString _r = sc ? QDate::shortDayName(stack[1].s_int) : o->shortDayName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 33: { QString _r = sc ? QDate::shortDayName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64)) : o->shortDayName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 34: { QString _r = sc ? QDate::shortMonthName(stack[1].s_int) : o->shortMonthName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 35: { QString _r = sc ? QDate::shortMonthName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64)) : o->shortMonthName(stack[1].s_int,
                    QDate::MonthNameType(stack[2].s_int64));
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
        QDate *o = reinterpret_cast<QDate*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDate::~PlastiQQDate() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
