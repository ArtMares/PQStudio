#include "plastiqmethod.h"
#include "plastiqqjsonparseerror.h"

#include <QJsonParseError> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQJsonParseError::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonParseError::plastiqMethods = {
    { "errorString()", { "errorString", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQJsonParseError::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQJsonParseError::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQJsonParseError::plastiqConstants = {

    /* QJsonParseError::ParseError */
   { "NoError", QJsonParseError::NoError },
   { "UnterminatedObject", QJsonParseError::UnterminatedObject },
   { "MissingNameSeparator", QJsonParseError::MissingNameSeparator },
   { "UnterminatedArray", QJsonParseError::UnterminatedArray },
   { "MissingValueSeparator", QJsonParseError::MissingValueSeparator },
   { "IllegalValue", QJsonParseError::IllegalValue },
   { "TerminationByNumber", QJsonParseError::TerminationByNumber },
   { "IllegalNumber", QJsonParseError::IllegalNumber },
   { "IllegalEscapeSequence", QJsonParseError::IllegalEscapeSequence },
   { "IllegalUTF8String", QJsonParseError::IllegalUTF8String },
   { "UnterminatedString", QJsonParseError::UnterminatedString },
   { "MissingObject", QJsonParseError::MissingObject },
   { "DeepNesting", QJsonParseError::DeepNesting },
   { "DocumentTooLarge", QJsonParseError::DocumentTooLarge },
   { "GarbageAtEnd", QJsonParseError::GarbageAtEnd },

};

QVector<PlastiQMetaObject*> PlastiQQJsonParseError::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQJsonParseError::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQJsonParseError::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QJsonParseError", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQJsonParseError::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQJsonParseError::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QJsonParseError *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQJsonParseError *p = new PlastiQQJsonParseError();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQJsonParseError *p = new PlastiQQJsonParseError();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QJsonParseError *o = sc ? Q_NULLPTR : reinterpret_cast<QJsonParseError*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->errorString();
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
        QJsonParseError *o = reinterpret_cast<QJsonParseError*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQJsonParseError::~PlastiQQJsonParseError() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
