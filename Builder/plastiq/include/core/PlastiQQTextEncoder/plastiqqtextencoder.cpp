#include "plastiqmethod.h"
#include "plastiqqtextencoder.h"

#include <QTextEncoder> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQTextEncoder::plastiqConstructors = {
    { "QTextEncoder(const QTextCodec*)", { "QTextEncoder", "QTextCodec*", "QTextEncoder*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextEncoder(const QTextCodec*,QTextCodec::ConversionFlags)", { "QTextEncoder", "QTextCodec*,QTextCodec::ConversionFlags", "QTextEncoder*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextEncoder::plastiqMethods = {
    { "fromUnicode(QString)", { "fromUnicode", "QString&", "QByteArray", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromUnicode(const QChar*,int)", { "fromUnicode", "QChar*,int", "QByteArray", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextEncoder::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextEncoder::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextEncoder::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextEncoder::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextEncoder::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextEncoder::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextEncoder", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextEncoder::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextEncoder::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextEncoder *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextEncoder(reinterpret_cast<const QTextCodec*>(stack[1].s_voidp)); break;
        /*case 1: o = new QTextEncoder(reinterpret_cast<const QTextCodec*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QTextCodec::ConversionFlags); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextEncoder *p = new PlastiQQTextEncoder();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextEncoder *p = new PlastiQQTextEncoder();
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
        QTextEncoder *o = sc ? Q_NULLPTR : reinterpret_cast<QTextEncoder*>(object->plastiq_data());

        switch(id) {
        case 0: { QByteArray _r = o->fromUnicode(stack[1].s_string);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 1: { QByteArray _r = o->fromUnicode(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;

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
        QTextEncoder *o = reinterpret_cast<QTextEncoder*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextEncoder::~PlastiQQTextEncoder() {
    QTextEncoder* o = reinterpret_cast<QTextEncoder*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
