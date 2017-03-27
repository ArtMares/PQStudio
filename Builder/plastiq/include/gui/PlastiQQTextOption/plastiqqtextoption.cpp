#include "plastiqmethod.h"
#include "plastiqqtextoption.h"

#include <QTextOption> 

QHash<QByteArray, PlastiQMethod> PlastiQQTextOption::plastiqConstructors = {
    { "QTextOption()", { "QTextOption", "", "QTextOption*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextOption(enum)", { "QTextOption", "Qt::Alignment", "QTextOption*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextOption(QTextOption&)", { "QTextOption", "QTextOption&", "QTextOption*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextOption::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Flags", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "Flags", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabArray(QList<qreal>&)", { "setTabArray", "QList<qreal>&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabStop(double)", { "setTabStop", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextDirection(enum)", { "setTextDirection", "Qt::LayoutDirection", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUseDesignMetrics(bool)", { "setUseDesignMetrics", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWrapMode(enum)", { "setWrapMode", "WrapMode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabStop()", { "tabStop", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textDirection()", { "textDirection", "", "Qt::LayoutDirection", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "useDesignMetrics()", { "useDesignMetrics", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wrapMode()", { "wrapMode", "", "WrapMode", 12, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextOption::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextOption::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextOption::plastiqConstants = {

    /* QTextOption::Flag */
   { "ShowTabsAndSpaces", QTextOption::ShowTabsAndSpaces },
   { "ShowLineAndParagraphSeparators", QTextOption::ShowLineAndParagraphSeparators },
   { "AddSpaceForLineAndParagraphSeparators", QTextOption::AddSpaceForLineAndParagraphSeparators },
   { "SuppressColors", QTextOption::SuppressColors },
   { "ShowDocumentTerminator", QTextOption::ShowDocumentTerminator },
   { "IncludeTrailingSpaces", QTextOption::IncludeTrailingSpaces },

    /* QTextOption::TabType */
   { "LeftTab", QTextOption::LeftTab },
   { "RightTab", QTextOption::RightTab },
   { "CenterTab", QTextOption::CenterTab },
   { "DelimiterTab", QTextOption::DelimiterTab },

    /* QTextOption::WrapMode */
   { "NoWrap", QTextOption::NoWrap },
   { "WordWrap", QTextOption::WordWrap },
   { "ManualWrap", QTextOption::ManualWrap },
   { "WrapAnywhere", QTextOption::WrapAnywhere },
   { "WrapAtWordBoundaryOrAnywhere", QTextOption::WrapAtWordBoundaryOrAnywhere },

};

QVector<PlastiQMetaObject*> PlastiQQTextOption::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextOption::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextOption::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextOption", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextOption::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextOption::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextOption *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextOption(); break;
        case 1: o = new QTextOption(Qt::Alignment(stack[1].s_int64)); break;
        case 2: o = new QTextOption((*reinterpret_cast< QTextOption(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextOption *p = new PlastiQQTextOption();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextOption *p = new PlastiQQTextOption();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextOption *o = sc ? Q_NULLPTR : reinterpret_cast<QTextOption*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->flags(); // HACK for Flags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setFlags(QTextOption::Flags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setTabArray((*reinterpret_cast< QList<qreal>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setTabStop(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setTextDirection(Qt::LayoutDirection(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setUseDesignMetrics(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setWrapMode(QTextOption::WrapMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: { double _r = o->tabStop();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { qint64 _r = o->textDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { bool _r = o->useDesignMetrics();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { qint64 _r = o->wrapMode(); // HACK for WrapMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QTextOption *o = reinterpret_cast<QTextOption*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextOption::~PlastiQQTextOption() {
    QTextOption* o = reinterpret_cast<QTextOption*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
