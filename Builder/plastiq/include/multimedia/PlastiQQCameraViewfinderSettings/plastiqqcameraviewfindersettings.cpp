#include "plastiqmethod.h"
#include "plastiqqcameraviewfindersettings.h"

#include <QCameraViewfinderSettings> 
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraViewfinderSettings::plastiqConstructors = {
    { "QCameraViewfinderSettings()", { "QCameraViewfinderSettings", "", "QCameraViewfinderSettings*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCameraViewfinderSettings(QCameraViewfinderSettings&)", { "QCameraViewfinderSettings", "QCameraViewfinderSettings&", "QCameraViewfinderSettings*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraViewfinderSettings::plastiqMethods = {
    { "isNull()", { "isNull", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumFrameRate()", { "maximumFrameRate", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumFrameRate()", { "minimumFrameRate", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelAspectRatio()", { "pixelAspectRatio", "", "QSize", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelFormat()", { "pixelFormat", "", "QVideoFrame::PixelFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolution()", { "resolution", "", "QSize", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumFrameRate(double)", { "setMaximumFrameRate", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumFrameRate(double)", { "setMinimumFrameRate", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelAspectRatio(QSize&)", { "setPixelAspectRatio", "QSize&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelAspectRatio(int,int)", { "setPixelAspectRatio", "int,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelFormat(enum)", { "setPixelFormat", "QVideoFrame::PixelFormat", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(QSize&)", { "setResolution", "QSize&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(int,int)", { "setResolution", "int,int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QCameraViewfinderSettings&)", { "swap", "QCameraViewfinderSettings&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraViewfinderSettings::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraViewfinderSettings::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraViewfinderSettings::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraViewfinderSettings::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCameraViewfinderSettings::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCameraViewfinderSettings::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCameraViewfinderSettings", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraViewfinderSettings::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraViewfinderSettings::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraViewfinderSettings *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCameraViewfinderSettings(); break;
        case 1: o = new QCameraViewfinderSettings((*reinterpret_cast< QCameraViewfinderSettings(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraViewfinderSettings *p = new PlastiQQCameraViewfinderSettings();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraViewfinderSettings *p = new PlastiQQCameraViewfinderSettings();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraViewfinderSettings *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraViewfinderSettings*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { double _r = o->maximumFrameRate();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->minimumFrameRate();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { /* COPY OBJECT */
            QSize *_r = new QSize(o->pixelAspectRatio());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->pixelFormat(); // HACK for QVideoFrame::PixelFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { /* COPY OBJECT */
            QSize *_r = new QSize(o->resolution());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: o->setMaximumFrameRate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMinimumFrameRate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setPixelAspectRatio((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setPixelAspectRatio(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setPixelFormat(QVideoFrame::PixelFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setResolution((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setResolution(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->swap((*reinterpret_cast< QCameraViewfinderSettings(*) >(stack[1].s_voidp)));
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
        QCameraViewfinderSettings *o = reinterpret_cast<QCameraViewfinderSettings*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCameraViewfinderSettings::~PlastiQQCameraViewfinderSettings() {
    QCameraViewfinderSettings* o = reinterpret_cast<QCameraViewfinderSettings*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
