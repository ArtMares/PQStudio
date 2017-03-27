#include "plastiqmethod.h"
#include "plastiqqtexttable.h"

#include "gui/PlastiQQTextFrame/plastiqqtextframe.h"
#include <QTextTable> 
#include <QTextTableCell>
#include <QTextTableFormat>
#include <QTextCursor>

QHash<QByteArray, PlastiQMethod> PlastiQQTextTable::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTable::plastiqMethods = {
    { "appendColumns(int)", { "appendColumns", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "appendRows(int)", { "appendRows", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cellAt(int,int)", { "cellAt", "int,int", "QTextTableCell", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cellAt(int)", { "cellAt", "int", "QTextTableCell", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cellAt(QTextCursor&)", { "cellAt", "QTextCursor&", "QTextTableCell", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "columns()", { "columns", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QTextTableFormat", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertColumns(int,int)", { "insertColumns", "int,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRows(int,int)", { "insertRows", "int,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeCells(int,int,int,int)", { "mergeCells", "int,int,int,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeCells(QTextCursor&)", { "mergeCells", "QTextCursor&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeColumns(int,int)", { "removeColumns", "int,int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRows(int,int)", { "removeRows", "int,int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int,int)", { "resize", "int,int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowEnd(QTextCursor&)", { "rowEnd", "QTextCursor&", "QTextCursor", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowStart(QTextCursor&)", { "rowStart", "QTextCursor&", "QTextCursor", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rows()", { "rows", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QTextTableFormat&)", { "setFormat", "QTextTableFormat&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "splitCell(int,int,int,int)", { "splitCell", "int,int,int,int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextTable::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextTable::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextTable::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextTable::plastiqInherits = { &PlastiQQTextFrame::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextTable::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextTable::plastiq_static_metaObject = {
    { &PlastiQQTextFrame::plastiq_static_metaObject, &plastiqInherits, "QTextTable", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextTable::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextTable::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextTable *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextTable *p = new PlastiQQTextTable();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextTable *p = new PlastiQQTextTable();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            PlastiQQTextFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextTable *o = sc ? Q_NULLPTR : reinterpret_cast<QTextTable*>(object->plastiq_data());

        switch(id) {
        case 0: o->appendColumns(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->appendRows(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QTextTableCell *_r = new QTextTableCell(o->cellAt(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextTableCell";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QTextTableCell *_r = new QTextTableCell(o->cellAt(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextTableCell";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QTextTableCell *_r = new QTextTableCell(o->cellAt((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextTableCell";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->columns();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QTextTableFormat *_r = new QTextTableFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextTableFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->insertColumns(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->insertRows(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->mergeCells(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->mergeCells((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->removeColumns(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->removeRows(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->resize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->rowEnd((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->rowStart((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { int _r = o->rows();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: o->setFormat((*reinterpret_cast< QTextTableFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->splitCell(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
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
        QTextTable *o = reinterpret_cast<QTextTable*>(object->plastiq_data());

        if(className == "QTextFrame") {
            stack[0].s_voidp = static_cast<QTextFrame*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextTable::~PlastiQQTextTable() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
