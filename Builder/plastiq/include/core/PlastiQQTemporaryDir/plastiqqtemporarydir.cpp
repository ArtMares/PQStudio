#include "plastiqmethod.h"
#include "plastiqqtemporarydir.h"

#include <QTemporaryDir> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTemporaryDir::plastiqConstructors = {
    { "QTemporaryDir()", { "QTemporaryDir", "", "QTemporaryDir*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTemporaryDir(QString)", { "QTemporaryDir", "QString&", "QTemporaryDir*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTemporaryDir::plastiqMethods = {
    { "autoRemove()", { "autoRemove", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path()", { "path", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove()", { "remove", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRemove(bool)", { "setAutoRemove", "bool", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTemporaryDir::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTemporaryDir::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTemporaryDir::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTemporaryDir::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTemporaryDir::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTemporaryDir::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTemporaryDir", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTemporaryDir::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTemporaryDir::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTemporaryDir *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTemporaryDir(); break;
        case 1: o = new QTemporaryDir(stack[1].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTemporaryDir *p = new PlastiQQTemporaryDir();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTemporaryDir *p = new PlastiQQTemporaryDir();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTemporaryDir *o = sc ? Q_NULLPTR : reinterpret_cast<QTemporaryDir*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoRemove();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { QString _r = o->path();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { bool _r = o->remove();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: o->setAutoRemove(stack[1].s_bool);
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
        QTemporaryDir *o = reinterpret_cast<QTemporaryDir*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTemporaryDir::~PlastiQQTemporaryDir() {
    QTemporaryDir* o = reinterpret_cast<QTemporaryDir*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
