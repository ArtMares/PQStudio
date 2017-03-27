#include "plastiqmethod.h"
#include "plastiqqmediarecordercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaRecorderControl> 
#include <QUrl>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaRecorderControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaRecorderControl::plastiqMethods = {
    { "applySettings()", { "applySettings", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "qint64", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMuted()", { "isMuted", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "outputLocation()", { "outputLocation", "", "QUrl", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOutputLocation(QUrl&)", { "setOutputLocation", "QUrl&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QMediaRecorder::State", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "QMediaRecorder::Status", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMuted(bool)", { "setMuted", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setState(enum)", { "setState", "QMediaRecorder::State", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVolume(double)", { "setVolume", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaRecorderControl::plastiqSignals = {
    { "actualLocationChanged(QUrl&)", { "actualLocationChanged", "QUrl&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "durationChanged(long)", { "durationChanged", "qint64", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(int,QString)", { "error", "int,QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mutedChanged(bool)", { "mutedChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QMediaRecorder::State", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "statusChanged(enum)", { "statusChanged", "QMediaRecorder::Status", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "volumeChanged(double)", { "volumeChanged", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaRecorderControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaRecorderControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaRecorderControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaRecorderControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaRecorderControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaRecorderControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaRecorderControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaRecorderControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaRecorderControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaRecorderControl *p = new PlastiQQMediaRecorderControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaRecorderControl *p = new PlastiQQMediaRecorderControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaRecorderControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaRecorderControl*>(object->plastiq_data());

        switch(id) {
        case 0: o->applySettings();
                stack[0].type = PlastiQ::Void; break;
        case 1: { long _r = o->duration();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 2: { bool _r = o->isMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->outputLocation());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->setOutputLocation((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { qint64 _r = o->state(); // HACK for QMediaRecorder::State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { qint64 _r = o->status(); // HACK for QMediaRecorder::Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { double _r = o->volume();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: o->setMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setState(QMediaRecorder::State(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setVolume(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaRecorderControl *o = reinterpret_cast<QMediaRecorderControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaRecorderControl::actualLocationChanged,
            [=](const QUrl& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QUrl(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QUrl";
                PlastiQ_activate(sender, "actualLocationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaRecorderControl::durationChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "durationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMediaRecorderControl::error,
            [=](int arg0, const QString& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QMediaRecorderControl::mutedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "mutedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QMediaRecorderControl::stateChanged,
            [=](QMediaRecorder::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaRecorder::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QMediaRecorderControl::statusChanged,
            [=](QMediaRecorder::Status arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaRecorder::Status";
                PlastiQ_activate(sender, "statusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QMediaRecorderControl::volumeChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "volumeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaRecorderControl *o = reinterpret_cast<QMediaRecorderControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaRecorderControl *o = reinterpret_cast<QMediaRecorderControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaRecorderControl *o = reinterpret_cast<QMediaRecorderControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaRecorderControl::~PlastiQQMediaRecorderControl() {
    QMediaRecorderControl* o = reinterpret_cast<QMediaRecorderControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
