#include "plastiqmethod.h"
#include "plastiqqabstractplanarvideobuffer.h"

#include "multimedia/PlastiQQAbstractVideoBuffer/plastiqqabstractvideobuffer.h"
#include <QAbstractPlanarVideoBuffer> 

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractPlanarVideoBuffer::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractPlanarVideoBuffer::plastiqMethods = {
    { "map(MapMode,int*,int[4],uchar*[4])", { "map", "MapMode,int*,int[4],uchar*[4]", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractPlanarVideoBuffer::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractPlanarVideoBuffer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAbstractPlanarVideoBuffer::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractPlanarVideoBuffer::plastiqInherits = { &PlastiQQAbstractVideoBuffer::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractPlanarVideoBuffer::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAbstractPlanarVideoBuffer::plastiq_static_metaObject = {
    { &PlastiQQAbstractVideoBuffer::plastiq_static_metaObject, &plastiqInherits, "QAbstractPlanarVideoBuffer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractPlanarVideoBuffer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractPlanarVideoBuffer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractPlanarVideoBuffer *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractPlanarVideoBuffer *p = new PlastiQQAbstractPlanarVideoBuffer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractPlanarVideoBuffer *p = new PlastiQQAbstractPlanarVideoBuffer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractVideoBuffer::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractPlanarVideoBuffer *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractPlanarVideoBuffer*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->map(UNSUPPORTED_TYPE_MapMode,
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_int[4],
                    UNSUPPORTED_TYPE_uchar*[4]) | ret: `int` */ break;

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
        QAbstractPlanarVideoBuffer *o = reinterpret_cast<QAbstractPlanarVideoBuffer*>(object->plastiq_data());

        if(className == "QAbstractVideoBuffer") {
            stack[0].s_voidp = static_cast<QAbstractVideoBuffer*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractPlanarVideoBuffer::~PlastiQQAbstractPlanarVideoBuffer() {
    QAbstractPlanarVideoBuffer* o = reinterpret_cast<QAbstractPlanarVideoBuffer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
