#include "plastiqmethod.h"
#include "plastiqqabstractvideosurface.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractVideoSurface> 
#include <QVideoSurfaceFormat>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoSurface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoSurface::plastiqMethods = {
    { "error()", { "error", "", "Error", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFormatSupported(QVideoSurfaceFormat&)", { "isFormatSupported", "QVideoSurfaceFormat&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeResolution()", { "nativeResolution", "", "QSize", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nearestFormat(QVideoSurfaceFormat&)", { "nearestFormat", "QVideoSurfaceFormat&", "QVideoSurfaceFormat", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "present(QVideoFrame&)", { "present", "QVideoFrame&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start(QVideoSurfaceFormat&)", { "start", "QVideoSurfaceFormat&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "surfaceFormat()", { "surfaceFormat", "", "QVideoSurfaceFormat", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setError(enum)", { "setError", "Error", "void", 9, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setNativeResolution(QSize&)", { "setNativeResolution", "QSize&", "void", 10, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractVideoSurface::plastiqSignals = {
    { "activeChanged(bool)", { "activeChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "nativeResolutionChanged(QSize&)", { "nativeResolutionChanged", "QSize&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "supportedFormatsChanged()", { "supportedFormatsChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "surfaceFormatChanged(QVideoSurfaceFormat&)", { "surfaceFormatChanged", "QVideoSurfaceFormat&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractVideoSurface::plastiqProperties = {
    { "nativeResolution", { "nativeResolution", "QSize", "nativeResolutionChanged", "nativeResolution" } },

};

QHash<QByteArray, long> PlastiQQAbstractVideoSurface::plastiqConstants = {

    /* QAbstractVideoSurface::Error */
   { "NoError", QAbstractVideoSurface::NoError },
   { "UnsupportedFormatError", QAbstractVideoSurface::UnsupportedFormatError },
   { "IncorrectFormatError", QAbstractVideoSurface::IncorrectFormatError },
   { "StoppedError", QAbstractVideoSurface::StoppedError },
   { "ResourceError", QAbstractVideoSurface::ResourceError },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractVideoSurface::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractVideoSurface::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractVideoSurface::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractVideoSurface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractVideoSurface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractVideoSurfaceWrapper : public QAbstractVideoSurface {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    bool isFormatSupported(const QVideoSurfaceFormat &format) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isFormatSupported(const QVideoSurfaceFormat&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QVideoSurfaceFormat(format) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QVideoSurfaceFormat");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractVideoSurface::isFormatSupported(format);
    }

    bool PlastiQParentCall_isFormatSupported(const QVideoSurfaceFormat &format) const {
        return QAbstractVideoSurface::isFormatSupported(format);
    }

    QVideoSurfaceFormat nearestFormat(const QVideoSurfaceFormat &format) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVideoSurfaceFormat nearestFormat(const QVideoSurfaceFormat&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QVideoSurfaceFormat(format) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QVideoSurfaceFormat");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVideoSurfaceFormat _r = QVideoSurfaceFormat(*reinterpret_cast<QVideoSurfaceFormat*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAbstractVideoSurface::nearestFormat(format);
    }

    QVideoSurfaceFormat PlastiQParentCall_nearestFormat(const QVideoSurfaceFormat &format) const {
        return QAbstractVideoSurface::nearestFormat(format);
    }

    bool start(const QVideoSurfaceFormat &format) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool start(const QVideoSurfaceFormat&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QVideoSurfaceFormat(format) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QVideoSurfaceFormat");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractVideoSurface::start(format);
    }

    bool PlastiQParentCall_start(const QVideoSurfaceFormat &format) {
        return QAbstractVideoSurface::start(format);
    }

    void stop() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void stop()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractVideoSurface::stop();
    }

    void PlastiQParentCall_stop() {
        return QAbstractVideoSurface::stop();
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractVideoSurface::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAbstractVideoSurface::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QAbstractVideoSurface::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QAbstractVideoSurface::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAbstractVideoSurface::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QAbstractVideoSurface::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractVideoSurface::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QAbstractVideoSurface::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractVideoSurface::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QAbstractVideoSurface::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractVideoSurface::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QAbstractVideoSurface::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractVideoSurface::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QAbstractVideoSurface::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractVideoSurface::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QAbstractVideoSurface::timerEvent(event);
    }

};

void PlastiQQAbstractVideoSurface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractVideoSurfaceWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractVideoSurface *p = new PlastiQQAbstractVideoSurface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractVideoSurface *p = new PlastiQQAbstractVideoSurface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractVideoSurface *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractVideoSurface*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractVideoSurfaceWrapper*)o)->PlastiQParentCall_isFormatSupported((*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[1].s_voidp)));
                else _r = o->isFormatSupported((*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QSize *_r = new QSize(o->nativeResolution());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QVideoSurfaceFormat *_r;
                if (isWrapper) _r = new QVideoSurfaceFormat(((PlastiQQAbstractVideoSurfaceWrapper*)o)->PlastiQParentCall_nearestFormat((*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[1].s_voidp))));
                else _r = new QVideoSurfaceFormat(o->nearestFormat((*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVideoSurfaceFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { bool _r = o->present((*reinterpret_cast< QVideoFrame(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractVideoSurfaceWrapper*)o)->PlastiQParentCall_start((*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[1].s_voidp)));
                else _r = o->start((*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: if (isWrapper) ((PlastiQQAbstractVideoSurfaceWrapper*)o)->PlastiQParentCall_stop();
                else o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 8: { /* COPY OBJECT */
            QVideoSurfaceFormat *_r = new QVideoSurfaceFormat(o->surfaceFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVideoSurfaceFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 10: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractVideoSurface *o = reinterpret_cast<QAbstractVideoSurface*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractVideoSurface::activeChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "activeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractVideoSurface::nativeResolutionChanged,
            [=](const QSize& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSize(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSize";
                PlastiQ_activate(sender, "nativeResolutionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractVideoSurface::supportedFormatsChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "supportedFormatsChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractVideoSurface::surfaceFormatChanged,
            [=](const QVideoSurfaceFormat& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QVideoSurfaceFormat(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QVideoSurfaceFormat";
                PlastiQ_activate(sender, "surfaceFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractVideoSurface *o = reinterpret_cast<QAbstractVideoSurface*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractVideoSurface *o = reinterpret_cast<QAbstractVideoSurface*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractVideoSurface *o = reinterpret_cast<QAbstractVideoSurface*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractVideoSurface::~PlastiQQAbstractVideoSurface() {
    QAbstractVideoSurface* o = reinterpret_cast<QAbstractVideoSurface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
