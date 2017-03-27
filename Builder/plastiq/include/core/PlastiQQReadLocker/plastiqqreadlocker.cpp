#include "plastiqmethod.h"
#include "plastiqqreadlocker.h"

#include <QReadLocker> 
#include <QReadWriteLock>

QHash<QByteArray, PlastiQMethod> PlastiQQReadLocker::plastiqConstructors = {
    { "QReadLocker(QReadWriteLock*)", { "QReadLocker", "QReadWriteLock*", "QReadLocker*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQReadLocker::plastiqMethods = {
    { "readWriteLock()", { "readWriteLock", "", "QReadWriteLock*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "relock()", { "relock", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unlock()", { "unlock", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQReadLocker::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQReadLocker::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQReadLocker::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQReadLocker::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQReadLocker::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQReadLocker::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QReadLocker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQReadLocker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQReadLocker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QReadLocker *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QReadLocker(reinterpret_cast<QReadWriteLock*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQReadLocker *p = new PlastiQQReadLocker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQReadLocker *p = new PlastiQQReadLocker();
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
        QReadLocker *o = sc ? Q_NULLPTR : reinterpret_cast<QReadLocker*>(object->plastiq_data());

        switch(id) {
        case 0: { QReadWriteLock* _r = o->readWriteLock();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QReadWriteLock"; } break;
        case 1: o->relock();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->unlock();
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
        QReadLocker *o = reinterpret_cast<QReadLocker*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQReadLocker::~PlastiQQReadLocker() {
    QReadLocker* o = reinterpret_cast<QReadLocker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
