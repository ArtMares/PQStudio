#include "plastiqmethod.h"
#include "plastiqqregexpvalidator.h"

#include "gui/PlastiQQValidator/plastiqqvalidator.h"
#include <QRegExpValidator> 
#include <QRegExp>

QHash<QByteArray, PlastiQMethod> PlastiQQRegExpValidator::plastiqConstructors = {
    { "QRegExpValidator()", { "QRegExpValidator", "", "QRegExpValidator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegExpValidator(QObject*)", { "QRegExpValidator", "QObject*", "QRegExpValidator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegExpValidator(QRegExp&)", { "QRegExpValidator", "QRegExp&", "QRegExpValidator*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegExpValidator(QRegExp&,QObject*)", { "QRegExpValidator", "QRegExp&,QObject*", "QRegExpValidator*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegExpValidator::plastiqMethods = {
    { "regExp()", { "regExp", "", "const QRegExp&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRegExp(QRegExp&)", { "setRegExp", "QRegExp&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegExpValidator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRegExpValidator::plastiqProperties = {
    { "regExp", { "regExp", "QRegExp", "setRegExp", "regExp" } },

};

QHash<QByteArray, long> PlastiQQRegExpValidator::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRegExpValidator::plastiqInherits = { &PlastiQQValidator::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRegExpValidator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRegExpValidator::plastiq_static_metaObject = {
    { &PlastiQQValidator::plastiq_static_metaObject, &plastiqInherits, "QRegExpValidator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRegExpValidator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRegExpValidator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRegExpValidator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRegExpValidator(); break;
        case 1: o = new QRegExpValidator(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QRegExpValidator((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp))); break;
        case 3: o = new QRegExpValidator((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRegExpValidator *p = new PlastiQQRegExpValidator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRegExpValidator *p = new PlastiQQRegExpValidator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQValidator::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRegExpValidator *o = sc ? Q_NULLPTR : reinterpret_cast<QRegExpValidator*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRegExp *_r = new QRegExp(o->regExp());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegExp";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setRegExp((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

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
        QRegExpValidator *o = reinterpret_cast<QRegExpValidator*>(object->plastiq_data());

        if(className == "QValidator") {
            stack[0].s_voidp = static_cast<QValidator*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRegExpValidator::~PlastiQQRegExpValidator() {
    QRegExpValidator* o = reinterpret_cast<QRegExpValidator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
