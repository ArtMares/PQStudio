#include "plastiqmethod.h"
#include "plastiqqdoublevalidator.h"

#include "gui/PlastiQQValidator/plastiqqvalidator.h"
#include <QDoubleValidator> 

QHash<QByteArray, PlastiQMethod> PlastiQQDoubleValidator::plastiqConstructors = {
    { "QDoubleValidator()", { "QDoubleValidator", "", "QDoubleValidator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDoubleValidator(QObject*)", { "QDoubleValidator", "QObject*", "QDoubleValidator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDoubleValidator(double,double,int)", { "QDoubleValidator", "double,double,int", "QDoubleValidator*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDoubleValidator(double,double,int,QObject*)", { "QDoubleValidator", "double,double,int,QObject*", "QDoubleValidator*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDoubleValidator::plastiqMethods = {
    { "bottom()", { "bottom", "", "double", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "decimals()", { "decimals", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notation()", { "notation", "", "Notation", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottom(double)", { "setBottom", "double", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDecimals(int)", { "setDecimals", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNotation(enum)", { "setNotation", "Notation", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(double,double)", { "setRange", "double,double", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(double,double,int)", { "setRange", "double,double,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTop(double)", { "setTop", "double", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "top()", { "top", "", "double", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDoubleValidator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDoubleValidator::plastiqProperties = {
    { "bottom", { "bottom", "double", "setBottom", "bottom" } },
    { "decimals", { "decimals", "int", "setDecimals", "decimals" } },
    { "notation", { "notation", "long", "setNotation", "notation" } },
    { "top", { "top", "double", "setTop", "top" } },

};

QHash<QByteArray, long> PlastiQQDoubleValidator::plastiqConstants = {

    /* QDoubleValidator::Notation */
   { "StandardNotation", QDoubleValidator::StandardNotation },
   { "ScientificNotation", QDoubleValidator::ScientificNotation },

};

QVector<PlastiQMetaObject*> PlastiQQDoubleValidator::plastiqInherits = { &PlastiQQValidator::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDoubleValidator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDoubleValidator::plastiq_static_metaObject = {
    { &PlastiQQValidator::plastiq_static_metaObject, &plastiqInherits, "QDoubleValidator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDoubleValidator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDoubleValidator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDoubleValidator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDoubleValidator(); break;
        case 1: o = new QDoubleValidator(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QDoubleValidator(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_int); break;
        case 3: o = new QDoubleValidator(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_int,
                    reinterpret_cast<QObject*>(stack[4].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDoubleValidator *p = new PlastiQQDoubleValidator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDoubleValidator *p = new PlastiQQDoubleValidator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            PlastiQQValidator::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDoubleValidator *o = sc ? Q_NULLPTR : reinterpret_cast<QDoubleValidator*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->bottom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { int _r = o->decimals();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { qint64 _r = o->notation(); // HACK for Notation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: o->setBottom(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setDecimals(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setNotation(QDoubleValidator::Notation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setRange(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setRange(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setTop(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: { double _r = o->top();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QDoubleValidator *o = reinterpret_cast<QDoubleValidator*>(object->plastiq_data());

        if(className == "QValidator") {
            stack[0].s_voidp = static_cast<QValidator*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDoubleValidator::~PlastiQQDoubleValidator() {
    QDoubleValidator* o = reinterpret_cast<QDoubleValidator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
