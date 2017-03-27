#include "plastiqmethod.h"
#include "plastiqqabstractnativeeventfilter.h"

#include <QAbstractNativeEventFilter> 

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractNativeEventFilter::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractNativeEventFilter::plastiqMethods = {
    { "nativeEventFilter(QByteArray,void*,long*)", { "nativeEventFilter", "QByteArray&,void*,long*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractNativeEventFilter::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractNativeEventFilter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractNativeEventFilter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractNativeEventFilter::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAbstractNativeEventFilter::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAbstractNativeEventFilter::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAbstractNativeEventFilter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractNativeEventFilter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractNativeEventFilter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractNativeEventFilter *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractNativeEventFilter *p = new PlastiQQAbstractNativeEventFilter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractNativeEventFilter *p = new PlastiQQAbstractNativeEventFilter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractNativeEventFilter *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractNativeEventFilter*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->nativeEventFilter(stack[1].s_bytearray,
                    reinterpret_cast<void*>(stack[2].s_voidp),
                    reinterpret_cast<long*>(stack[3].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QAbstractNativeEventFilter *o = reinterpret_cast<QAbstractNativeEventFilter*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAbstractNativeEventFilter::~PlastiQQAbstractNativeEventFilter() {
    QAbstractNativeEventFilter* o = reinterpret_cast<QAbstractNativeEventFilter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
