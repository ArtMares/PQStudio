#include "plastiqmethod.h"
#include "plastiqqhttpmultipart.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QHttpMultiPart> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQHttpMultiPart::plastiqConstructors = {
    { "QHttpMultiPart()", { "QHttpMultiPart", "", "QHttpMultiPart*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHttpMultiPart(QObject*)", { "QHttpMultiPart", "QObject*", "QHttpMultiPart*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHttpMultiPart(enum)", { "QHttpMultiPart", "ContentType", "QHttpMultiPart*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHttpMultiPart(enum,QObject*)", { "QHttpMultiPart", "ContentType,QObject*", "QHttpMultiPart*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHttpMultiPart::plastiqMethods = {
    { "append(QHttpPart&)", { "append", "QHttpPart&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundary()", { "boundary", "", "QByteArray", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBoundary(QByteArray)", { "setBoundary", "QByteArray&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentType(enum)", { "setContentType", "ContentType", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHttpMultiPart::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHttpMultiPart::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHttpMultiPart::plastiqConstants = {

    /* QHttpMultiPart::ContentType */
   { "MixedType", QHttpMultiPart::MixedType },
   { "RelatedType", QHttpMultiPart::RelatedType },
   { "FormDataType", QHttpMultiPart::FormDataType },
   { "AlternativeType", QHttpMultiPart::AlternativeType },

};

QVector<PlastiQMetaObject*> PlastiQQHttpMultiPart::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHttpMultiPart::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHttpMultiPart::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QHttpMultiPart", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHttpMultiPart::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHttpMultiPart::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHttpMultiPart *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHttpMultiPart(); break;
        case 1: o = new QHttpMultiPart(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QHttpMultiPart(QHttpMultiPart::ContentType(stack[1].s_int64)); break;
        case 3: o = new QHttpMultiPart(QHttpMultiPart::ContentType(stack[1].s_int64),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHttpMultiPart *p = new PlastiQQHttpMultiPart();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHttpMultiPart *p = new PlastiQQHttpMultiPart();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHttpMultiPart *o = sc ? Q_NULLPTR : reinterpret_cast<QHttpMultiPart*>(object->plastiq_data());

        switch(id) {
        case 0: o->append((*reinterpret_cast< QHttpPart(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QByteArray _r = o->boundary();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 2: o->setBoundary(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setContentType(QHttpMultiPart::ContentType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QHttpMultiPart *o = reinterpret_cast<QHttpMultiPart*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHttpMultiPart *o = reinterpret_cast<QHttpMultiPart*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHttpMultiPart *o = reinterpret_cast<QHttpMultiPart*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHttpMultiPart *o = reinterpret_cast<QHttpMultiPart*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHttpMultiPart::~PlastiQQHttpMultiPart() {
    QHttpMultiPart* o = reinterpret_cast<QHttpMultiPart*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
