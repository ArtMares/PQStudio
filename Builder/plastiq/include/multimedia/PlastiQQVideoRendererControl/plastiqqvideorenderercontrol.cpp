#include "plastiqmethod.h"
#include "plastiqqvideorenderercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QVideoRendererControl> 
#include <QAbstractVideoSurface>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoRendererControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoRendererControl::plastiqMethods = {
    { "setSurface(QAbstractVideoSurface*)", { "setSurface", "QAbstractVideoSurface*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "surface()", { "surface", "", "QAbstractVideoSurface*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoRendererControl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoRendererControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoRendererControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVideoRendererControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVideoRendererControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVideoRendererControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QVideoRendererControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoRendererControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoRendererControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoRendererControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoRendererControl *p = new PlastiQQVideoRendererControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoRendererControl *p = new PlastiQQVideoRendererControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoRendererControl *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoRendererControl*>(object->plastiq_data());

        switch(id) {
        case 0: o->setSurface(reinterpret_cast<QAbstractVideoSurface*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QAbstractVideoSurface* _r = o->surface();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractVideoSurface"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QVideoRendererControl *o = reinterpret_cast<QVideoRendererControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVideoRendererControl *o = reinterpret_cast<QVideoRendererControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVideoRendererControl *o = reinterpret_cast<QVideoRendererControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVideoRendererControl *o = reinterpret_cast<QVideoRendererControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVideoRendererControl::~PlastiQQVideoRendererControl() {
    QVideoRendererControl* o = reinterpret_cast<QVideoRendererControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
