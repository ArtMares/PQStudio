#include "plastiqmethod.h"
#include "plastiqqradiodatacontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QRadioDataControl> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQRadioDataControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioDataControl::plastiqMethods = {
    { "error()", { "error", "", "QRadioData::Error", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAlternativeFrequenciesEnabled()", { "isAlternativeFrequenciesEnabled", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "programType()", { "programType", "", "QRadioData::ProgramType", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "programTypeName()", { "programTypeName", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "radioText()", { "radioText", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlternativeFrequenciesEnabled(bool)", { "setAlternativeFrequenciesEnabled", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stationId()", { "stationId", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stationName()", { "stationName", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioDataControl::plastiqSignals = {
    { "alternativeFrequenciesEnabledChanged(bool)", { "alternativeFrequenciesEnabledChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QRadioData::Error", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "programTypeChanged(enum)", { "programTypeChanged", "QRadioData::ProgramType", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "programTypeNameChanged(QString)", { "programTypeNameChanged", "QString", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "radioTextChanged(QString)", { "radioTextChanged", "QString", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stationIdChanged(QString)", { "stationIdChanged", "QString", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stationNameChanged(QString)", { "stationNameChanged", "QString", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQRadioDataControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRadioDataControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRadioDataControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRadioDataControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQRadioDataControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QRadioDataControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRadioDataControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRadioDataControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRadioDataControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRadioDataControl *p = new PlastiQQRadioDataControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRadioDataControl *p = new PlastiQQRadioDataControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRadioDataControl *o = sc ? Q_NULLPTR : reinterpret_cast<QRadioDataControl*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->error(); // HACK for QRadioData::Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->isAlternativeFrequenciesEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { qint64 _r = o->programType(); // HACK for QRadioData::ProgramType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QString _r = o->programTypeName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = o->radioText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: o->setAlternativeFrequenciesEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: { QString _r = o->stationId();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->stationName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QRadioDataControl *o = reinterpret_cast<QRadioDataControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QRadioDataControl::alternativeFrequenciesEnabledChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "alternativeFrequenciesEnabledChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QRadioDataControl::*)(QRadioData::Error)>(&QRadioDataControl::error),
            [=](QRadioData::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioData::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QRadioDataControl::programTypeChanged,
            [=](QRadioData::ProgramType arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioData::ProgramType";
                PlastiQ_activate(sender, "programTypeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QRadioDataControl::programTypeNameChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "programTypeNameChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QRadioDataControl::radioTextChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "radioTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QRadioDataControl::stationIdChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "stationIdChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QRadioDataControl::stationNameChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "stationNameChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QRadioDataControl *o = reinterpret_cast<QRadioDataControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QRadioDataControl *o = reinterpret_cast<QRadioDataControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QRadioDataControl *o = reinterpret_cast<QRadioDataControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRadioDataControl::~PlastiQQRadioDataControl() {
    QRadioDataControl* o = reinterpret_cast<QRadioDataControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
