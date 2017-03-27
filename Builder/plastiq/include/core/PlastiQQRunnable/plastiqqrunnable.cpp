#include "plastiqmethod.h"
#include "plastiqqrunnable.h"

#include <QRunnable> 

QHash<QByteArray, PlastiQMethod> PlastiQQRunnable::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQRunnable::plastiqMethods = {
    { "autoDelete()", { "autoDelete", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "run()", { "run", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoDelete(bool)", { "setAutoDelete", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRunnable::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRunnable::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRunnable::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRunnable::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRunnable::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRunnable::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRunnable", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRunnable::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRunnable::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRunnable *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRunnable *p = new PlastiQQRunnable();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRunnable *p = new PlastiQQRunnable();
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
        QRunnable *o = sc ? Q_NULLPTR : reinterpret_cast<QRunnable*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoDelete();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->run();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setAutoDelete(stack[1].s_bool);
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
        QRunnable *o = reinterpret_cast<QRunnable*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRunnable::~PlastiQQRunnable() {
    QRunnable* o = reinterpret_cast<QRunnable*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
