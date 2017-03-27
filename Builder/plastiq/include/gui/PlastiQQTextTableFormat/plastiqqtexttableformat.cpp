#include "plastiqmethod.h"
#include "plastiqqtexttableformat.h"

#include "gui/PlastiQQTextFrameFormat/plastiqqtextframeformat.h"
#include <QTextTableFormat> 

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableFormat::plastiqConstructors = {
    { "QTextTableFormat()", { "QTextTableFormat", "", "QTextTableFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableFormat::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cellPadding()", { "cellPadding", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cellSpacing()", { "cellSpacing", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearColumnWidthConstraints()", { "clearColumnWidthConstraints", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columns()", { "columns", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "headerRowCount()", { "headerRowCount", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(enum)", { "setAlignment", "Qt::Alignment", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCellPadding(double)", { "setCellPadding", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCellSpacing(double)", { "setCellSpacing", "qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColumnWidthConstraints(QVector<QTextLength>&)", { "setColumnWidthConstraints", "QVector<QTextLength>&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeaderRowCount(int)", { "setHeaderRowCount", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextTableFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextTableFormat::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextTableFormat::plastiqInherits = { &PlastiQQTextFrameFormat::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextTableFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextTableFormat::plastiq_static_metaObject = {
    { &PlastiQQTextFrameFormat::plastiq_static_metaObject, &plastiqInherits, "QTextTableFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextTableFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextTableFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextTableFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextTableFormat(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextTableFormat *p = new PlastiQQTextTableFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextTableFormat *p = new PlastiQQTextTableFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQTextFrameFormat::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextTableFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextTableFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { double _r = o->cellPadding();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->cellSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: o->clearColumnWidthConstraints();
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->columns();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->headerRowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->setAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setCellPadding(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setCellSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setColumnWidthConstraints((*reinterpret_cast< QVector<QTextLength>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setHeaderRowCount(stack[1].s_int);
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
        QTextTableFormat *o = reinterpret_cast<QTextTableFormat*>(object->plastiq_data());

        if(className == "QTextFrameFormat") {
            stack[0].s_voidp = static_cast<QTextFrameFormat*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextTableFormat::~PlastiQQTextTableFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
