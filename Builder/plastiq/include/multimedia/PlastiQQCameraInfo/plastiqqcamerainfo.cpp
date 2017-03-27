#include "plastiqmethod.h"
#include "plastiqqcamerainfo.h"

#include <QCameraInfo> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraInfo::plastiqConstructors = {
    { "QCameraInfo()", { "QCameraInfo", "", "QCameraInfo*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCameraInfo(QByteArray)", { "QCameraInfo", "QByteArray&", "QCameraInfo*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCameraInfo(QCamera&)", { "QCameraInfo", "QCamera&", "QCameraInfo*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCameraInfo(QCameraInfo&)", { "QCameraInfo", "QCameraInfo&", "QCameraInfo*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraInfo::plastiqMethods = {
    { "description()", { "description", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deviceName()", { "deviceName", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "QCamera::Position", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultCamera()", { "defaultCamera", "", "QCameraInfo", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraInfo::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCameraInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCameraInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCameraInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraInfo *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCameraInfo(); break;
        case 1: o = new QCameraInfo(stack[1].s_bytearray); break;
        case 2: o = new QCameraInfo((*reinterpret_cast< QCamera(*) >(stack[1].s_voidp))); break;
        case 3: o = new QCameraInfo((*reinterpret_cast< QCameraInfo(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraInfo *p = new PlastiQQCameraInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraInfo *p = new PlastiQQCameraInfo();
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
        QCameraInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraInfo*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->description();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->deviceName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->orientation();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { qint64 _r = o->position(); // HACK for QCamera::Position 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { /* COPY OBJECT */
            QCameraInfo *_r = sc ? new QCameraInfo(QCameraInfo::defaultCamera()) : new QCameraInfo(o->defaultCamera());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCameraInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QCameraInfo *o = reinterpret_cast<QCameraInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCameraInfo::~PlastiQQCameraInfo() {
    QCameraInfo* o = reinterpret_cast<QCameraInfo*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
