#include "plastiqmethod.h"
#include "plastiqqtextdecoder.h"

#include <QTextDecoder> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextDecoder::plastiqConstructors = {
    { "QTextDecoder(const QTextCodec*)", { "QTextDecoder", "QTextCodec*", "QTextDecoder*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextDecoder(const QTextCodec*,QTextCodec::ConversionFlags)", { "QTextDecoder", "QTextCodec*,QTextCodec::ConversionFlags", "QTextDecoder*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDecoder::plastiqMethods = {
    { "toUnicode(const char*,int)", { "toUnicode", "char*,int", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUnicode(QByteArray)", { "toUnicode", "QByteArray&", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toUnicode(QString*,const char*,int)", { "toUnicode", "QString*,char*,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextDecoder::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextDecoder::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextDecoder::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextDecoder::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextDecoder::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextDecoder::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextDecoder", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextDecoder::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextDecoder::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextDecoder *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextDecoder(reinterpret_cast<const QTextCodec*>(stack[1].s_voidp)); break;
        /*case 1: o = new QTextDecoder(reinterpret_cast<const QTextCodec*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QTextCodec::ConversionFlags); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextDecoder *p = new PlastiQQTextDecoder();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextDecoder *p = new PlastiQQTextDecoder();
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
        QTextDecoder *o = sc ? Q_NULLPTR : reinterpret_cast<QTextDecoder*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->toUnicode(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->toUnicode(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: o->toUnicode(reinterpret_cast<QString*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int);
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
        QTextDecoder *o = reinterpret_cast<QTextDecoder*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextDecoder::~PlastiQQTextDecoder() {
    QTextDecoder* o = reinterpret_cast<QTextDecoder*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
