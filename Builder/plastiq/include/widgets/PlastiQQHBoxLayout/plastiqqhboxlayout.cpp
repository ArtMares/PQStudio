#include "plastiqmethod.h"
#include "plastiqqhboxlayout.h"

#include "widgets/PlastiQQBoxLayout/plastiqqboxlayout.h"
#include <QHBoxLayout> 

QHash<QByteArray, PlastiQMethod> PlastiQQHBoxLayout::plastiqConstructors = {
    { "QHBoxLayout()", { "QHBoxLayout", "", "QHBoxLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHBoxLayout(QWidget*)", { "QHBoxLayout", "QWidget*", "QHBoxLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHBoxLayout::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQHBoxLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHBoxLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHBoxLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHBoxLayout::plastiqInherits = { &PlastiQQBoxLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHBoxLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQHBoxLayout::plastiq_static_metaObject = {
    { &PlastiQQBoxLayout::plastiq_static_metaObject, &plastiqInherits, "QHBoxLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHBoxLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHBoxLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHBoxLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHBoxLayout(); break;
        case 1: o = new QHBoxLayout(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHBoxLayout *p = new PlastiQQHBoxLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHBoxLayout *p = new PlastiQQHBoxLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQBoxLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHBoxLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QHBoxLayout*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQBoxLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QHBoxLayout *o = reinterpret_cast<QHBoxLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QHBoxLayout *o = reinterpret_cast<QHBoxLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QHBoxLayout *o = reinterpret_cast<QHBoxLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QHBoxLayout *o = reinterpret_cast<QHBoxLayout*>(object->plastiq_data());

        if(className == "QBoxLayout") {
            stack[0].s_voidp = static_cast<QBoxLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHBoxLayout::~PlastiQQHBoxLayout() {
    QHBoxLayout* o = reinterpret_cast<QHBoxLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
