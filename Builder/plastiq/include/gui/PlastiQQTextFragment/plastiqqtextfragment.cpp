#include "plastiqmethod.h"
#include "plastiqqtextfragment.h"

#include <QTextFragment> 
#include <QTextCharFormat>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextFragment::plastiqConstructors = {
    { "QTextFragment()", { "QTextFragment", "", "QTextFragment*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextFragment(QTextFragment&)", { "QTextFragment", "QTextFragment&", "QTextFragment*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFragment::plastiqMethods = {
    { "charFormat()", { "charFormat", "", "QTextCharFormat", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "charFormatIndex()", { "charFormatIndex", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(int)", { "contains", "int", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "length()", { "length", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFragment::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextFragment::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextFragment::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextFragment::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextFragment::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextFragment::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextFragment", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextFragment::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextFragment::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextFragment *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextFragment(); break;
        case 1: o = new QTextFragment((*reinterpret_cast< QTextFragment(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextFragment *p = new PlastiQQTextFragment();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextFragment *p = new PlastiQQTextFragment();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextFragment *o = sc ? Q_NULLPTR : reinterpret_cast<QTextFragment*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->charFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { int _r = o->charFormatIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { bool _r = o->contains(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { int _r = o->length();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->position();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { QString _r = o->text();
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
        QTextFragment *o = reinterpret_cast<QTextFragment*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextFragment::~PlastiQQTextFragment() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
