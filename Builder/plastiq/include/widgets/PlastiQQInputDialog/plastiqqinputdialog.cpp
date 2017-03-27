#include "plastiqmethod.h"
#include "plastiqqinputdialog.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QInputDialog> 
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQInputDialog::plastiqConstructors = {
    { "QInputDialog()", { "QInputDialog", "", "QInputDialog*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QInputDialog(QWidget*)", { "QInputDialog", "QWidget*", "QInputDialog*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QInputDialog(QWidget*,enum)", { "QInputDialog", "QWidget*,Qt::WindowFlags", "QInputDialog*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputDialog::plastiqMethods = {
    { "cancelButtonText()", { "cancelButtonText", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "comboBoxItems()", { "comboBoxItems", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "doubleDecimals()", { "doubleDecimals", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "doubleMaximum()", { "doubleMaximum", "", "double", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "doubleMinimum()", { "doubleMinimum", "", "double", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "doubleValue()", { "doubleValue", "", "double", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputMode()", { "inputMode", "", "InputMode", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intMaximum()", { "intMaximum", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intMinimum()", { "intMinimum", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intStep()", { "intStep", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intValue()", { "intValue", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isComboBoxEditable()", { "isComboBoxEditable", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelText()", { "labelText", "", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "okButtonText()", { "okButtonText", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(QObject*,const char*)", { "open", "QObject*,char*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "InputDialogOptions", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCancelButtonText(QString)", { "setCancelButtonText", "QString&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setComboBoxEditable(bool)", { "setComboBoxEditable", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setComboBoxItems(QStringList&)", { "setComboBoxItems", "QStringList&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDoubleDecimals(int)", { "setDoubleDecimals", "int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDoubleMaximum(double)", { "setDoubleMaximum", "double", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDoubleMinimum(double)", { "setDoubleMinimum", "double", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDoubleRange(double,double)", { "setDoubleRange", "double,double", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDoubleValue(double)", { "setDoubleValue", "double", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInputMode(enum)", { "setInputMode", "InputMode", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIntMaximum(int)", { "setIntMaximum", "int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIntMinimum(int)", { "setIntMinimum", "int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIntRange(int,int)", { "setIntRange", "int,int", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIntStep(int)", { "setIntStep", "int", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIntValue(int)", { "setIntValue", "int", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelText(QString)", { "setLabelText", "QString&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOkButtonText(QString)", { "setOkButtonText", "QString&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "InputDialogOption", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "InputDialogOption,bool", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptions(enum)", { "setOptions", "InputDialogOptions", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextEchoMode(enum)", { "setTextEchoMode", "QLineEdit::EchoMode", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextValue(QString)", { "setTextValue", "QString&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "InputDialogOption", "bool", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textEchoMode()", { "textEchoMode", "", "QLineEdit::EchoMode", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textValue()", { "textValue", "", "QString", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getDouble(QWidget*,QString,QString)", { "getDouble", "QWidget*,QString&,QString&", "double", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getDouble(QWidget*,QString,QString,double)", { "getDouble", "QWidget*,QString&,QString&,double", "double", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getDouble(QWidget*,QString,QString,double,double)", { "getDouble", "QWidget*,QString&,QString&,double,double", "double", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getDouble(QWidget*,QString,QString,double,double,double)", { "getDouble", "QWidget*,QString&,QString&,double,double,double", "double", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getDouble(QWidget*,QString,QString,double,double,double,int)", { "getDouble", "QWidget*,QString&,QString&,double,double,double,int", "double", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getDouble(QWidget*,QString,QString,double,double,double,int,bool*)", { "getDouble", "QWidget*,QString&,QString&,double,double,double,int,bool*", "double", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getDouble(QWidget*,QString,QString,double,double,double,int,bool*,enum)", { "getDouble", "QWidget*,QString&,QString&,double,double,double,int,bool*,Qt::WindowFlags", "double", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getInt(QWidget*,QString,QString)", { "getInt", "QWidget*,QString&,QString&", "int", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getInt(QWidget*,QString,QString,int)", { "getInt", "QWidget*,QString&,QString&,int", "int", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getInt(QWidget*,QString,QString,int,int)", { "getInt", "QWidget*,QString&,QString&,int,int", "int", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getInt(QWidget*,QString,QString,int,int,int)", { "getInt", "QWidget*,QString&,QString&,int,int,int", "int", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getInt(QWidget*,QString,QString,int,int,int,int)", { "getInt", "QWidget*,QString&,QString&,int,int,int,int", "int", 51, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getInt(QWidget*,QString,QString,int,int,int,int,bool*)", { "getInt", "QWidget*,QString&,QString&,int,int,int,int,bool*", "int", 52, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getInt(QWidget*,QString,QString,int,int,int,int,bool*,enum)", { "getInt", "QWidget*,QString&,QString&,int,int,int,int,bool*,Qt::WindowFlags", "int", 53, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getItem(QWidget*,QString,QString,QStringList&)", { "getItem", "QWidget*,QString&,QString&,QStringList&", "QString", 54, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getItem(QWidget*,QString,QString,QStringList&,int)", { "getItem", "QWidget*,QString&,QString&,QStringList&,int", "QString", 55, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getItem(QWidget*,QString,QString,QStringList&,int,bool)", { "getItem", "QWidget*,QString&,QString&,QStringList&,int,bool", "QString", 56, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getItem(QWidget*,QString,QString,QStringList&,int,bool,bool*)", { "getItem", "QWidget*,QString&,QString&,QStringList&,int,bool,bool*", "QString", 57, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getItem(QWidget*,QString,QString,QStringList&,int,bool,bool*,enum)", { "getItem", "QWidget*,QString&,QString&,QStringList&,int,bool,bool*,Qt::WindowFlags", "QString", 58, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getItem(QWidget*,QString,QString,QStringList&,int,bool,bool*,enum,enum)", { "getItem", "QWidget*,QString&,QString&,QStringList&,int,bool,bool*,Qt::WindowFlags,Qt::InputMethodHints", "QString", 59, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getMultiLineText(QWidget*,QString,QString)", { "getMultiLineText", "QWidget*,QString&,QString&", "QString", 60, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getMultiLineText(QWidget*,QString,QString,QString)", { "getMultiLineText", "QWidget*,QString&,QString&,QString&", "QString", 61, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getMultiLineText(QWidget*,QString,QString,QString,bool*)", { "getMultiLineText", "QWidget*,QString&,QString&,QString&,bool*", "QString", 62, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getMultiLineText(QWidget*,QString,QString,QString,bool*,enum)", { "getMultiLineText", "QWidget*,QString&,QString&,QString&,bool*,Qt::WindowFlags", "QString", 63, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getMultiLineText(QWidget*,QString,QString,QString,bool*,enum,enum)", { "getMultiLineText", "QWidget*,QString&,QString&,QString&,bool*,Qt::WindowFlags,Qt::InputMethodHints", "QString", 64, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getText(QWidget*,QString,QString)", { "getText", "QWidget*,QString&,QString&", "QString", 65, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getText(QWidget*,QString,QString,enum)", { "getText", "QWidget*,QString&,QString&,QLineEdit::EchoMode", "QString", 66, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getText(QWidget*,QString,QString,enum,QString)", { "getText", "QWidget*,QString&,QString&,QLineEdit::EchoMode,QString&", "QString", 67, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getText(QWidget*,QString,QString,enum,QString,bool*)", { "getText", "QWidget*,QString&,QString&,QLineEdit::EchoMode,QString&,bool*", "QString", 68, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getText(QWidget*,QString,QString,enum,QString,bool*,enum)", { "getText", "QWidget*,QString&,QString&,QLineEdit::EchoMode,QString&,bool*,Qt::WindowFlags", "QString", 69, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "getText(QWidget*,QString,QString,enum,QString,bool*,enum,enum)", { "getText", "QWidget*,QString&,QString&,QLineEdit::EchoMode,QString&,bool*,Qt::WindowFlags,Qt::InputMethodHints", "QString", 70, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputDialog::plastiqSignals = {
    { "doubleValueChanged(double)", { "doubleValueChanged", "double", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleValueSelected(double)", { "doubleValueSelected", "double", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "intValueChanged(int)", { "intValueChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "intValueSelected(int)", { "intValueSelected", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "textValueChanged(QString)", { "textValueChanged", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "textValueSelected(QString)", { "textValueSelected", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQInputDialog::plastiqProperties = {
    { "cancelButtonText", { "cancelButtonText", "QString", "setCancelButtonText", "cancelButtonText" } },
    { "comboBoxEditable", { "comboBoxEditable", "bool", "setComboBoxEditable", "isComboBoxEditable" } },
    { "comboBoxItems", { "comboBoxItems", "QStringList", "setComboBoxItems", "comboBoxItems" } },
    { "doubleDecimals", { "doubleDecimals", "int", "setDoubleDecimals", "doubleDecimals" } },
    { "doubleMaximum", { "doubleMaximum", "double", "setDoubleMaximum", "doubleMaximum" } },
    { "doubleMinimum", { "doubleMinimum", "double", "setDoubleMinimum", "doubleMinimum" } },
    { "doubleValue", { "doubleValue", "int", "setDoubleValue", "doubleValue" } },
    { "inputMode", { "inputMode", "long", "setInputMode", "inputMode" } },
    { "intMaximum", { "intMaximum", "int", "setIntMaximum", "intMaximum" } },
    { "intMinimum", { "intMinimum", "int", "setIntMinimum", "intMinimum" } },
    { "intStep", { "intStep", "int", "setIntStep", "intStep" } },
    { "intValue", { "intValue", "int", "setIntValue", "intValue" } },
    { "labelText", { "labelText", "QString", "setLabelText", "labelText" } },
    { "okButtonText", { "okButtonText", "QString", "setOkButtonText", "okButtonText" } },
    { "options", { "options", "long", "setOptions", "options" } },
    { "textEchoMode", { "textEchoMode", "long", "setTextEchoMode", "textEchoMode" } },
    { "textValue", { "textValue", "QString", "setTextValue", "textValue" } },

};

QHash<QByteArray, long> PlastiQQInputDialog::plastiqConstants = {

    /* QInputDialog::InputDialogOption */
   { "NoButtons", QInputDialog::NoButtons },
   { "UseListViewForComboBoxItems", QInputDialog::UseListViewForComboBoxItems },
   { "UsePlainTextEditForTextInput", QInputDialog::UsePlainTextEditForTextInput },

    /* QInputDialog::InputMode */
   { "TextInput", QInputDialog::TextInput },
   { "IntInput", QInputDialog::IntInput },
   { "DoubleInput", QInputDialog::DoubleInput },

};

QVector<PlastiQMetaObject*> PlastiQQInputDialog::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQInputDialog::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQInputDialog::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QInputDialog", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQInputDialog::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQInputDialog::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QInputDialog *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QInputDialog(); break;
        case 1: o = new QInputDialog(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new QInputDialog(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQInputDialog *p = new PlastiQQInputDialog();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQInputDialog *p = new PlastiQQInputDialog();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 71) {
            id -= 71;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QInputDialog *o = sc ? Q_NULLPTR : reinterpret_cast<QInputDialog*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->cancelButtonText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->comboBoxItems());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->doubleDecimals();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { double _r = o->doubleMaximum();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->doubleMinimum();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->doubleValue();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { qint64 _r = o->inputMode(); // HACK for InputMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { int _r = o->intMaximum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->intMinimum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->intStep();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { int _r = o->intValue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { bool _r = o->isComboBoxEditable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { QString _r = o->labelText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QString _r = o->okButtonText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: o->open(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: { qint64 _r = o->options(); // HACK for InputDialogOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: o->setCancelButtonText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setComboBoxEditable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setComboBoxItems((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setDoubleDecimals(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setDoubleMaximum(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setDoubleMinimum(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setDoubleRange(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setDoubleValue(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setInputMode(QInputDialog::InputMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setIntMaximum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setIntMinimum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setIntRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setIntStep(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setIntValue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setLabelText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setOkButtonText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setOption(QInputDialog::InputDialogOption(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setOption(QInputDialog::InputDialogOption(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setOptions(QInputDialog::InputDialogOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setTextEchoMode(QLineEdit::EchoMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setTextValue(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 37: { bool _r = o->testOption(QInputDialog::InputDialogOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { qint64 _r = o->textEchoMode(); // HACK for QLineEdit::EchoMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 39: { QString _r = o->textValue();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 40: { double _r = sc ? QInputDialog::getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 41: { double _r = sc ? QInputDialog::getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double) : o->getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 42: { double _r = sc ? QInputDialog::getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double) : o->getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 43: { double _r = sc ? QInputDialog::getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double) : o->getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 44: { double _r = sc ? QInputDialog::getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_int) : o->getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 45: { double _r = sc ? QInputDialog::getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp)) : o->getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 46: { double _r = sc ? QInputDialog::getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp),
                    Qt::WindowFlags(stack[9].s_int64)) : o->getDouble(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_double,
                    stack[5].s_double,
                    stack[6].s_double,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp),
                    Qt::WindowFlags(stack[9].s_int64));
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 47: { int _r = sc ? QInputDialog::getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 48: { int _r = sc ? QInputDialog::getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int) : o->getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 49: { int _r = sc ? QInputDialog::getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int) : o->getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 50: { int _r = sc ? QInputDialog::getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int) : o->getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 51: { int _r = sc ? QInputDialog::getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int) : o->getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 52: { int _r = sc ? QInputDialog::getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp)) : o->getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { int _r = sc ? QInputDialog::getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp),
                    Qt::WindowFlags(stack[9].s_int64)) : o->getInt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int,
                    reinterpret_cast<bool*>(stack[8].s_voidp),
                    Qt::WindowFlags(stack[9].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: { QString _r = sc ? QInputDialog::getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp))) : o->getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 55: { QString _r = sc ? QInputDialog::getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int) : o->getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 56: { QString _r = sc ? QInputDialog::getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool) : o->getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 57: { QString _r = sc ? QInputDialog::getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool,
                    reinterpret_cast<bool*>(stack[7].s_voidp)) : o->getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool,
                    reinterpret_cast<bool*>(stack[7].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 58: { QString _r = sc ? QInputDialog::getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool,
                    reinterpret_cast<bool*>(stack[7].s_voidp),
                    Qt::WindowFlags(stack[8].s_int64)) : o->getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool,
                    reinterpret_cast<bool*>(stack[7].s_voidp),
                    Qt::WindowFlags(stack[8].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 59: { QString _r = sc ? QInputDialog::getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool,
                    reinterpret_cast<bool*>(stack[7].s_voidp),
                    Qt::WindowFlags(stack[8].s_int64),
                    Qt::InputMethodHints(stack[9].s_int64)) : o->getItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[4].s_voidp)),
                    stack[5].s_int,
                    stack[6].s_bool,
                    reinterpret_cast<bool*>(stack[7].s_voidp),
                    Qt::WindowFlags(stack[8].s_int64),
                    Qt::InputMethodHints(stack[9].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 60: { QString _r = sc ? QInputDialog::getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 61: { QString _r = sc ? QInputDialog::getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string) : o->getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 62: { QString _r = sc ? QInputDialog::getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<bool*>(stack[5].s_voidp)) : o->getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<bool*>(stack[5].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 63: { QString _r = sc ? QInputDialog::getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<bool*>(stack[5].s_voidp),
                    Qt::WindowFlags(stack[6].s_int64)) : o->getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<bool*>(stack[5].s_voidp),
                    Qt::WindowFlags(stack[6].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 64: { QString _r = sc ? QInputDialog::getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<bool*>(stack[5].s_voidp),
                    Qt::WindowFlags(stack[6].s_int64),
                    Qt::InputMethodHints(stack[7].s_int64)) : o->getMultiLineText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    reinterpret_cast<bool*>(stack[5].s_voidp),
                    Qt::WindowFlags(stack[6].s_int64),
                    Qt::InputMethodHints(stack[7].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 65: { QString _r = sc ? QInputDialog::getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 66: { QString _r = sc ? QInputDialog::getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64)) : o->getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 67: { QString _r = sc ? QInputDialog::getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string) : o->getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 68: { QString _r = sc ? QInputDialog::getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string,
                    reinterpret_cast<bool*>(stack[6].s_voidp)) : o->getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string,
                    reinterpret_cast<bool*>(stack[6].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 69: { QString _r = sc ? QInputDialog::getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string,
                    reinterpret_cast<bool*>(stack[6].s_voidp),
                    Qt::WindowFlags(stack[7].s_int64)) : o->getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string,
                    reinterpret_cast<bool*>(stack[6].s_voidp),
                    Qt::WindowFlags(stack[7].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 70: { QString _r = sc ? QInputDialog::getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string,
                    reinterpret_cast<bool*>(stack[6].s_voidp),
                    Qt::WindowFlags(stack[7].s_int64),
                    Qt::InputMethodHints(stack[8].s_int64)) : o->getText(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QLineEdit::EchoMode(stack[4].s_int64),
                    stack[5].s_string,
                    reinterpret_cast<bool*>(stack[6].s_voidp),
                    Qt::WindowFlags(stack[7].s_int64),
                    Qt::InputMethodHints(stack[8].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QInputDialog *o = reinterpret_cast<QInputDialog*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QInputDialog::doubleValueChanged,
            [=](double arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "double";
                PlastiQ_activate(sender, "doubleValueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QInputDialog::doubleValueSelected,
            [=](double arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "double";
                PlastiQ_activate(sender, "doubleValueSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QInputDialog::intValueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "intValueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QInputDialog::intValueSelected,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "intValueSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QInputDialog::textValueChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "textValueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QInputDialog::textValueSelected,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "textValueSelected", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QInputDialog *o = reinterpret_cast<QInputDialog*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QInputDialog *o = reinterpret_cast<QInputDialog*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QInputDialog *o = reinterpret_cast<QInputDialog*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQInputDialog::~PlastiQQInputDialog() {
    QInputDialog* o = reinterpret_cast<QInputDialog*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
