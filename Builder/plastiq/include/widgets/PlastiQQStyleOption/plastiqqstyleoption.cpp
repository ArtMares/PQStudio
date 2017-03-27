#include "plastiqmethod.h"
#include "plastiqqstyleoption.h"

#include <QStyleOption> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOption::plastiqConstructors = {
    { "QStyleOption()", { "QStyleOption", "", "QStyleOption*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOption(int)", { "QStyleOption", "int", "QStyleOption*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOption(int,int)", { "QStyleOption", "int,int", "QStyleOption*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOption(QStyleOption&)", { "QStyleOption", "QStyleOption&", "QStyleOption*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOption::plastiqMethods = {
    { "initFrom(const QWidget*)", { "initFrom", "QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOption::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOption::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOption::plastiqConstants = {

    /* QStyleOption::OptionType */
   { "SO_Default", QStyleOption::SO_Default },
   { "SO_FocusRect", QStyleOption::SO_FocusRect },
   { "SO_Button", QStyleOption::SO_Button },
   { "SO_Tab", QStyleOption::SO_Tab },
   { "SO_MenuItem", QStyleOption::SO_MenuItem },
   { "SO_Frame", QStyleOption::SO_Frame },
   { "SO_ProgressBar", QStyleOption::SO_ProgressBar },
   { "SO_ToolBox", QStyleOption::SO_ToolBox },
   { "SO_Header", QStyleOption::SO_Header },
   { "SO_DockWidget", QStyleOption::SO_DockWidget },
   { "SO_ViewItem", QStyleOption::SO_ViewItem },
   { "SO_TabWidgetFrame", QStyleOption::SO_TabWidgetFrame },
   { "SO_TabBarBase", QStyleOption::SO_TabBarBase },
   { "SO_RubberBand", QStyleOption::SO_RubberBand },
   { "SO_ToolBar", QStyleOption::SO_ToolBar },
   { "SO_GraphicsItem", QStyleOption::SO_GraphicsItem },
   { "SO_Complex", QStyleOption::SO_Complex },
   { "SO_Slider", QStyleOption::SO_Slider },
   { "SO_SpinBox", QStyleOption::SO_SpinBox },
   { "SO_ToolButton", QStyleOption::SO_ToolButton },
   { "SO_ComboBox", QStyleOption::SO_ComboBox },
   { "SO_TitleBar", QStyleOption::SO_TitleBar },
   { "SO_GroupBox", QStyleOption::SO_GroupBox },
   { "SO_SizeGrip", QStyleOption::SO_SizeGrip },
   { "SO_CustomBase", QStyleOption::SO_CustomBase },
   { "SO_ComplexCustomBase", QStyleOption::SO_ComplexCustomBase },

    /* QStyleOption::StyleOptionType */
   { "Type", QStyleOption::Type },

    /* QStyleOption::StyleOptionVersion */
   { "Version", QStyleOption::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOption::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStyleOption::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOption::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStyleOption", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOption::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOption::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOption *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOption(); break;
        case 1: o = new QStyleOption(stack[1].s_int); break;
        case 2: o = new QStyleOption(stack[1].s_int,
                    stack[2].s_int); break;
        case 3: o = new QStyleOption((*reinterpret_cast< QStyleOption(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOption *p = new PlastiQQStyleOption();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOption *p = new PlastiQQStyleOption();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleOption *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOption*>(object->plastiq_data());

        switch(id) {
        case 0: o->initFrom(reinterpret_cast<const QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;

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
        QStyleOption *o = reinterpret_cast<QStyleOption*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStyleOption::~PlastiQQStyleOption() {
    QStyleOption* o = reinterpret_cast<QStyleOption*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
