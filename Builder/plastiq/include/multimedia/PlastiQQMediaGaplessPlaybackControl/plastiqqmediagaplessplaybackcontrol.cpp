#include "plastiqmethod.h"
#include "plastiqqmediagaplessplaybackcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaGaplessPlaybackControl> 
#include <QMediaContent>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaGaplessPlaybackControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaGaplessPlaybackControl::plastiqMethods = {
    { "crossfadeTime()", { "crossfadeTime", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCrossfadeSupported()", { "isCrossfadeSupported", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextMedia()", { "nextMedia", "", "QMediaContent", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCrossfadeTime(double)", { "setCrossfadeTime", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNextMedia(QMediaContent&)", { "setNextMedia", "QMediaContent&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaGaplessPlaybackControl::plastiqSignals = {
    { "advancedToNextMedia()", { "advancedToNextMedia", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "crossfadeTimeChanged(double)", { "crossfadeTimeChanged", "qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "nextMediaChanged(QMediaContent&)", { "nextMediaChanged", "QMediaContent&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaGaplessPlaybackControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaGaplessPlaybackControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaGaplessPlaybackControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaGaplessPlaybackControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaGaplessPlaybackControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaGaplessPlaybackControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaGaplessPlaybackControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaGaplessPlaybackControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaGaplessPlaybackControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaGaplessPlaybackControl *p = new PlastiQQMediaGaplessPlaybackControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaGaplessPlaybackControl *p = new PlastiQQMediaGaplessPlaybackControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaGaplessPlaybackControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaGaplessPlaybackControl*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->crossfadeTime();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { bool _r = o->isCrossfadeSupported();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QMediaContent *_r = new QMediaContent(o->nextMedia());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaContent";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->setCrossfadeTime(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setNextMedia((*reinterpret_cast< QMediaContent(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaGaplessPlaybackControl *o = reinterpret_cast<QMediaGaplessPlaybackControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaGaplessPlaybackControl::advancedToNextMedia,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "advancedToNextMedia", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaGaplessPlaybackControl::crossfadeTimeChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "crossfadeTimeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMediaGaplessPlaybackControl::nextMediaChanged,
            [=](const QMediaContent& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QMediaContent(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QMediaContent";
                PlastiQ_activate(sender, "nextMediaChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaGaplessPlaybackControl *o = reinterpret_cast<QMediaGaplessPlaybackControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaGaplessPlaybackControl *o = reinterpret_cast<QMediaGaplessPlaybackControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaGaplessPlaybackControl *o = reinterpret_cast<QMediaGaplessPlaybackControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaGaplessPlaybackControl::~PlastiQQMediaGaplessPlaybackControl() {
    QMediaGaplessPlaybackControl* o = reinterpret_cast<QMediaGaplessPlaybackControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
