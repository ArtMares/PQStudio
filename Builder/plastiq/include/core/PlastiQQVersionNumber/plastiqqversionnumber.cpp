#include "plastiqmethod.h"
#include "plastiqqversionnumber.h"

#include <QVersionNumber> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQVersionNumber::plastiqConstructors = {
    { "QVersionNumber()", { "QVersionNumber", "", "QVersionNumber*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVersionNumber(QVector<int>&)", { "QVersionNumber", "QVector<int>&", "QVersionNumber*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVersionNumber(QVector<int>&&)", { "QVersionNumber", "QVector<int>&&", "QVersionNumber*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVersionNumber(std::initializer_list<int>)", { "QVersionNumber", "std::initializer_list<int>", "QVersionNumber*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVersionNumber(int)", { "QVersionNumber", "int", "QVersionNumber*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVersionNumber(int,int)", { "QVersionNumber", "int,int", "QVersionNumber*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVersionNumber(int,int,int)", { "QVersionNumber", "int,int,int", "QVersionNumber*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVersionNumber::plastiqMethods = {
    { "isNormalized()", { "isNormalized", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPrefixOf(QVersionNumber&)", { "isPrefixOf", "QVersionNumber&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "majorVersion()", { "majorVersion", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "microVersion()", { "microVersion", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minorVersion()", { "minorVersion", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QVersionNumber", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "segmentAt(int)", { "segmentAt", "int", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "segmentCount()", { "segmentCount", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "commonPrefix(QVersionNumber&,QVersionNumber&)", { "commonPrefix", "QVersionNumber&,QVersionNumber&", "QVersionNumber", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "compare(QVersionNumber&,QVersionNumber&)", { "compare", "QVersionNumber&,QVersionNumber&", "int", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString)", { "fromString", "QString&", "QVersionNumber", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromString(QString,int*)", { "fromString", "QString&,int*", "QVersionNumber", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVersionNumber::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVersionNumber::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVersionNumber::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVersionNumber::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVersionNumber::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVersionNumber::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVersionNumber", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVersionNumber::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVersionNumber::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVersionNumber *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVersionNumber(); break;
        case 1: o = new QVersionNumber((*reinterpret_cast< QVector<int>(*) >(stack[1].s_voidp))); break;
        case 2: o = new QVersionNumber((*reinterpret_cast< QVector<int>(*) >(stack[1].s_voidp))); break;
        /*case 3: o = new QVersionNumber(UNSUPPORTED_TYPE_std::initializer_list<int>); break;*/
        case 4: o = new QVersionNumber(stack[1].s_int); break;
        case 5: o = new QVersionNumber(stack[1].s_int,
                    stack[2].s_int); break;
        case 6: o = new QVersionNumber(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVersionNumber *p = new PlastiQQVersionNumber();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVersionNumber *p = new PlastiQQVersionNumber();
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
        QVersionNumber *o = sc ? Q_NULLPTR : reinterpret_cast<QVersionNumber*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isNormalized();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isPrefixOf((*reinterpret_cast< QVersionNumber(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->majorVersion();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->microVersion();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->minorVersion();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QVersionNumber *_r = new QVersionNumber(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVersionNumber";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->segmentAt(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->segmentCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { /* COPY OBJECT */
            QVersionNumber *_r = sc ? new QVersionNumber(QVersionNumber::commonPrefix((*reinterpret_cast< QVersionNumber(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVersionNumber(*) >(stack[2].s_voidp)))) : new QVersionNumber(o->commonPrefix((*reinterpret_cast< QVersionNumber(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVersionNumber(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVersionNumber";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { int _r = sc ? QVersionNumber::compare((*reinterpret_cast< QVersionNumber(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVersionNumber(*) >(stack[2].s_voidp))) : o->compare((*reinterpret_cast< QVersionNumber(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QVersionNumber(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { /* COPY OBJECT */
            QVersionNumber *_r = sc ? new QVersionNumber(QVersionNumber::fromString(stack[1].s_string)) : new QVersionNumber(o->fromString(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVersionNumber";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QVersionNumber *_r = sc ? new QVersionNumber(QVersionNumber::fromString(stack[1].s_string,
                    reinterpret_cast<int*>(stack[2].s_voidp))) : new QVersionNumber(o->fromString(stack[1].s_string,
                    reinterpret_cast<int*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVersionNumber";
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
        QVersionNumber *o = reinterpret_cast<QVersionNumber*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVersionNumber::~PlastiQQVersionNumber() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
