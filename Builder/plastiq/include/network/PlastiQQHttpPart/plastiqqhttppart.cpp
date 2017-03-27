#include "plastiqmethod.h"
#include "plastiqqhttppart.h"

#include <QHttpPart> 

QHash<QByteArray, PlastiQMethod> PlastiQQHttpPart::plastiqConstructors = {
    { "QHttpPart()", { "QHttpPart", "", "QHttpPart*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHttpPart(QHttpPart&)", { "QHttpPart", "QHttpPart&", "QHttpPart*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHttpPart::plastiqMethods = {
    { "setBody(QByteArray)", { "setBody", "QByteArray&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBodyDevice(QIODevice*)", { "setBodyDevice", "QIODevice*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeader(enum,QVariant)", { "setHeader", "QNetworkRequest::KnownHeaders,QVariant&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawHeader(QByteArray,QByteArray)", { "setRawHeader", "QByteArray&,QByteArray&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QHttpPart&)", { "swap", "QHttpPart&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHttpPart::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHttpPart::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHttpPart::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHttpPart::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQHttpPart::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQHttpPart::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QHttpPart", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHttpPart::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHttpPart::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHttpPart *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHttpPart(); break;
        case 1: o = new QHttpPart((*reinterpret_cast< QHttpPart(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHttpPart *p = new PlastiQQHttpPart();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHttpPart *p = new PlastiQQHttpPart();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHttpPart *o = sc ? Q_NULLPTR : reinterpret_cast<QHttpPart*>(object->plastiq_data());

        switch(id) {
        case 0: o->setBody(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->setBodyDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setHeader(QNetworkRequest::KnownHeaders(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setRawHeader(stack[1].s_bytearray,
                    stack[2].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->swap((*reinterpret_cast< QHttpPart(*) >(stack[1].s_voidp)));
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
        QHttpPart *o = reinterpret_cast<QHttpPart*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQHttpPart::~PlastiQQHttpPart() {
    QHttpPart* o = reinterpret_cast<QHttpPart*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
