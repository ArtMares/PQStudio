#include "plastiqmethod.h"
#include "plastiqqmutexlocker.h"

#include <QMutexLocker> 
#include <QMutex>

QHash<QByteArray, PlastiQMethod> PlastiQQMutexLocker::plastiqConstructors = {
    { "QMutexLocker(QMutex*)", { "QMutexLocker", "QMutex*", "QMutexLocker*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMutexLocker::plastiqMethods = {
    { "mutex()", { "mutex", "", "QMutex*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "relock()", { "relock", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unlock()", { "unlock", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMutexLocker::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMutexLocker::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMutexLocker::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMutexLocker::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMutexLocker::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMutexLocker::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMutexLocker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMutexLocker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMutexLocker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMutexLocker *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMutexLocker(reinterpret_cast<QMutex*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMutexLocker *p = new PlastiQQMutexLocker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMutexLocker *p = new PlastiQQMutexLocker();
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
        QMutexLocker *o = sc ? Q_NULLPTR : reinterpret_cast<QMutexLocker*>(object->plastiq_data());

        switch(id) {
        case 0: { QMutex* _r = o->mutex();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QMutex"; } break;
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
        QMutexLocker *o = reinterpret_cast<QMutexLocker*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMutexLocker::~PlastiQQMutexLocker() {
    QMutexLocker* o = reinterpret_cast<QMutexLocker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
