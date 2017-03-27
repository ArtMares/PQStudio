#include "plastiqmethod.h"
#include "plastiqqsurface.h"

#include <QSurface> 
#include <QSurfaceFormat>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQSurface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSurface::plastiqMethods = {
    { "format()", { "format", "", "QSurfaceFormat", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsOpenGL()", { "supportsOpenGL", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "surfaceClass()", { "surfaceClass", "", "SurfaceClass", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "surfaceType()", { "surfaceType", "", "SurfaceType", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSurface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSurface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSurface::plastiqConstants = {

    /* QSurface::SurfaceClass */
   { "Window", QSurface::Window },
   { "Offscreen", QSurface::Offscreen },

    /* QSurface::SurfaceType */
   { "RasterSurface", QSurface::RasterSurface },
   { "OpenGLSurface", QSurface::OpenGLSurface },
   { "RasterGLSurface", QSurface::RasterGLSurface },

};

QVector<PlastiQMetaObject*> PlastiQQSurface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSurface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSurface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSurface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSurface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSurface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSurface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSurface *p = new PlastiQQSurface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSurface *p = new PlastiQQSurface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSurface *o = sc ? Q_NULLPTR : reinterpret_cast<QSurface*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSurfaceFormat *_r = new QSurfaceFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSurfaceFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->supportsOpenGL();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { qint64 _r = o->surfaceClass(); // HACK for SurfaceClass 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { qint64 _r = o->surfaceType(); // HACK for SurfaceType 
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
        QSurface *o = reinterpret_cast<QSurface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSurface::~PlastiQQSurface() {
    QSurface* o = reinterpret_cast<QSurface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
