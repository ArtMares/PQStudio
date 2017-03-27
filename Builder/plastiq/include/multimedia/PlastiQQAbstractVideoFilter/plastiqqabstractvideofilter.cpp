#include "plastiqmethod.h"
#include "plastiqqabstractvideofilter.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractVideoFilter> 
#include <QVideoFilterRunnable>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoFilter::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoFilter::plastiqMethods = {
    { "createFilterRunnable()", { "createFilterRunnable", "", "QVideoFilterRunnable*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActive(bool)", { "setActive", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoFilter::plastiqSignals = {
    { "activeChanged()", { "activeChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractVideoFilter::plastiqProperties = {
    { "active", { "active", "bool", "setActive", "isActive" } },

};

QHash<QByteArray, long> PlastiQQAbstractVideoFilter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractVideoFilter::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractVideoFilter::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractVideoFilter::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractVideoFilter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractVideoFilter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractVideoFilter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractVideoFilter *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractVideoFilter *p = new PlastiQQAbstractVideoFilter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractVideoFilter *p = new PlastiQQAbstractVideoFilter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractVideoFilter *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractVideoFilter*>(object->plastiq_data());

        switch(id) {
        case 0: { QVideoFilterRunnable* _r = o->createFilterRunnable();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QVideoFilterRunnable"; } break;
        case 1: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->setActive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractVideoFilter *o = reinterpret_cast<QAbstractVideoFilter*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractVideoFilter::activeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "activeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractVideoFilter *o = reinterpret_cast<QAbstractVideoFilter*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractVideoFilter *o = reinterpret_cast<QAbstractVideoFilter*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractVideoFilter *o = reinterpret_cast<QAbstractVideoFilter*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractVideoFilter::~PlastiQQAbstractVideoFilter() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
