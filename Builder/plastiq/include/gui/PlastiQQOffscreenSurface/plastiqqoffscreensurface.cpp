#include "plastiqmethod.h"
#include "plastiqqoffscreensurface.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "gui/PlastiQQSurface/plastiqqsurface.h"
#include <QOffscreenSurface> 
#include <QSurfaceFormat>
#include <QScreen>

QHash<QByteArray, PlastiQMethod> PlastiQQOffscreenSurface::plastiqConstructors = {
    { "QOffscreenSurface()", { "QOffscreenSurface", "", "QOffscreenSurface*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QOffscreenSurface(QScreen*)", { "QOffscreenSurface", "QScreen*", "QOffscreenSurface*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQOffscreenSurface::plastiqMethods = {
    { "create()", { "create", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "destroy()", { "destroy", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedFormat()", { "requestedFormat", "", "QSurfaceFormat", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screen()", { "screen", "", "QScreen*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QSurfaceFormat&)", { "setFormat", "QSurfaceFormat&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScreen(QScreen*)", { "setScreen", "QScreen*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQOffscreenSurface::plastiqSignals = {
    { "screenChanged(QScreen*)", { "screenChanged", "QScreen*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQOffscreenSurface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQOffscreenSurface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQOffscreenSurface::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQSurface::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQOffscreenSurface::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQOffscreenSurface::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QOffscreenSurface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQOffscreenSurface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQOffscreenSurface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QOffscreenSurface *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QOffscreenSurface(); break;
        case 1: o = new QOffscreenSurface(reinterpret_cast<QScreen*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQOffscreenSurface *p = new PlastiQQOffscreenSurface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQOffscreenSurface *p = new PlastiQQOffscreenSurface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QOffscreenSurface *o = sc ? Q_NULLPTR : reinterpret_cast<QOffscreenSurface*>(object->plastiq_data());

        switch(id) {
        case 0: o->create();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->destroy();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QSurfaceFormat *_r = new QSurfaceFormat(o->requestedFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSurfaceFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { QScreen* _r = o->screen();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QScreen"; } break;
        case 5: o->setFormat((*reinterpret_cast< QSurfaceFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setScreen(reinterpret_cast<QScreen*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QOffscreenSurface *o = reinterpret_cast<QOffscreenSurface*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QOffscreenSurface::screenChanged,
            [=](QScreen* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QScreen";
                PlastiQ_activate(sender, "screenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QOffscreenSurface *o = reinterpret_cast<QOffscreenSurface*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QOffscreenSurface *o = reinterpret_cast<QOffscreenSurface*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QOffscreenSurface *o = reinterpret_cast<QOffscreenSurface*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QSurface") {
            stack[0].s_voidp = static_cast<QSurface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQOffscreenSurface::~PlastiQQOffscreenSurface() {
    QOffscreenSurface* o = reinterpret_cast<QOffscreenSurface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
