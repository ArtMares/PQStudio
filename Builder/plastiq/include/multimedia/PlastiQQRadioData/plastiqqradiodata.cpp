#include "plastiqmethod.h"
#include "plastiqqradiodata.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "multimedia/PlastiQQMediaBindableInterface/plastiqqmediabindableinterface.h"
#include <QRadioData> 
#include <QString>
#include <QMediaObject>

QHash<QByteArray, PlastiQMethod> PlastiQQRadioData::plastiqConstructors = {
    { "QRadioData(QMediaObject*)", { "QRadioData", "QMediaObject*", "QRadioData*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRadioData(QMediaObject*,QObject*)", { "QRadioData", "QMediaObject*,QObject*", "QRadioData*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioData::plastiqMethods = {
    { "availability()", { "availability", "", "QMultimedia::AvailabilityStatus", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAlternativeFrequenciesEnabled()", { "isAlternativeFrequenciesEnabled", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "programType()", { "programType", "", "ProgramType", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "programTypeName()", { "programTypeName", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "radioText()", { "radioText", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stationId()", { "stationId", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stationName()", { "stationName", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMediaObject(QMediaObject*)", { "setMediaObject", "QMediaObject*", "bool", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setAlternativeFrequenciesEnabled(bool)", { "setAlternativeFrequenciesEnabled", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRadioData::plastiqSignals = {
    { "alternativeFrequenciesEnabledChanged(bool)", { "alternativeFrequenciesEnabledChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QRadioData::Error", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "programTypeChanged(enum)", { "programTypeChanged", "QRadioData::ProgramType", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "programTypeNameChanged(QString)", { "programTypeNameChanged", "QString", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "radioTextChanged(QString)", { "radioTextChanged", "QString", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stationIdChanged(QString)", { "stationIdChanged", "QString", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stationNameChanged(QString)", { "stationNameChanged", "QString", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQRadioData::plastiqProperties = {
    { "alternativeFrequenciesEnabled", { "alternativeFrequenciesEnabled", "bool", "setAlternativeFrequenciesEnabled", "isAlternativeFrequenciesEnabled" } },
    { "programType", { "programType", "long", "programTypeChanged", "programType" } },
    { "programTypeName", { "programTypeName", "QString", "programTypeNameChanged", "programTypeName" } },
    { "radioText", { "radioText", "QString", "radioTextChanged", "radioText" } },
    { "stationId", { "stationId", "QString", "stationIdChanged", "stationId" } },
    { "stationName", { "stationName", "QString", "stationNameChanged", "stationName" } },

};

QHash<QByteArray, long> PlastiQQRadioData::plastiqConstants = {

    /* QRadioData::Error */
   { "NoError", QRadioData::NoError },
   { "ResourceError", QRadioData::ResourceError },
   { "OpenError", QRadioData::OpenError },
   { "OutOfRangeError", QRadioData::OutOfRangeError },

    /* QRadioData::ProgramType */
   { "Undefined", QRadioData::Undefined },
   { "News", QRadioData::News },
   { "CurrentAffairs", QRadioData::CurrentAffairs },
   { "Information", QRadioData::Information },
   { "Sport", QRadioData::Sport },
   { "Education", QRadioData::Education },
   { "Drama", QRadioData::Drama },
   { "Culture", QRadioData::Culture },
   { "Science", QRadioData::Science },
   { "Varied", QRadioData::Varied },
   { "PopMusic", QRadioData::PopMusic },
   { "RockMusic", QRadioData::RockMusic },
   { "EasyListening", QRadioData::EasyListening },
   { "LightClassical", QRadioData::LightClassical },
   { "SeriousClassical", QRadioData::SeriousClassical },
   { "OtherMusic", QRadioData::OtherMusic },
   { "Weather", QRadioData::Weather },
   { "Finance", QRadioData::Finance },
   { "ChildrensProgrammes", QRadioData::ChildrensProgrammes },
   { "SocialAffairs", QRadioData::SocialAffairs },
   { "Religion", QRadioData::Religion },
   { "PhoneIn", QRadioData::PhoneIn },
   { "Travel", QRadioData::Travel },
   { "Leisure", QRadioData::Leisure },
   { "JazzMusic", QRadioData::JazzMusic },
   { "CountryMusic", QRadioData::CountryMusic },
   { "NationalMusic", QRadioData::NationalMusic },
   { "OldiesMusic", QRadioData::OldiesMusic },
   { "FolkMusic", QRadioData::FolkMusic },
   { "Documentary", QRadioData::Documentary },
   { "AlarmTest", QRadioData::AlarmTest },
   { "Alarm", QRadioData::Alarm },
   { "Talk", QRadioData::Talk },
   { "ClassicRock", QRadioData::ClassicRock },
   { "AdultHits", QRadioData::AdultHits },
   { "SoftRock", QRadioData::SoftRock },
   { "Top40", QRadioData::Top40 },
   { "Soft", QRadioData::Soft },
   { "Nostalgia", QRadioData::Nostalgia },
   { "Classical", QRadioData::Classical },
   { "RhythmAndBlues", QRadioData::RhythmAndBlues },
   { "SoftRhythmAndBlues", QRadioData::SoftRhythmAndBlues },
   { "Language", QRadioData::Language },
   { "ReligiousMusic", QRadioData::ReligiousMusic },
   { "ReligiousTalk", QRadioData::ReligiousTalk },
   { "Personality", QRadioData::Personality },
   { "Public", QRadioData::Public },
   { "College", QRadioData::College },

};

QVector<PlastiQMetaObject*> PlastiQQRadioData::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQMediaBindableInterface::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQRadioData::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQRadioData::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QRadioData", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRadioData::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQRadioDataWrapper : public QRadioData {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQRadioDataWrapper(QMediaObject *mediaObject, QObject *parent = Q_NULLPTR)
         : QRadioData(mediaObject,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool setMediaObject(QMediaObject *mediaObject) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool setMediaObject(QMediaObject*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mediaObject);
            stack[1].name = QByteArrayLiteral("QMediaObject");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QRadioData::setMediaObject(mediaObject);
    }

    bool PlastiQParentCall_setMediaObject(QMediaObject *mediaObject) {
        return QRadioData::setMediaObject(mediaObject);
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
        else return QRadioData::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QRadioData::event(e);
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
        else return QRadioData::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QRadioData::eventFilter(watched,event);
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
        else return QRadioData::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QRadioData::metaObject();
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
        else return QRadioData::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QRadioData::childEvent(event);
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
        else return QRadioData::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QRadioData::connectNotify(signal);
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
        else return QRadioData::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QRadioData::customEvent(event);
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
        else return QRadioData::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QRadioData::disconnectNotify(signal);
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
        else return QRadioData::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QRadioData::timerEvent(event);
    }

};

void PlastiQQRadioData::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQRadioDataWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQRadioDataWrapper(reinterpret_cast<QMediaObject*>(stack[1].s_voidp)); break;
        case 1: o = new PlastiQQRadioDataWrapper(reinterpret_cast<QMediaObject*>(stack[1].s_voidp),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQRadioData *p = new PlastiQQRadioData();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRadioData *p = new PlastiQQRadioData();
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
        QRadioData *o = sc ? Q_NULLPTR : reinterpret_cast<QRadioData*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->availability() | ret: `QMultimedia::AvailabilityStatus` */ break;
        case 1: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r = o->isAlternativeFrequenciesEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { qint64 _r = o->programType(); // HACK for ProgramType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QString _r = o->programTypeName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->radioText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { QString _r = o->stationId();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->stationName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { bool _r;
                if (isWrapper) _r = ((PlastiQQRadioDataWrapper*)o)->PlastiQParentCall_setMediaObject(reinterpret_cast<QMediaObject*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->setAlternativeFrequenciesEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QRadioData *o = reinterpret_cast<QRadioData*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QRadioData::alternativeFrequenciesEnabledChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "alternativeFrequenciesEnabledChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QRadioData::*)(QRadioData::Error)>(&QRadioData::error),
            [=](QRadioData::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioData::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QRadioData::programTypeChanged,
            [=](QRadioData::ProgramType arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QRadioData::ProgramType";
                PlastiQ_activate(sender, "programTypeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QRadioData::programTypeNameChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "programTypeNameChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QRadioData::radioTextChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "radioTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QRadioData::stationIdChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "stationIdChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QRadioData::stationNameChanged,
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
        QRadioData *o = reinterpret_cast<QRadioData*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QRadioData *o = reinterpret_cast<QRadioData*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QRadioData *o = reinterpret_cast<QRadioData*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QMediaBindableInterface") {
            stack[0].s_voidp = static_cast<QMediaBindableInterface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQRadioData::~PlastiQQRadioData() {
    QRadioData* o = reinterpret_cast<QRadioData*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
