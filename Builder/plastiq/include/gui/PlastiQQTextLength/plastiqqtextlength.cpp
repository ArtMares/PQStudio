#include "plastiqmethod.h"
#include "plastiqqtextlength.h"

#include <QTextLength> 

QHash<QByteArray, PlastiQMethod> PlastiQQTextLength::plastiqConstructors = {
    { "QTextLength()", { "QTextLength", "", "QTextLength*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextLength(enum,double)", { "QTextLength", "Type,qreal", "QTextLength*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextLength::plastiqMethods = {
    { "rawValue()", { "rawValue", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(double)", { "value", "qreal", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextLength::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextLength::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextLength::plastiqConstants = {

    /* QTextLength::Type */
   { "VariableLength", QTextLength::VariableLength },
   { "FixedLength", QTextLength::FixedLength },
   { "PercentageLength", QTextLength::PercentageLength },

};

QVector<PlastiQMetaObject*> PlastiQQTextLength::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextLength::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextLength::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextLength", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextLength::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextLength::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextLength *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextLength(); break;
        case 1: o = new QTextLength(QTextLength::Type(stack[1].s_int64),
                    stack[2].s_double); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextLength *p = new PlastiQQTextLength();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextLength *p = new PlastiQQTextLength();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextLength *o = sc ? Q_NULLPTR : reinterpret_cast<QTextLength*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->rawValue();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { double _r = o->value(stack[1].s_double);
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
        QTextLength *o = reinterpret_cast<QTextLength*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextLength::~PlastiQQTextLength() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
