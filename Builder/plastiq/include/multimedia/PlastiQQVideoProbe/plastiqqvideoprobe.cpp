#include "plastiqmethod.h"
#include "plastiqqvideoprobe.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QVideoProbe> 
#include <QVideoFrame>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoProbe::plastiqConstructors = {
    { "QVideoProbe()", { "QVideoProbe", "", "QVideoProbe*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoProbe(QObject*)", { "QVideoProbe", "QObject*", "QVideoProbe*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoProbe::plastiqMethods = {
    { "isActive()", { "isActive", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSource(QMediaObject*)", { "setSource", "QMediaObject*", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSource(QMediaRecorder*)", { "setSource", "QMediaRecorder*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoProbe::plastiqSignals = {
    { "flush()", { "flush", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "videoFrameProbed(QVideoFrame&)", { "videoFrameProbed", "QVideoFrame&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoProbe::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoProbe::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVideoProbe::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVideoProbe::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVideoProbe::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QVideoProbe", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoProbe::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoProbe::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoProbe *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVideoProbe(); break;
        case 1: o = new QVideoProbe(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoProbe *p = new PlastiQQVideoProbe();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoProbe *p = new PlastiQQVideoProbe();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoProbe *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoProbe*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->setSource(reinterpret_cast<QMediaObject*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->setSource(reinterpret_cast<QMediaRecorder*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QVideoProbe *o = reinterpret_cast<QVideoProbe*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVideoProbe::flush,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "flush", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QVideoProbe::videoFrameProbed,
            [=](const QVideoFrame& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QVideoFrame(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QVideoFrame";
                PlastiQ_activate(sender, "videoFrameProbed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVideoProbe *o = reinterpret_cast<QVideoProbe*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVideoProbe *o = reinterpret_cast<QVideoProbe*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVideoProbe *o = reinterpret_cast<QVideoProbe*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVideoProbe::~PlastiQQVideoProbe() {
    QVideoProbe* o = reinterpret_cast<QVideoProbe*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
