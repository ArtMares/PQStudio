#include "plastiqmethod.h"
#include "plastiqqsizepolicy.h"

#include <QSizePolicy> 

QHash<QByteArray, PlastiQMethod> PlastiQQSizePolicy::plastiqConstructors = {
    { "QSizePolicy()", { "QSizePolicy", "", "QSizePolicy*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSizePolicy(enum,enum)", { "QSizePolicy", "Policy,Policy", "QSizePolicy*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSizePolicy(enum,enum,enum)", { "QSizePolicy", "Policy,Policy,ControlType", "QSizePolicy*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSizePolicy::plastiqMethods = {
    { "controlType()", { "controlType", "", "ControlType", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expandingDirections()", { "expandingDirections", "", "Qt::Orientations", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasHeightForWidth()", { "hasHeightForWidth", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasWidthForHeight()", { "hasWidthForHeight", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalPolicy()", { "horizontalPolicy", "", "Policy", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalStretch()", { "horizontalStretch", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "retainSizeWhenHidden()", { "retainSizeWhenHidden", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setControlType(enum)", { "setControlType", "ControlType", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeightForWidth(bool)", { "setHeightForWidth", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalPolicy(enum)", { "setHorizontalPolicy", "Policy", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalStretch(int)", { "setHorizontalStretch", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRetainSizeWhenHidden(bool)", { "setRetainSizeWhenHidden", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalPolicy(enum)", { "setVerticalPolicy", "Policy", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalStretch(int)", { "setVerticalStretch", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidthForHeight(bool)", { "setWidthForHeight", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transpose()", { "transpose", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalPolicy()", { "verticalPolicy", "", "Policy", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalStretch()", { "verticalStretch", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSizePolicy::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSizePolicy::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSizePolicy::plastiqConstants = {

    /* QSizePolicy::ControlType */
   { "DefaultType", QSizePolicy::DefaultType },
   { "ButtonBox", QSizePolicy::ButtonBox },
   { "CheckBox", QSizePolicy::CheckBox },
   { "ComboBox", QSizePolicy::ComboBox },
   { "Frame", QSizePolicy::Frame },
   { "GroupBox", QSizePolicy::GroupBox },
   { "Label", QSizePolicy::Label },
   { "Line", QSizePolicy::Line },
   { "LineEdit", QSizePolicy::LineEdit },
   { "PushButton", QSizePolicy::PushButton },
   { "RadioButton", QSizePolicy::RadioButton },
   { "Slider", QSizePolicy::Slider },
   { "SpinBox", QSizePolicy::SpinBox },
   { "TabWidget", QSizePolicy::TabWidget },
   { "ToolButton", QSizePolicy::ToolButton },

    /* QSizePolicy::Policy */
   { "Fixed", QSizePolicy::Fixed },
   { "Minimum", QSizePolicy::Minimum },
   { "Maximum", QSizePolicy::Maximum },
   { "Preferred", QSizePolicy::Preferred },
   { "MinimumExpanding", QSizePolicy::MinimumExpanding },
   { "Expanding", QSizePolicy::Expanding },
   { "Ignored", QSizePolicy::Ignored },

    /* QSizePolicy::PolicyFlag */
   { "GrowFlag", QSizePolicy::GrowFlag },
   { "ExpandFlag", QSizePolicy::ExpandFlag },
   { "ShrinkFlag", QSizePolicy::ShrinkFlag },
   { "IgnoreFlag", QSizePolicy::IgnoreFlag },

};

QVector<PlastiQMetaObject*> PlastiQQSizePolicy::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSizePolicy::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSizePolicy::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSizePolicy", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSizePolicy::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSizePolicy::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSizePolicy *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSizePolicy(); break;
        case 1: o = new QSizePolicy(QSizePolicy::Policy(stack[1].s_int64),
                    QSizePolicy::Policy(stack[2].s_int64)); break;
        case 2: o = new QSizePolicy(QSizePolicy::Policy(stack[1].s_int64),
                    QSizePolicy::Policy(stack[2].s_int64),
                    QSizePolicy::ControlType(stack[3].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSizePolicy *p = new PlastiQQSizePolicy();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSizePolicy *p = new PlastiQQSizePolicy();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSizePolicy *o = sc ? Q_NULLPTR : reinterpret_cast<QSizePolicy*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->controlType(); // HACK for ControlType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->expandingDirections(); // HACK for Qt::Orientations 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { bool _r = o->hasHeightForWidth();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->hasWidthForHeight();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { qint64 _r = o->horizontalPolicy(); // HACK for Policy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { int _r = o->horizontalStretch();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { bool _r = o->retainSizeWhenHidden();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->setControlType(QSizePolicy::ControlType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setHeightForWidth(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setHorizontalPolicy(QSizePolicy::Policy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setHorizontalStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setRetainSizeWhenHidden(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVerticalPolicy(QSizePolicy::Policy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setVerticalStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setWidthForHeight(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->transpose();
                stack[0].type = PlastiQ::Void; break;
        case 16: { qint64 _r = o->verticalPolicy(); // HACK for Policy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { int _r = o->verticalStretch();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSizePolicy *o = reinterpret_cast<QSizePolicy*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSizePolicy::~PlastiQQSizePolicy() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
