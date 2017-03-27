#include "plastiqmethod.h"
#include "plastiqqlcdnumber.h"

#include "widgets/PlastiQQFrame/plastiqqframe.h"
#include <QLCDNumber> 
#include <QEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQLCDNumber::plastiqConstructors = {
    { "QLCDNumber()", { "QLCDNumber", "", "QLCDNumber*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLCDNumber(QWidget*)", { "QLCDNumber", "QWidget*", "QLCDNumber*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLCDNumber(long)", { "QLCDNumber", "uint", "QLCDNumber*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLCDNumber(long,QWidget*)", { "QLCDNumber", "uint,QWidget*", "QLCDNumber*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLCDNumber::plastiqMethods = {
    { "checkOverflow(double)", { "checkOverflow", "double", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkOverflow(int)", { "checkOverflow", "int", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "digitCount()", { "digitCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intValue()", { "intValue", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mode()", { "mode", "", "Mode", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "segmentStyle()", { "segmentStyle", "", "SegmentStyle", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDigitCount(int)", { "setDigitCount", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMode(enum)", { "setMode", "Mode", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSegmentStyle(enum)", { "setSegmentStyle", "SegmentStyle", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "smallDecimalPoint()", { "smallDecimalPoint", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "double", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "display(QString)", { "display", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "display(int)", { "display", "int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "display(double)", { "display", "double", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setBinMode()", { "setBinMode", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setDecMode()", { "setDecMode", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setHexMode()", { "setHexMode", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOctMode()", { "setOctMode", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setSmallDecimalPoint(bool)", { "setSmallDecimalPoint", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLCDNumber::plastiqSignals = {
    { "overflow()", { "overflow", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLCDNumber::plastiqProperties = {
    { "digitCount", { "digitCount", "int", "setDigitCount", "digitCount" } },
    { "intValue", { "intValue", "int", "display", "intValue" } },
    { "mode", { "mode", "long", "setMode", "mode" } },
    { "segmentStyle", { "segmentStyle", "long", "setSegmentStyle", "segmentStyle" } },
    { "smallDecimalPoint", { "smallDecimalPoint", "bool", "setSmallDecimalPoint", "smallDecimalPoint" } },
    { "value", { "value", "double", "display", "value" } },

};

QHash<QByteArray, long> PlastiQQLCDNumber::plastiqConstants = {

    /* QLCDNumber::Mode */
   { "Hex", QLCDNumber::Hex },
   { "Dec", QLCDNumber::Dec },
   { "Oct", QLCDNumber::Oct },
   { "Bin", QLCDNumber::Bin },

    /* QLCDNumber::SegmentStyle */
   { "Outline", QLCDNumber::Outline },
   { "Filled", QLCDNumber::Filled },
   { "Flat", QLCDNumber::Flat },

};

QVector<PlastiQMetaObject*> PlastiQQLCDNumber::plastiqInherits = { &PlastiQQFrame::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLCDNumber::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQLCDNumber::plastiq_static_metaObject = {
    { &PlastiQQFrame::plastiq_static_metaObject, &plastiqInherits, "QLCDNumber", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLCDNumber::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQLCDNumberWrapper : public QLCDNumber {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQLCDNumberWrapper(QWidget *parent = Q_NULLPTR)
         : QLCDNumber(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQLCDNumberWrapper(uint numDigits, QWidget *parent = Q_NULLPTR)
         : QLCDNumber(numDigits,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QLCDNumber::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QLCDNumber::event(e);
    }

    void changeEvent(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLCDNumber::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QLCDNumber::changeEvent(ev);
    }

};

void PlastiQQLCDNumber::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQLCDNumberWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQLCDNumberWrapper(); break;
        case 1: o = new PlastiQQLCDNumberWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQLCDNumberWrapper(stack[1].s_long); break;
        case 3: o = new PlastiQQLCDNumberWrapper(stack[1].s_long,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQLCDNumber *p = new PlastiQQLCDNumber();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLCDNumber *p = new PlastiQQLCDNumber();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLCDNumber *o = sc ? Q_NULLPTR : reinterpret_cast<QLCDNumber*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->checkOverflow(stack[1].s_double);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->checkOverflow(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->digitCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->intValue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { qint64 _r = o->mode(); // HACK for Mode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { qint64 _r = o->segmentStyle(); // HACK for SegmentStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: o->setDigitCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMode(QLCDNumber::Mode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setSegmentStyle(QLCDNumber::SegmentStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: { bool _r = o->smallDecimalPoint();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { double _r = o->value();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: { bool _r;
                if (isWrapper) _r = ((PlastiQQLCDNumberWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 13: o->display(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->display(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->display(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setBinMode();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setDecMode();
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setHexMode();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setOctMode();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setSmallDecimalPoint(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLCDNumber *o = reinterpret_cast<QLCDNumber*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QLCDNumber::overflow,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "overflow", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLCDNumber *o = reinterpret_cast<QLCDNumber*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLCDNumber *o = reinterpret_cast<QLCDNumber*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLCDNumber *o = reinterpret_cast<QLCDNumber*>(object->plastiq_data());

        if(className == "QFrame") {
            stack[0].s_voidp = static_cast<QFrame*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLCDNumber::~PlastiQQLCDNumber() {
    QLCDNumber* o = reinterpret_cast<QLCDNumber*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
