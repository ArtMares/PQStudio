#include "plastiqmethod.h"
#include "plastiqqeventlooplocker.h"

#include <QEventLoopLocker> 

QHash<QByteArray, PlastiQMethod> PlastiQQEventLoopLocker::plastiqConstructors = {
    { "QEventLoopLocker()", { "QEventLoopLocker", "", "QEventLoopLocker*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEventLoopLocker(QEventLoop*)", { "QEventLoopLocker", "QEventLoop*", "QEventLoopLocker*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEventLoopLocker(QThread*)", { "QEventLoopLocker", "QThread*", "QEventLoopLocker*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEventLoopLocker::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQEventLoopLocker::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQEventLoopLocker::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQEventLoopLocker::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQEventLoopLocker::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQEventLoopLocker::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQEventLoopLocker::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QEventLoopLocker", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQEventLoopLocker::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQEventLoopLocker::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QEventLoopLocker *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QEventLoopLocker(); break;
        case 1: o = new QEventLoopLocker(reinterpret_cast<QEventLoop*>(stack[1].s_voidp)); break;
        case 2: o = new QEventLoopLocker(reinterpret_cast<QThread*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQEventLoopLocker *p = new PlastiQQEventLoopLocker();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQEventLoopLocker *p = new PlastiQQEventLoopLocker();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QEventLoopLocker *o = sc ? Q_NULLPTR : reinterpret_cast<QEventLoopLocker*>(object->plastiq_data());

        switch(id) {

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
        QEventLoopLocker *o = reinterpret_cast<QEventLoopLocker*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQEventLoopLocker::~PlastiQQEventLoopLocker() {
    QEventLoopLocker* o = reinterpret_cast<QEventLoopLocker*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
