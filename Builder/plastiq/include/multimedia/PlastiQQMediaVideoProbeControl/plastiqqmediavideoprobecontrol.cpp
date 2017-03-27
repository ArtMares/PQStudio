#include "plastiqmethod.h"
#include "plastiqqmediavideoprobecontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaVideoProbeControl> 
#include <QVideoFrame>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaVideoProbeControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaVideoProbeControl::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaVideoProbeControl::plastiqSignals = {
    { "flush()", { "flush", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "videoFrameProbed(QVideoFrame&)", { "videoFrameProbed", "QVideoFrame&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaVideoProbeControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaVideoProbeControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaVideoProbeControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaVideoProbeControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaVideoProbeControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaVideoProbeControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaVideoProbeControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaVideoProbeControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaVideoProbeControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaVideoProbeControl *p = new PlastiQQMediaVideoProbeControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaVideoProbeControl *p = new PlastiQQMediaVideoProbeControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaVideoProbeControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaVideoProbeControl*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaVideoProbeControl *o = reinterpret_cast<QMediaVideoProbeControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaVideoProbeControl::flush,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "flush", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaVideoProbeControl::videoFrameProbed,
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
        QMediaVideoProbeControl *o = reinterpret_cast<QMediaVideoProbeControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaVideoProbeControl *o = reinterpret_cast<QMediaVideoProbeControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaVideoProbeControl *o = reinterpret_cast<QMediaVideoProbeControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaVideoProbeControl::~PlastiQQMediaVideoProbeControl() {
    QMediaVideoProbeControl* o = reinterpret_cast<QMediaVideoProbeControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
