#include "plastiqmethod.h"
#include "plastiqqtextblockformat.h"

#include "gui/PlastiQQTextFormat/plastiqqtextformat.h"
#include <QTextBlockFormat> 

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockFormat::plastiqConstructors = {
    { "QTextBlockFormat()", { "QTextBlockFormat", "", "QTextBlockFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockFormat::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottomMargin()", { "bottomMargin", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indent()", { "indent", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftMargin()", { "leftMargin", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineHeight(double,double)", { "lineHeight", "qreal,qreal", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineHeight()", { "lineHeight", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineHeightType()", { "lineHeightType", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nonBreakableLines()", { "nonBreakableLines", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageBreakPolicy()", { "pageBreakPolicy", "", "PageBreakFlags", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightMargin()", { "rightMargin", "", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomMargin(double)", { "setBottomMargin", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIndent(int)", { "setIndent", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeftMargin(double)", { "setLeftMargin", "qreal", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineHeight(double,int)", { "setLineHeight", "qreal,int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNonBreakableLines(bool)", { "setNonBreakableLines", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageBreakPolicy(PageBreakFlags)", { "setPageBreakPolicy", "PageBreakFlags", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRightMargin(double)", { "setRightMargin", "qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabPositions(QList<QTextOption::Tab>&)", { "setTabPositions", "QList<QTextOption::Tab>&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextIndent(double)", { "setTextIndent", "qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopMargin(double)", { "setTopMargin", "qreal", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textIndent()", { "textIndent", "", "qreal", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topMargin()", { "topMargin", "", "qreal", 23, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBlockFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextBlockFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextBlockFormat::plastiqConstants = {

    /* QTextBlockFormat::LineHeightTypes */
   { "SingleHeight", QTextBlockFormat::SingleHeight },
   { "ProportionalHeight", QTextBlockFormat::ProportionalHeight },
   { "FixedHeight", QTextBlockFormat::FixedHeight },
   { "MinimumHeight", QTextBlockFormat::MinimumHeight },
   { "LineDistanceHeight", QTextBlockFormat::LineDistanceHeight },

};

QVector<PlastiQMetaObject*> PlastiQQTextBlockFormat::plastiqInherits = { &PlastiQQTextFormat::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextBlockFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextBlockFormat::plastiq_static_metaObject = {
    { &PlastiQQTextFormat::plastiq_static_metaObject, &plastiqInherits, "QTextBlockFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextBlockFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextBlockFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextBlockFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextBlockFormat(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextBlockFormat *p = new PlastiQQTextBlockFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextBlockFormat *p = new PlastiQQTextBlockFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 24) {
            id -= 24;
            PlastiQQTextFormat::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextBlockFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextBlockFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { double _r = o->bottomMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { int _r = o->indent();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { double _r = o->leftMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->lineHeight(stack[1].s_double,
                    stack[2].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->lineHeight();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { int _r = o->lineHeightType();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { bool _r = o->nonBreakableLines();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: /* UNSUPPORTED_RETURN_VALUE o->pageBreakPolicy() | ret: `PageBreakFlags` */ break;
        case 10: { double _r = o->rightMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setBottomMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setIndent(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setLeftMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setLineHeight(stack[1].s_double,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setNonBreakableLines(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: /* o->setPageBreakPolicy(UNSUPPORTED_TYPE_PageBreakFlags) | ret: `void` */ break;
        case 18: o->setRightMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setTabPositions((*reinterpret_cast< QList<QTextOption::Tab>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setTextIndent(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setTopMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: { double _r = o->textIndent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 23: { double _r = o->topMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QTextBlockFormat *o = reinterpret_cast<QTextBlockFormat*>(object->plastiq_data());

        if(className == "QTextFormat") {
            stack[0].s_voidp = static_cast<QTextFormat*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextBlockFormat::~PlastiQQTextBlockFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
