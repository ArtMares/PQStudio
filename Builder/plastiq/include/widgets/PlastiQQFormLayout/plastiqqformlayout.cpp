#include "plastiqmethod.h"
#include "plastiqqformlayout.h"

#include "widgets/PlastiQQLayout/plastiqqlayout.h"
#include <QFormLayout> 
#include <QLayoutItem>
#include <QWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQFormLayout::plastiqConstructors = {
    { "QFormLayout()", { "QFormLayout", "", "QFormLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFormLayout(QWidget*)", { "QFormLayout", "QWidget*", "QFormLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFormLayout::plastiqMethods = {
    { "addRow(QWidget*,QWidget*)", { "addRow", "QWidget*,QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRow(QWidget*,QLayout*)", { "addRow", "QWidget*,QLayout*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRow(QString,QWidget*)", { "addRow", "QString&,QWidget*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRow(QString,QLayout*)", { "addRow", "QString&,QLayout*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRow(QWidget*)", { "addRow", "QWidget*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRow(QLayout*)", { "addRow", "QLayout*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fieldGrowthPolicy()", { "fieldGrowthPolicy", "", "FieldGrowthPolicy", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "formAlignment()", { "formAlignment", "", "Qt::Alignment", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalSpacing()", { "horizontalSpacing", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QWidget*,QWidget*)", { "insertRow", "int,QWidget*,QWidget*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QWidget*,QLayout*)", { "insertRow", "int,QWidget*,QLayout*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QString,QWidget*)", { "insertRow", "int,QString&,QWidget*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QString,QLayout*)", { "insertRow", "int,QString&,QLayout*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QWidget*)", { "insertRow", "int,QWidget*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertRow(int,QLayout*)", { "insertRow", "int,QLayout*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int,enum)", { "itemAt", "int,ItemRole", "QLayoutItem*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelAlignment()", { "labelAlignment", "", "Qt::Alignment", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelForField(QWidget*)", { "labelForField", "QWidget*", "QWidget*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelForField(QLayout*)", { "labelForField", "QLayout*", "QWidget*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRow(int)", { "removeRow", "int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRow(QWidget*)", { "removeRow", "QWidget*", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRow(QLayout*)", { "removeRow", "QLayout*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowCount()", { "rowCount", "", "int", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rowWrapPolicy()", { "rowWrapPolicy", "", "RowWrapPolicy", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFieldGrowthPolicy(enum)", { "setFieldGrowthPolicy", "FieldGrowthPolicy", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormAlignment(enum)", { "setFormAlignment", "Qt::Alignment", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalSpacing(int)", { "setHorizontalSpacing", "int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItem(int,enum,QLayoutItem*)", { "setItem", "int,ItemRole,QLayoutItem*", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelAlignment(enum)", { "setLabelAlignment", "Qt::Alignment", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayout(int,enum,QLayout*)", { "setLayout", "int,ItemRole,QLayout*", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRowWrapPolicy(enum)", { "setRowWrapPolicy", "RowWrapPolicy", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(int)", { "setSpacing", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalSpacing(int)", { "setVerticalSpacing", "int", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidget(int,enum,QWidget*)", { "setWidget", "int,ItemRole,QWidget*", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacing()", { "spacing", "", "int", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeRow(int)", { "takeRow", "int", "TakeRowResult", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeRow(QWidget*)", { "takeRow", "QWidget*", "TakeRowResult", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeRow(QLayout*)", { "takeRow", "QLayout*", "TakeRowResult", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalSpacing()", { "verticalSpacing", "", "int", 38, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFormLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFormLayout::plastiqProperties = {
    { "fieldGrowthPolicy", { "fieldGrowthPolicy", "long", "setFieldGrowthPolicy", "fieldGrowthPolicy" } },
    { "formAlignment", { "formAlignment", "long", "setFormAlignment", "formAlignment" } },
    { "horizontalSpacing", { "horizontalSpacing", "int", "setHorizontalSpacing", "horizontalSpacing" } },
    { "labelAlignment", { "labelAlignment", "long", "setLabelAlignment", "labelAlignment" } },
    { "rowWrapPolicy", { "rowWrapPolicy", "long", "setRowWrapPolicy", "rowWrapPolicy" } },
    { "verticalSpacing", { "verticalSpacing", "int", "setVerticalSpacing", "verticalSpacing" } },

};

QHash<QByteArray, long> PlastiQQFormLayout::plastiqConstants = {

    /* QFormLayout::FieldGrowthPolicy */
   { "FieldsStayAtSizeHint", QFormLayout::FieldsStayAtSizeHint },
   { "ExpandingFieldsGrow", QFormLayout::ExpandingFieldsGrow },
   { "AllNonFixedFieldsGrow", QFormLayout::AllNonFixedFieldsGrow },

    /* QFormLayout::ItemRole */
   { "LabelRole", QFormLayout::LabelRole },
   { "FieldRole", QFormLayout::FieldRole },
   { "SpanningRole", QFormLayout::SpanningRole },

    /* QFormLayout::RowWrapPolicy */
   { "DontWrapRows", QFormLayout::DontWrapRows },
   { "WrapLongRows", QFormLayout::WrapLongRows },
   { "WrapAllRows", QFormLayout::WrapAllRows },

};

QVector<PlastiQMetaObject*> PlastiQQFormLayout::plastiqInherits = { &PlastiQQLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFormLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQFormLayout::plastiq_static_metaObject = {
    { &PlastiQQLayout::plastiq_static_metaObject, &plastiqInherits, "QFormLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFormLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFormLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFormLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFormLayout(); break;
        case 1: o = new QFormLayout(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFormLayout *p = new PlastiQQFormLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFormLayout *p = new PlastiQQFormLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 39) {
            id -= 39;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFormLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QFormLayout*>(object->plastiq_data());

        switch(id) {
        case 0: o->addRow(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addRow(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QLayout*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addRow(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addRow(stack[1].s_string,
                    reinterpret_cast<QLayout*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->addRow(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->addRow(reinterpret_cast<QLayout*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 6: { qint64 _r = o->fieldGrowthPolicy(); // HACK for FieldGrowthPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { qint64 _r = o->formAlignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { int _r = o->horizontalSpacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: o->insertRow(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->insertRow(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    reinterpret_cast<QLayout*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->insertRow(stack[1].s_int,
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->insertRow(stack[1].s_int,
                    stack[2].s_string,
                    reinterpret_cast<QLayout*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->insertRow(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->insertRow(stack[1].s_int,
                    reinterpret_cast<QLayout*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: { QLayoutItem* _r = o->itemAt(stack[1].s_int,
                    QFormLayout::ItemRole(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QLayoutItem"; } break;
        case 16: { qint64 _r = o->labelAlignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { QWidget* _r = o->labelForField(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 18: { QWidget* _r = o->labelForField(reinterpret_cast<QLayout*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 19: o->removeRow(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->removeRow(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->removeRow(reinterpret_cast<QLayout*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: { int _r = o->rowCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 23: { qint64 _r = o->rowWrapPolicy(); // HACK for RowWrapPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: o->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setFormAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setHorizontalSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setItem(stack[1].s_int,
                    QFormLayout::ItemRole(stack[2].s_int64),
                    reinterpret_cast<QLayoutItem*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setLabelAlignment(Qt::Alignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setLayout(stack[1].s_int,
                    QFormLayout::ItemRole(stack[2].s_int64),
                    reinterpret_cast<QLayout*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setRowWrapPolicy(QFormLayout::RowWrapPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setVerticalSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setWidget(stack[1].s_int,
                    QFormLayout::ItemRole(stack[2].s_int64),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 34: { int _r = o->spacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 35: /* UNSUPPORTED_RETURN_VALUE o->takeRow(stack[1].s_int) | ret: `TakeRowResult` */ break;
        case 36: /* UNSUPPORTED_RETURN_VALUE o->takeRow(reinterpret_cast<QWidget*>(stack[1].s_voidp)) | ret: `TakeRowResult` */ break;
        case 37: /* UNSUPPORTED_RETURN_VALUE o->takeRow(reinterpret_cast<QLayout*>(stack[1].s_voidp)) | ret: `TakeRowResult` */ break;
        case 38: { int _r = o->verticalSpacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFormLayout *o = reinterpret_cast<QFormLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFormLayout *o = reinterpret_cast<QFormLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFormLayout *o = reinterpret_cast<QFormLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFormLayout *o = reinterpret_cast<QFormLayout*>(object->plastiq_data());

        if(className == "QLayout") {
            stack[0].s_voidp = static_cast<QLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFormLayout::~PlastiQQFormLayout() {
    QFormLayout* o = reinterpret_cast<QFormLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
