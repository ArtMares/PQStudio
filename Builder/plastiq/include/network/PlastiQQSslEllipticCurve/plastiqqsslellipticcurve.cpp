#include "plastiqmethod.h"
#include "plastiqqsslellipticcurve.h"

#include <QSslEllipticCurve> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSslEllipticCurve::plastiqConstructors = {
    { "QSslEllipticCurve()", { "QSslEllipticCurve", "", "QSslEllipticCurve*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslEllipticCurve::plastiqMethods = {
    { "isTlsNamedCurve()", { "isTlsNamedCurve", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "longName()", { "longName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shortName()", { "shortName", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromLongName(QString)", { "fromLongName", "QString&", "QSslEllipticCurve", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromShortName(QString)", { "fromShortName", "QString&", "QSslEllipticCurve", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslEllipticCurve::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslEllipticCurve::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslEllipticCurve::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSslEllipticCurve::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslEllipticCurve::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslEllipticCurve::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslEllipticCurve", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslEllipticCurve::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslEllipticCurve::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslEllipticCurve *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslEllipticCurve(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslEllipticCurve *p = new PlastiQQSslEllipticCurve();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslEllipticCurve *p = new PlastiQQSslEllipticCurve();
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
        QSslEllipticCurve *o = sc ? Q_NULLPTR : reinterpret_cast<QSslEllipticCurve*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isTlsNamedCurve();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->longName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->shortName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { /* COPY OBJECT */
            QSslEllipticCurve *_r = sc ? new QSslEllipticCurve(QSslEllipticCurve::fromLongName(stack[1].s_string)) : new QSslEllipticCurve(o->fromLongName(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslEllipticCurve";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QSslEllipticCurve *_r = sc ? new QSslEllipticCurve(QSslEllipticCurve::fromShortName(stack[1].s_string)) : new QSslEllipticCurve(o->fromShortName(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSslEllipticCurve";
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
        QSslEllipticCurve *o = reinterpret_cast<QSslEllipticCurve*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslEllipticCurve::~PlastiQQSslEllipticCurve() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
