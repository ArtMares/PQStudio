#include "plastiqmethod.h"
#include "plastiqqcamerafocuszone.h"

#include <QCameraFocusZone> 
#include <QRectF>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocusZone::plastiqConstructors = {
    { "QCameraFocusZone(QCameraFocusZone&)", { "QCameraFocusZone", "QCameraFocusZone&", "QCameraFocusZone*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocusZone::plastiqMethods = {
    { "area()", { "area", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "FocusZoneStatus", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocusZone::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraFocusZone::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraFocusZone::plastiqConstants = {

    /* QCameraFocusZone::FocusZoneStatus */
   { "Invalid", QCameraFocusZone::Invalid },
   { "Unused", QCameraFocusZone::Unused },
   { "Selected", QCameraFocusZone::Selected },
   { "Focused", QCameraFocusZone::Focused },

};

QVector<PlastiQMetaObject*> PlastiQQCameraFocusZone::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCameraFocusZone::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCameraFocusZone::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCameraFocusZone", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraFocusZone::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraFocusZone::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraFocusZone *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCameraFocusZone((*reinterpret_cast< QCameraFocusZone(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraFocusZone *p = new PlastiQQCameraFocusZone();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraFocusZone *p = new PlastiQQCameraFocusZone();
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
        QCameraFocusZone *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraFocusZone*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->area());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { qint64 _r = o->status(); // HACK for FocusZoneStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QCameraFocusZone *o = reinterpret_cast<QCameraFocusZone*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCameraFocusZone::~PlastiQQCameraFocusZone() {
    QCameraFocusZone* o = reinterpret_cast<QCameraFocusZone*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
