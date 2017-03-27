#include "plastiqmethod.h"
#include "plastiqqtexttablecell.h"

#include <QTextTableCell> 
#include <QTextCursor>
#include <QTextCharFormat>

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableCell::plastiqConstructors = {
    { "QTextTableCell()", { "QTextTableCell", "", "QTextTableCell*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextTableCell(QTextTableCell&)", { "QTextTableCell", "QTextTableCell&", "QTextTableCell*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableCell::plastiqMethods = {
    { "begin()", { "begin", "", "QTextFrame::iterator", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "column()", { "column", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columnSpan()", { "columnSpan", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "QTextFrame::iterator", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "firstCursorPosition()", { "firstCursorPosition", "", "QTextCursor", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QTextCharFormat", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastCursorPosition()", { "lastCursorPosition", "", "QTextCursor", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "row()", { "row", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowSpan()", { "rowSpan", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QTextCharFormat&)", { "setFormat", "QTextCharFormat&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tableCellFormatIndex()", { "tableCellFormatIndex", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTableCell::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextTableCell::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextTableCell::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextTableCell::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextTableCell::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextTableCell::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextTableCell", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextTableCell::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextTableCell::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextTableCell *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextTableCell(); break;
        case 1: o = new QTextTableCell((*reinterpret_cast< QTextTableCell(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextTableCell *p = new PlastiQQTextTableCell();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextTableCell *p = new PlastiQQTextTableCell();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextTableCell *o = sc ? Q_NULLPTR : reinterpret_cast<QTextTableCell*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->begin() | ret: `QTextFrame::iterator` */ break;
        case 1: { int _r = o->column();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->columnSpan();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: /* o->end() | ret: `QTextFrame::iterator` */ break;
        case 4: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->firstCursorPosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->lastCursorPosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { int _r = o->row();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->rowSpan();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: o->setFormat((*reinterpret_cast< QTextCharFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: { int _r = o->tableCellFormatIndex();
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
        QTextTableCell *o = reinterpret_cast<QTextTableCell*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextTableCell::~PlastiQQTextTableCell() {
    QTextTableCell* o = reinterpret_cast<QTextTableCell*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
