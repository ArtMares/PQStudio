#include "plastiqmethod.h"
#include "plastiqqcamerazoomcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraZoomControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQCameraZoomControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraZoomControl::plastiqMethods = {
    { "currentDigitalZoom()", { "currentDigitalZoom", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentOpticalZoom()", { "currentOpticalZoom", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumDigitalZoom()", { "maximumDigitalZoom", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumOpticalZoom()", { "maximumOpticalZoom", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedDigitalZoom()", { "requestedDigitalZoom", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedOpticalZoom()", { "requestedOpticalZoom", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomTo(double,double)", { "zoomTo", "qreal,qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraZoomControl::plastiqSignals = {
    { "currentDigitalZoomChanged(double)", { "currentDigitalZoomChanged", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentOpticalZoomChanged(double)", { "currentOpticalZoomChanged", "qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maximumDigitalZoomChanged(double)", { "maximumDigitalZoomChanged", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maximumOpticalZoomChanged(double)", { "maximumOpticalZoomChanged", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "requestedDigitalZoomChanged(double)", { "requestedDigitalZoomChanged", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "requestedOpticalZoomChanged(double)", { "requestedOpticalZoomChanged", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraZoomControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraZoomControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraZoomControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraZoomControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraZoomControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraZoomControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraZoomControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraZoomControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraZoomControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraZoomControl *p = new PlastiQQCameraZoomControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraZoomControl *p = new PlastiQQCameraZoomControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraZoomControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraZoomControl*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->currentDigitalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->currentOpticalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->maximumDigitalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->maximumOpticalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->requestedDigitalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->requestedOpticalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: o->zoomTo(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraZoomControl *o = reinterpret_cast<QCameraZoomControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraZoomControl::currentDigitalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "currentDigitalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraZoomControl::currentOpticalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "currentOpticalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCameraZoomControl::maximumDigitalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "maximumDigitalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCameraZoomControl::maximumOpticalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "maximumOpticalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QCameraZoomControl::requestedDigitalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "requestedDigitalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QCameraZoomControl::requestedOpticalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "requestedOpticalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraZoomControl *o = reinterpret_cast<QCameraZoomControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraZoomControl *o = reinterpret_cast<QCameraZoomControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraZoomControl *o = reinterpret_cast<QCameraZoomControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraZoomControl::~PlastiQQCameraZoomControl() {
    QCameraZoomControl* o = reinterpret_cast<QCameraZoomControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
