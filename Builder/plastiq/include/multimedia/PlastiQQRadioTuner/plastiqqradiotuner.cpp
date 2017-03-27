#include "plastiqmethod.h"
#include "plastiqqradiotuner.h"

#include "multimedia/PlastiQQMediaObject/plastiqqmediaobject.h"
#include <QRadioTuner> 
#include <QString>
#include <QRadioData>

QHash<QByteArray, PlastiQMethod> PlastiQQRadioTuner::plastiqConstructors = {
    { "QRadioTuner()", { "QRadioTuner", "", "QRadioTuner*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadioTuner(QObject*)", { "QRadioTuner", "QObject*", "QRadioTuner*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioTuner::plastiqMethods = {
    { "band()", { "band", "", "Band", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frequency()", { "frequency", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frequencyStep(enum)", { "frequencyStep", "Band", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAntennaConnected()", { "isAntennaConnected", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBandSupported(enum)", { "isBandSupported", "Band", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMuted()", { "isMuted", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSearching()", { "isSearching", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isStereo()", { "isStereo", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "radioData()", { "radioData", "", "QRadioData*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStereoMode(enum)", { "setStereoMode", "QRadioTuner::StereoMode", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "signalStrength()", { "signalStrength", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stereoMode()", { "stereoMode", "", "StereoMode", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cancelSearch()", { "cancelSearch", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "searchAllStations()", { "searchAllStations", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "searchAllStations(enum)", { "searchAllStations", "QRadioTuner::SearchMode", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "searchBackward()", { "searchBackward", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "searchForward()", { "searchForward", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setBand(enum)", { "setBand", "Band", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFrequency(int)", { "setFrequency", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMuted(bool)", { "setMuted", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVolume(int)", { "setVolume", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioTuner::plastiqSignals = {
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

QHash<QByteArray, PlastiQProperty> PlastiQQRadioTuner::plastiqProperties = {
    { "antennaConnected", { "antennaConnected", "bool", "antennaConnectedChanged", "isAntennaConnected" } },
    { "band", { "band", "long", "setBand", "band" } },
    { "frequency", { "frequency", "int", "setFrequency", "frequency" } },
    { "muted", { "muted", "bool", "setMuted", "isMuted" } },
    { "radioData", { "radioData", "QRadioDataconst*", "", "radioData" } },
    { "searching", { "searching", "bool", "searchingChanged", "isSearching" } },
    { "signalStrength", { "signalStrength", "int", "signalStrengthChanged", "signalStrength" } },
    { "state", { "state", "long", "stateChanged", "state" } },
    { "stereo", { "stereo", "bool", "stereoStatusChanged", "isStereo" } },
    { "stereoMode", { "stereoMode", "long", "setStereoMode", "stereoMode" } },
    { "volume", { "volume", "int", "setVolume", "volume" } },

};

QHash<QByteArray, long> PlastiQQRadioTuner::plastiqConstants = {

    /* QRadioTuner::Band */
   { "AM", QRadioTuner::AM },
   { "FM", QRadioTuner::FM },
   { "SW", QRadioTuner::SW },
   { "LW", QRadioTuner::LW },
   { "FM2", QRadioTuner::FM2 },

    /* QRadioTuner::Error */
   { "NoError", QRadioTuner::NoError },
   { "ResourceError", QRadioTuner::ResourceError },
   { "OpenError", QRadioTuner::OpenError },
   { "OutOfRangeError", QRadioTuner::OutOfRangeError },

    /* QRadioTuner::SearchMode */
   { "SearchFast", QRadioTuner::SearchFast },
   { "SearchGetStationId", QRadioTuner::SearchGetStationId },

    /* QRadioTuner::State */
   { "ActiveState", QRadioTuner::ActiveState },
   { "StoppedState", QRadioTuner::StoppedState },

    /* QRadioTuner::StereoMode */
   { "ForceStereo", QRadioTuner::ForceStereo },
   { "ForceMono", QRadioTuner::ForceMono },
   { "Auto", QRadioTuner::Auto },

};

QVector<PlastiQMetaObject*> PlastiQQRadioTuner::plastiqInherits = { &PlastiQQMediaObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRadioTuner::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQRadioTuner::plastiq_static_metaObject = {
    { &PlastiQQMediaObject::plastiq_static_metaObject, &plastiqInherits, "QRadioTuner", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRadioTuner::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRadioTuner::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRadioTuner *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRadioTuner(); break;
        case 1: o = new QRadioTuner(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRadioTuner *p = new PlastiQQRadioTuner();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRadioTuner *p = new PlastiQQRadioTuner();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRadioTuner *o = sc ? Q_NULLPTR : reinterpret_cast<QRadioTuner*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->band(); // HACK for Band 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { int _r = o->frequency();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->frequencyStep(QRadioTuner::Band(stack[1].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { bool _r = o->isAntennaConnected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isBandSupported(QRadioTuner::Band(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isSearching();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isStereo();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { QRadioData* _r = o->radioData();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QRadioData"; } break;
        case 11: o->setStereoMode(QRadioTuner::StereoMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: { int _r = o->signalStrength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { qint64 _r = o->stereoMode(); // HACK for StereoMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { int _r = o->volume();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: o->cancelSearch();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->searchAllStations();
                stack[0].type = PlastiQ::Void; break;
        case 18: o->searchAllStations(QRadioTuner::SearchMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->searchBackward();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->searchForward();
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setBand(QRadioTuner::Band(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setFrequency(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setVolume(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 26: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 11) {
            id -= 11;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QRadioTuner *o = reinterpret_cast<QRadioTuner*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QRadioTuner::antennaConnectedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "antennaConnectedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QRadioTuner::bandChanged,
            [=](QRadioTuner::Band arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioTuner::Band";
                PlastiQ_activate(sender, "bandChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QRadioTuner::*)(QRadioTuner::Error)>(&QRadioTuner::error),
            [=](QRadioTuner::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioTuner::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QRadioTuner::frequencyChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "frequencyChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QRadioTuner::mutedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "mutedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QRadioTuner::searchingChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "searchingChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QRadioTuner::signalStrengthChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "signalStrengthChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QRadioTuner::stateChanged,
            [=](QRadioTuner::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioTuner::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QRadioTuner::stationFound,
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

        case 9: QObject::connect(o, &QRadioTuner::stereoStatusChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "stereoStatusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QRadioTuner::volumeChanged,
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
        QRadioTuner *o = reinterpret_cast<QRadioTuner*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QRadioTuner *o = reinterpret_cast<QRadioTuner*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QRadioTuner *o = reinterpret_cast<QRadioTuner*>(object->plastiq_data());

        if(className == "QMediaObject") {
            stack[0].s_voidp = static_cast<QMediaObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRadioTuner::~PlastiQQRadioTuner() {
    QRadioTuner* o = reinterpret_cast<QRadioTuner*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
