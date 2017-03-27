#include "plastiqmethod.h"
#include "plastiqqtexttablecellformat.h"

#include "gui/PlastiQQTextCharFormat/plastiqqtextcharformat.h"
#include <QTextTableCellFormat> 

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableCellFormat::plastiqConstructors = {
    { "QTextTableCellFormat()", { "QTextTableCellFormat", "", "QTextTableCellFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableCellFormat::plastiqMethods = {
    { "bottomPadding()", { "bottomPadding", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leftPadding()", { "leftPadding", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rightPadding()", { "rightPadding", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomPadding(double)", { "setBottomPadding", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeftPadding(double)", { "setLeftPadding", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPadding(double)", { "setPadding", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRightPadding(double)", { "setRightPadding", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopPadding(double)", { "setTopPadding", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topPadding()", { "topPadding", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableCellFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextTableCellFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextTableCellFormat::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextTableCellFormat::plastiqInherits = { &PlastiQQTextCharFormat::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextTableCellFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextTableCellFormat::plastiq_static_metaObject = {
    { &PlastiQQTextCharFormat::plastiq_static_metaObject, &plastiqInherits, "QTextTableCellFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextTableCellFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextTableCellFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextTableCellFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextTableCellFormat(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextTableCellFormat *p = new PlastiQQTextTableCellFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextTableCellFormat *p = new PlastiQQTextTableCellFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            PlastiQQTextCharFormat::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextTableCellFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextTableCellFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->bottomPadding();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { double _r = o->leftPadding();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->rightPadding();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: o->setBottomPadding(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setLeftPadding(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setPadding(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setRightPadding(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setTopPadding(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: { double _r = o->topPadding();
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
        QTextTableCellFormat *o = reinterpret_cast<QTextTableCellFormat*>(object->plastiq_data());

        if(className == "QTextCharFormat") {
            stack[0].s_voidp = static_cast<QTextCharFormat*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextTableCellFormat::~PlastiQQTextTableCellFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
