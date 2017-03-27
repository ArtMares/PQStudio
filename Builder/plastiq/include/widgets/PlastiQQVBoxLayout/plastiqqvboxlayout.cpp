#include "plastiqmethod.h"
#include "plastiqqvboxlayout.h"

#include "widgets/PlastiQQBoxLayout/plastiqqboxlayout.h"
#include <QVBoxLayout> 

QHash<QByteArray, PlastiQMethod> PlastiQQVBoxLayout::plastiqConstructors = {
    { "QVBoxLayout()", { "QVBoxLayout", "", "QVBoxLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVBoxLayout(QWidget*)", { "QVBoxLayout", "QWidget*", "QVBoxLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVBoxLayout::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQVBoxLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVBoxLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVBoxLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVBoxLayout::plastiqInherits = { &PlastiQQBoxLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVBoxLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVBoxLayout::plastiq_static_metaObject = {
    { &PlastiQQBoxLayout::plastiq_static_metaObject, &plastiqInherits, "QVBoxLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVBoxLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVBoxLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVBoxLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVBoxLayout(); break;
        case 1: o = new QVBoxLayout(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVBoxLayout *p = new PlastiQQVBoxLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVBoxLayout *p = new PlastiQQVBoxLayout();
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
        QVBoxLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QVBoxLayout*>(object->plastiq_data());

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

        QVBoxLayout *o = reinterpret_cast<QVBoxLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVBoxLayout *o = reinterpret_cast<QVBoxLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVBoxLayout *o = reinterpret_cast<QVBoxLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVBoxLayout *o = reinterpret_cast<QVBoxLayout*>(object->plastiq_data());

        if(className == "QBoxLayout") {
            stack[0].s_voidp = static_cast<QBoxLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVBoxLayout::~PlastiQQVBoxLayout() {
    QVBoxLayout* o = reinterpret_cast<QVBoxLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
