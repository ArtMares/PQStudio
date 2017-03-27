#include "plastiqmethod.h"
#include "plastiqqsystemsemaphore.h"

#include <QSystemSemaphore> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSystemSemaphore::plastiqConstructors = {
    { "QSystemSemaphore(QString)", { "QSystemSemaphore", "QString&", "QSystemSemaphore*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSystemSemaphore(QString,int)", { "QSystemSemaphore", "QString&,int", "QSystemSemaphore*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSystemSemaphore(QString,int,enum)", { "QSystemSemaphore", "QString&,int,AccessMode", "QSystemSemaphore*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSystemSemaphore::plastiqMethods = {
    { "acquire()", { "acquire", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "SystemSemaphoreError", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "release()", { "release", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "release(int)", { "release", "int", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKey(QString)", { "setKey", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKey(QString,int)", { "setKey", "QString&,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKey(QString,int,enum)", { "setKey", "QString&,int,AccessMode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSystemSemaphore::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSystemSemaphore::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSystemSemaphore::plastiqConstants = {

    /* QSystemSemaphore::AccessMode */
   { "Open", QSystemSemaphore::Open },
   { "Create", QSystemSemaphore::Create },

    /* QSystemSemaphore::SystemSemaphoreError */
   { "NoError", QSystemSemaphore::NoError },
   { "PermissionDenied", QSystemSemaphore::PermissionDenied },
   { "KeyError", QSystemSemaphore::KeyError },
   { "AlreadyExists", QSystemSemaphore::AlreadyExists },
   { "NotFound", QSystemSemaphore::NotFound },
   { "OutOfResources", QSystemSemaphore::OutOfResources },
   { "UnknownError", QSystemSemaphore::UnknownError },

};

QVector<PlastiQMetaObject*> PlastiQQSystemSemaphore::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSystemSemaphore::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSystemSemaphore::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSystemSemaphore", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSystemSemaphore::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSystemSemaphore::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSystemSemaphore *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSystemSemaphore(stack[1].s_string); break;
        case 1: o = new QSystemSemaphore(stack[1].s_string,
                    stack[2].s_int); break;
        case 2: o = new QSystemSemaphore(stack[1].s_string,
                    stack[2].s_int,
                    QSystemSemaphore::AccessMode(stack[3].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSystemSemaphore *p = new PlastiQQSystemSemaphore();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSystemSemaphore *p = new PlastiQQSystemSemaphore();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSystemSemaphore *o = sc ? Q_NULLPTR : reinterpret_cast<QSystemSemaphore*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->acquire();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { qint64 _r = o->error(); // HACK for SystemSemaphoreError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->key();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { bool _r = o->release();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->release(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->setKey(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setKey(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setKey(stack[1].s_string,
                    stack[2].s_int,
                    QSystemSemaphore::AccessMode(stack[3].s_int64));
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
        QSystemSemaphore *o = reinterpret_cast<QSystemSemaphore*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSystemSemaphore::~PlastiQQSystemSemaphore() {
    QSystemSemaphore* o = reinterpret_cast<QSystemSemaphore*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
