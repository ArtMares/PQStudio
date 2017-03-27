#include "plastiqmethod.h"
#include "plastiqqlatin1char.h"

#include <QLatin1Char> 

QHash<QByteArray, PlastiQMethod> PlastiQQLatin1Char::plastiqConstructors = {
    { "QLatin1Char(char)", { "QLatin1Char", "char", "QLatin1Char*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLatin1Char::plastiqMethods = {
    { "toLatin1()", { "toLatin1", "", "char", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unicode()", { "unicode", "", "ushort", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLatin1Char::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLatin1Char::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLatin1Char::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLatin1Char::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLatin1Char::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLatin1Char::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLatin1Char", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLatin1Char::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLatin1Char::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLatin1Char *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLatin1Char(stack[1].s_char); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLatin1Char *p = new PlastiQQLatin1Char();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLatin1Char *p = new PlastiQQLatin1Char();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLatin1Char *o = sc ? Q_NULLPTR : reinterpret_cast<QLatin1Char*>(object->plastiq_data());

        switch(id) {
        case 0: { char _r = o->toLatin1();
                  stack[0].s_char = _r; stack[0].type = PlastiQ::Char; } break;
        case 1: { int _r = o->unicode();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QLatin1Char *o = reinterpret_cast<QLatin1Char*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLatin1Char::~PlastiQQLatin1Char() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
