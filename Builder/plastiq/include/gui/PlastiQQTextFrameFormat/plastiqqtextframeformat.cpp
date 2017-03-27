#include "plastiqmethod.h"
#include "plastiqqtextframeformat.h"

#include "gui/PlastiQQTextFormat/plastiqqtextformat.h"
#include <QTextFrameFormat> 
#include <QBrush>
#include <QTextLength>

QHash<QByteArray, PlastiQMethod> PlastiQQTextFrameFormat::plastiqConstructors = {
    { "QTextFrameFormat()", { "QTextFrameFormat", "", "QTextFrameFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFrameFormat::plastiqMethods = {
    { "border()", { "border", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "borderBrush()", { "borderBrush", "", "QBrush", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "borderStyle()", { "borderStyle", "", "BorderStyle", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bottomMargin()", { "bottomMargin", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "QTextLength", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftMargin()", { "leftMargin", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "margin()", { "margin", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "padding()", { "padding", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageBreakPolicy()", { "pageBreakPolicy", "", "PageBreakFlags", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "Position", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightMargin()", { "rightMargin", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorder(double)", { "setBorder", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorderBrush(QBrush&)", { "setBorderBrush", "QBrush&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorderStyle(enum)", { "setBorderStyle", "BorderStyle", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomMargin(double)", { "setBottomMargin", "qreal", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeight(QTextLength&)", { "setHeight", "QTextLength&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeight(double)", { "setHeight", "qreal", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeftMargin(double)", { "setLeftMargin", "qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMargin(double)", { "setMargin", "qreal", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPadding(double)", { "setPadding", "qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageBreakPolicy(PageBreakFlags)", { "setPageBreakPolicy", "PageBreakFlags", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(enum)", { "setPosition", "Position", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRightMargin(double)", { "setRightMargin", "qreal", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopMargin(double)", { "setTopMargin", "qreal", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(QTextLength&)", { "setWidth", "QTextLength&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(double)", { "setWidth", "qreal", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topMargin()", { "topMargin", "", "qreal", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "QTextLength", 28, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFrameFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextFrameFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextFrameFormat::plastiqConstants = {

    /* QTextFrameFormat::BorderStyle */
   { "BorderStyle_None", QTextFrameFormat::BorderStyle_None },
   { "BorderStyle_Dotted", QTextFrameFormat::BorderStyle_Dotted },
   { "BorderStyle_Dashed", QTextFrameFormat::BorderStyle_Dashed },
   { "BorderStyle_Solid", QTextFrameFormat::BorderStyle_Solid },
   { "BorderStyle_Double", QTextFrameFormat::BorderStyle_Double },
   { "BorderStyle_DotDash", QTextFrameFormat::BorderStyle_DotDash },
   { "BorderStyle_DotDotDash", QTextFrameFormat::BorderStyle_DotDotDash },
   { "BorderStyle_Groove", QTextFrameFormat::BorderStyle_Groove },
   { "BorderStyle_Ridge", QTextFrameFormat::BorderStyle_Ridge },
   { "BorderStyle_Inset", QTextFrameFormat::BorderStyle_Inset },
   { "BorderStyle_Outset", QTextFrameFormat::BorderStyle_Outset },

    /* QTextFrameFormat::Position */
   { "InFlow", QTextFrameFormat::InFlow },
   { "FloatLeft", QTextFrameFormat::FloatLeft },
   { "FloatRight", QTextFrameFormat::FloatRight },

};

QVector<PlastiQMetaObject*> PlastiQQTextFrameFormat::plastiqInherits = { &PlastiQQTextFormat::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextFrameFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextFrameFormat::plastiq_static_metaObject = {
    { &PlastiQQTextFormat::plastiq_static_metaObject, &plastiqInherits, "QTextFrameFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextFrameFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextFrameFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextFrameFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextFrameFormat(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextFrameFormat *p = new PlastiQQTextFrameFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextFrameFormat *p = new PlastiQQTextFrameFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 29) {
            id -= 29;
            PlastiQQTextFormat::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextFrameFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextFrameFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->border();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->borderBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->borderStyle(); // HACK for BorderStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { double _r = o->bottomMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { /* COPY OBJECT */
            QTextLength *_r = new QTextLength(o->height());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextLength";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { double _r = o->leftMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { double _r = o->margin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { double _r = o->padding();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: /* UNSUPPORTED_RETURN_VALUE o->pageBreakPolicy() | ret: `PageBreakFlags` */ break;
        case 10: { qint64 _r = o->position(); // HACK for Position 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { double _r = o->rightMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: o->setBorder(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setBorderBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setBorderStyle(QTextFrameFormat::BorderStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setBottomMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setHeight((*reinterpret_cast< QTextLength(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setHeight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setLeftMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setPadding(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: /* o->setPageBreakPolicy(UNSUPPORTED_TYPE_PageBreakFlags) | ret: `void` */ break;
        case 22: o->setPosition(QTextFrameFormat::Position(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setRightMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setTopMargin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setWidth((*reinterpret_cast< QTextLength(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 27: { double _r = o->topMargin();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 28: { /* COPY OBJECT */
            QTextLength *_r = new QTextLength(o->width());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextLength";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QTextFrameFormat *o = reinterpret_cast<QTextFrameFormat*>(object->plastiq_data());

        if(className == "QTextFormat") {
            stack[0].s_voidp = static_cast<QTextFormat*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextFrameFormat::~PlastiQQTextFrameFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
