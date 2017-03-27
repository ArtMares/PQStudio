#include "plastiqmethod.h"
#include "plastiqqsurfaceformat.h"

#include <QSurfaceFormat> 

QHash<QByteArray, PlastiQMethod> PlastiQQSurfaceFormat::plastiqConstructors = {
    { "QSurfaceFormat()", { "QSurfaceFormat", "", "QSurfaceFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSurfaceFormat(enum)", { "QSurfaceFormat", "FormatOptions", "QSurfaceFormat*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSurfaceFormat(QSurfaceFormat&)", { "QSurfaceFormat", "QSurfaceFormat&", "QSurfaceFormat*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSurfaceFormat::plastiqMethods = {
    { "alphaBufferSize()", { "alphaBufferSize", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blueBufferSize()", { "blueBufferSize", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "depthBufferSize()", { "depthBufferSize", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "greenBufferSize()", { "greenBufferSize", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasAlpha()", { "hasAlpha", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "majorVersion()", { "majorVersion", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minorVersion()", { "minorVersion", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "QSurfaceFormat::FormatOptions", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "profile()", { "profile", "", "OpenGLContextProfile", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redBufferSize()", { "redBufferSize", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "renderableType()", { "renderableType", "", "RenderableType", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "samples()", { "samples", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlphaBufferSize(int)", { "setAlphaBufferSize", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBlueBufferSize(int)", { "setBlueBufferSize", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDepthBufferSize(int)", { "setDepthBufferSize", "int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGreenBufferSize(int)", { "setGreenBufferSize", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMajorVersion(int)", { "setMajorVersion", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinorVersion(int)", { "setMinorVersion", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "FormatOption", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "FormatOption,bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptions(enum)", { "setOptions", "QSurfaceFormat::FormatOptions", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProfile(enum)", { "setProfile", "OpenGLContextProfile", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRedBufferSize(int)", { "setRedBufferSize", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderableType(enum)", { "setRenderableType", "RenderableType", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSamples(int)", { "setSamples", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStencilBufferSize(int)", { "setStencilBufferSize", "int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStereo(bool)", { "setStereo", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSwapBehavior(enum)", { "setSwapBehavior", "SwapBehavior", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSwapInterval(int)", { "setSwapInterval", "int", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVersion(int,int)", { "setVersion", "int,int", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stencilBufferSize()", { "stencilBufferSize", "", "int", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stereo()", { "stereo", "", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swapBehavior()", { "swapBehavior", "", "SwapBehavior", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swapInterval()", { "swapInterval", "", "int", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "FormatOption", "bool", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultFormat()", { "defaultFormat", "", "QSurfaceFormat", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDefaultFormat(QSurfaceFormat&)", { "setDefaultFormat", "QSurfaceFormat&", "void", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSurfaceFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSurfaceFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSurfaceFormat::plastiqConstants = {

    /* QSurfaceFormat::FormatOption */
   { "StereoBuffers", QSurfaceFormat::StereoBuffers },
   { "DebugContext", QSurfaceFormat::DebugContext },
   { "DeprecatedFunctions", QSurfaceFormat::DeprecatedFunctions },
   { "ResetNotification", QSurfaceFormat::ResetNotification },

    /* QSurfaceFormat::OpenGLContextProfile */
   { "NoProfile", QSurfaceFormat::NoProfile },
   { "CoreProfile", QSurfaceFormat::CoreProfile },
   { "CompatibilityProfile", QSurfaceFormat::CompatibilityProfile },

    /* QSurfaceFormat::RenderableType */
   { "DefaultRenderableType", QSurfaceFormat::DefaultRenderableType },
   { "OpenGL", QSurfaceFormat::OpenGL },
   { "OpenGLES", QSurfaceFormat::OpenGLES },
   { "OpenVG", QSurfaceFormat::OpenVG },

    /* QSurfaceFormat::SwapBehavior */
   { "DefaultSwapBehavior", QSurfaceFormat::DefaultSwapBehavior },
   { "SingleBuffer", QSurfaceFormat::SingleBuffer },
   { "DoubleBuffer", QSurfaceFormat::DoubleBuffer },
   { "TripleBuffer", QSurfaceFormat::TripleBuffer },

};

QVector<PlastiQMetaObject*> PlastiQQSurfaceFormat::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSurfaceFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSurfaceFormat::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSurfaceFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSurfaceFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSurfaceFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSurfaceFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSurfaceFormat(); break;
        case 1: o = new QSurfaceFormat(QSurfaceFormat::FormatOptions(stack[1].s_int64)); break;
        case 2: o = new QSurfaceFormat((*reinterpret_cast< QSurfaceFormat(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSurfaceFormat *p = new PlastiQQSurfaceFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSurfaceFormat *p = new PlastiQQSurfaceFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 37) {
            id -= 37;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSurfaceFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QSurfaceFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->alphaBufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->blueBufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->depthBufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->greenBufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { bool _r = o->hasAlpha();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { int _r = o->majorVersion();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->minorVersion();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { qint64 _r = o->options(); // HACK for QSurfaceFormat::FormatOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { qint64 _r = o->profile(); // HACK for OpenGLContextProfile 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { int _r = o->redBufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { qint64 _r = o->renderableType(); // HACK for RenderableType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { int _r = o->samples();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: o->setAlphaBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setBlueBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setDepthBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setGreenBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setMajorVersion(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setMinorVersion(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setOption(QSurfaceFormat::FormatOption(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setOption(QSurfaceFormat::FormatOption(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setOptions(QSurfaceFormat::FormatOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setProfile(QSurfaceFormat::OpenGLContextProfile(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setRedBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setRenderableType(QSurfaceFormat::RenderableType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setSamples(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setStencilBufferSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setStereo(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setSwapBehavior(QSurfaceFormat::SwapBehavior(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setSwapInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setVersion(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 30: { int _r = o->stencilBufferSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 31: { bool _r = o->stereo();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { qint64 _r = o->swapBehavior(); // HACK for SwapBehavior 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 33: { int _r = o->swapInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 34: { bool _r = o->testOption(QSurfaceFormat::FormatOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 35: { /* COPY OBJECT */
            QSurfaceFormat *_r = sc ? new QSurfaceFormat(QSurfaceFormat::defaultFormat()) : new QSurfaceFormat(o->defaultFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSurfaceFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: if(sc) { QSurfaceFormat::setDefaultFormat((*reinterpret_cast< QSurfaceFormat(*) >(stack[1].s_voidp))); } else { o->setDefaultFormat((*reinterpret_cast< QSurfaceFormat(*) >(stack[1].s_voidp))); }
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
        QSurfaceFormat *o = reinterpret_cast<QSurfaceFormat*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSurfaceFormat::~PlastiQQSurfaceFormat() {
    QSurfaceFormat* o = reinterpret_cast<QSurfaceFormat*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
