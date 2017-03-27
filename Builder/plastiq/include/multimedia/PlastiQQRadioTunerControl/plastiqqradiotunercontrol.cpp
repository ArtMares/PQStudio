#include "plastiqmethod.h"
#include "plastiqqradiotunercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QRadioTunerControl> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQRadioTunerControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioTunerControl::plastiqMethods = {
    { "band()", { "band", "", "QRadioTuner::Band", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cancelSearch()", { "cancelSearch", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "QRadioTuner::Error", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frequency()", { "frequency", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frequencyStep(enum)", { "frequencyStep", "QRadioTuner::Band", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAntennaConnected()", { "isAntennaConnected", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBandSupported(enum)", { "isBandSupported", "QRadioTuner::Band", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMuted()", { "isMuted", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSearching()", { "isSearching", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isStereo()", { "isStereo", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "searchAllStations()", { "searchAllStations", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "searchAllStations(enum)", { "searchAllStations", "QRadioTuner::SearchMode", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "searchBackward()", { "searchBackward", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "searchForward()", { "searchForward", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBand(enum)", { "setBand", "QRadioTuner::Band", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrequency(int)", { "setFrequency", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMuted(bool)", { "setMuted", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStereoMode(enum)", { "setStereoMode", "QRadioTuner::StereoMode", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVolume(int)", { "setVolume", "int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "signalStrength()", { "signalStrength", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QRadioTuner::State", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stereoMode()", { "stereoMode", "", "QRadioTuner::StereoMode", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioTunerControl::plastiqSignals = {
    { "antennaConnectedChanged(bool)", { "antennaConnectedChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "bandChanged(enum)", { "bandChanged", "QRadioTuner::Band", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QRadioTuner::Error", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "frequencyChanged(int)", { "frequencyChanged", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mutedChanged(bool)", { "mutedChanged", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "searchingChanged(bool)", { "searchingChanged", "bool", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "signalStrengthChanged(int)", { "signalStrengthChanged", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QRadioTuner::State", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stationFound(int,QString)", { "stationFound", "int,QString", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stereoStatusChanged(bool)", { "stereoStatusChanged", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "volumeChanged(int)", { "volumeChanged", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQRadioTunerControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRadioTunerControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRadioTunerControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRadioTunerControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQRadioTunerControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QRadioTunerControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRadioTunerControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQRadioTunerControlWrapper : public QRadioTunerControl {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    bool isAntennaConnected() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isAntennaConnected()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QRadioTunerControl::isAntennaConnected();
    }

    bool PlastiQParentCall_isAntennaConnected() const {
        return QRadioTunerControl::isAntennaConnected();
    }

};

void PlastiQQRadioTunerControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQRadioTunerControlWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQRadioTunerControl *p = new PlastiQQRadioTunerControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRadioTunerControl *p = new PlastiQQRadioTunerControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 26) {
            id -= 26;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRadioTunerControl *o = sc ? Q_NULLPTR : reinterpret_cast<QRadioTunerControl*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->band(); // HACK for QRadioTuner::Band 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->cancelSearch();
                stack[0].type = PlastiQ::Void; break;
        case 2: { qint64 _r = o->error(); // HACK for QRadioTuner::Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { int _r = o->frequency();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->frequencyStep(QRadioTuner::Band(stack[1].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { bool _r;
                if (isWrapper) _r = ((PlastiQQRadioTunerControlWrapper*)o)->PlastiQParentCall_isAntennaConnected();
                else _r = o->isAntennaConnected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isBandSupported(QRadioTuner::Band(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isSearching();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isStereo();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: o->searchAllStations();
                stack[0].type = PlastiQ::Void; break;
        case 12: o->searchAllStations(QRadioTuner::SearchMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->searchBackward();
                stack[0].type = PlastiQ::Void; break;
        case 14: o->searchForward();
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setBand(QRadioTuner::Band(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setFrequency(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setStereoMode(QRadioTuner::StereoMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setVolume(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: { int _r = o->signalStrength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 22: { qint64 _r = o->state(); // HACK for QRadioTuner::State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 23: { qint64 _r = o->stereoMode(); // HACK for QRadioTuner::StereoMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 25: { int _r = o->volume();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 11) {
            id -= 11;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QRadioTunerControl *o = reinterpret_cast<QRadioTunerControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QRadioTunerControl::antennaConnectedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "antennaConnectedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QRadioTunerControl::bandChanged,
            [=](QRadioTuner::Band arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioTuner::Band";
                PlastiQ_activate(sender, "bandChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QRadioTunerControl::*)(QRadioTuner::Error)>(&QRadioTunerControl::error),
            [=](QRadioTuner::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioTuner::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QRadioTunerControl::frequencyChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "frequencyChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QRadioTunerControl::mutedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "mutedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QRadioTunerControl::searchingChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "searchingChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QRadioTunerControl::signalStrengthChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "signalStrengthChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QRadioTunerControl::stateChanged,
            [=](QRadioTuner::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioTuner::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QRadioTunerControl::stationFound,
            [=](int arg0, QString arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_string = arg1;
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                PlastiQ_activate(sender, "stationFound", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QRadioTunerControl::stereoStatusChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "stereoStatusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QRadioTunerControl::volumeChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "volumeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QRadioTunerControl *o = reinterpret_cast<QRadioTunerControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QRadioTunerControl *o = reinterpret_cast<QRadioTunerControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QRadioTunerControl *o = reinterpret_cast<QRadioTunerControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRadioTunerControl::~PlastiQQRadioTunerControl() {
    QRadioTunerControl* o = reinterpret_cast<QRadioTunerControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
