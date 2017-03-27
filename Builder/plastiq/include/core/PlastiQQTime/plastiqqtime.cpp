#include "plastiqmethod.h"
#include "plastiqqtime.h"

#include <QTime> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTime::plastiqConstructors = {
    { "QTime()", { "QTime", "", "QTime*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTime(int,int)", { "QTime", "int,int", "QTime*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTime(int,int,int)", { "QTime", "int,int,int", "QTime*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTime(int,int,int,int)", { "QTime", "int,int,int,int", "QTime*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTime::plastiqMethods = {
    { "addMSecs(int)", { "addMSecs", "int", "QTime", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSecs(int)", { "addSecs", "int", "QTime", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elapsed()", { "elapsed", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hour()", { "hour", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minute()", { "minute", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "msec()", { "msec", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "msecsSinceStartOfDay()", { "msecsSinceStartOfDay", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "msecsTo(QTime&)", { "msecsTo", "QTime&", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restart()", { "restart", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "second()", { "second", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "secsTo(QTime&)", { "secsTo", "QTime&", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHMS(int,int,int)", { "setHMS", "int,int,int", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHMS(int,int,int,int)", { "setHMS", "int,int,int,int", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(QString)", { "toString", "QString&", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(enum)", { "toString", "Qt::DateFormat", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentTime()", { "currentTime", "", "QTime", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromMSecsSinceStartOfDay(int)", { "fromMSecsSinceStartOfDay", "int", "QTime", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString)", { "fromString", "QString&", "QTime", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,enum)", { "fromString", "QString&,Qt::DateFormat", "QTime", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,QString)", { "fromString", "QString&,QString&", "QTime", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isValid(int,int,int)", { "isValid", "int,int,int", "bool", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isValid(int,int,int,int)", { "isValid", "int,int,int,int", "bool", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTime::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTime::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTime::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTime::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTime::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTime::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTime", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTime::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTime::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTime *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTime(); break;
        case 1: o = new QTime(stack[1].s_int,
                    stack[2].s_int); break;
        case 2: o = new QTime(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int); break;
        case 3: o = new QTime(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTime *p = new PlastiQQTime();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTime *p = new PlastiQQTime();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 26) {
            id -= 26;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTime *o = sc ? Q_NULLPTR : reinterpret_cast<QTime*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QTime *_r = new QTime(o->addMSecs(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QTime *_r = new QTime(o->addSecs(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->elapsed();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->hour();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { int _r = o->minute();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->msec();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->msecsSinceStartOfDay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->msecsTo((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { int _r = o->restart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = o->second();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->secsTo((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { bool _r = o->setHMS(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->setHMS(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 16: { QString _r = o->toString(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 18: { QString _r = o->toString(Qt::DateFormat(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { /* COPY OBJECT */
            QTime *_r = sc ? new QTime(QTime::currentTime()) : new QTime(o->currentTime());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QTime *_r = sc ? new QTime(QTime::fromMSecsSinceStartOfDay(stack[1].s_int)) : new QTime(o->fromMSecsSinceStartOfDay(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { /* COPY OBJECT */
            QTime *_r = sc ? new QTime(QTime::fromString(stack[1].s_string)) : new QTime(o->fromString(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { /* COPY OBJECT */
            QTime *_r = sc ? new QTime(QTime::fromString(stack[1].s_string,
                    Qt::DateFormat(stack[2].s_int64))) : new QTime(o->fromString(stack[1].s_string,
                    Qt::DateFormat(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QTime *_r = sc ? new QTime(QTime::fromString(stack[1].s_string,
                    stack[2].s_string)) : new QTime(o->fromString(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { bool _r = sc ? QTime::isValid(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int) : o->isValid(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r = sc ? QTime::isValid(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int) : o->isValid(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
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
        QTime *o = reinterpret_cast<QTime*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTime::~PlastiQQTime() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
