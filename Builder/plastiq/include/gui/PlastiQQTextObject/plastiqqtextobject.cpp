#include "plastiqmethod.h"
#include "plastiqqtextobject.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QTextObject> 
#include <QTextDocument>
#include <QTextFormat>

QHash<QByteArray, PlastiQMethod> PlastiQQTextObject::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextObject::plastiqMethods = {
    { "document()", { "document", "", "QTextDocument*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QTextFormat", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "formatIndex()", { "formatIndex", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "objectIndex()", { "objectIndex", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QTextFormat&)", { "setFormat", "QTextFormat&", "void", 4, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextObject::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextObject::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextObject::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextObject::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextObject::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTextObject::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QTextObject", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextObject::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextObject::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextObject *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextObject *p = new PlastiQQTextObject();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextObject *p = new PlastiQQTextObject();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextObject *o = sc ? Q_NULLPTR : reinterpret_cast<QTextObject*>(object->plastiq_data());

        switch(id) {
        case 0: { QTextDocument* _r = o->document();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 1: { /* COPY OBJECT */
            QTextFormat *_r = new QTextFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->formatIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->objectIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTextObject *o = reinterpret_cast<QTextObject*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTextObject *o = reinterpret_cast<QTextObject*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTextObject *o = reinterpret_cast<QTextObject*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTextObject *o = reinterpret_cast<QTextObject*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextObject::~PlastiQQTextObject() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
