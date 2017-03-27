#include "plastiqmethod.h"
#include "plastiqqmessagebox.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QMessageBox> 
#include <QPushButton>
#include <QAbstractButton>
#include <QCheckBox>
#include <QString>
#include <QPixmap>
#include <QEvent>
#include <QCloseEvent>
#include <QKeyEvent>
#include <QResizeEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQMessageBox::plastiqConstructors = {
    { "QMessageBox()", { "QMessageBox", "", "QMessageBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMessageBox(QWidget*)", { "QMessageBox", "QWidget*", "QMessageBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMessageBox(enum,QString,QString)", { "QMessageBox", "Icon,QString&,QString&", "QMessageBox*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMessageBox(enum,QString,QString,enum)", { "QMessageBox", "Icon,QString&,QString&,StandardButtons", "QMessageBox*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMessageBox(enum,QString,QString,enum,QWidget*)", { "QMessageBox", "Icon,QString&,QString&,StandardButtons,QWidget*", "QMessageBox*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMessageBox(enum,QString,QString,enum,QWidget*,enum)", { "QMessageBox", "Icon,QString&,QString&,StandardButtons,QWidget*,Qt::WindowFlags", "QMessageBox*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMessageBox::plastiqMethods = {
    { "addButton(QAbstractButton*,enum)", { "addButton", "QAbstractButton*,ButtonRole", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addButton(QString,enum)", { "addButton", "QString&,ButtonRole", "QPushButton*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addButton(enum)", { "addButton", "StandardButton", "QPushButton*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "button(enum)", { "button", "StandardButton", "QAbstractButton*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonRole(QAbstractButton*)", { "buttonRole", "QAbstractButton*", "ButtonRole", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkBox()", { "checkBox", "", "QCheckBox*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clickedButton()", { "clickedButton", "", "QAbstractButton*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultButton()", { "defaultButton", "", "QPushButton*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "detailedText()", { "detailedText", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "escapeButton()", { "escapeButton", "", "QAbstractButton*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "Icon", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconPixmap()", { "iconPixmap", "", "QPixmap", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "informativeText()", { "informativeText", "", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(QObject*,const char*)", { "open", "QObject*,char*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeButton(QAbstractButton*)", { "removeButton", "QAbstractButton*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckBox(QCheckBox*)", { "setCheckBox", "QCheckBox*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultButton(QPushButton*)", { "setDefaultButton", "QPushButton*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultButton(enum)", { "setDefaultButton", "StandardButton", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDetailedText(QString)", { "setDetailedText", "QString&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEscapeButton(QAbstractButton*)", { "setEscapeButton", "QAbstractButton*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEscapeButton(enum)", { "setEscapeButton", "StandardButton", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(enum)", { "setIcon", "Icon", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconPixmap(QPixmap&)", { "setIconPixmap", "QPixmap&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInformativeText(QString)", { "setInformativeText", "QString&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStandardButtons(enum)", { "setStandardButtons", "StandardButtons", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextFormat(enum)", { "setTextFormat", "Qt::TextFormat", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextInteractionFlags(enum)", { "setTextInteractionFlags", "Qt::TextInteractionFlags", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowModality(enum)", { "setWindowModality", "Qt::WindowModality", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindowTitle(QString)", { "setWindowTitle", "QString&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardButton(QAbstractButton*)", { "standardButton", "QAbstractButton*", "StandardButton", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardButtons()", { "standardButtons", "", "StandardButtons", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textFormat()", { "textFormat", "", "Qt::TextFormat", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInteractionFlags()", { "textInteractionFlags", "", "Qt::TextInteractionFlags", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "about(QWidget*,QString,QString)", { "about", "QWidget*,QString&,QString&", "void", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "aboutQt(QWidget*)", { "aboutQt", "QWidget*", "void", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "aboutQt(QWidget*,QString)", { "aboutQt", "QWidget*,QString&", "void", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "critical(QWidget*,QString,QString)", { "critical", "QWidget*,QString&,QString&", "StandardButton", 38, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "critical(QWidget*,QString,QString,enum)", { "critical", "QWidget*,QString&,QString&,StandardButtons", "StandardButton", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "critical(QWidget*,QString,QString,enum,enum)", { "critical", "QWidget*,QString&,QString&,StandardButtons,StandardButton", "StandardButton", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "information(QWidget*,QString,QString)", { "information", "QWidget*,QString&,QString&", "StandardButton", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "information(QWidget*,QString,QString,enum)", { "information", "QWidget*,QString&,QString&,StandardButtons", "StandardButton", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "information(QWidget*,QString,QString,enum,enum)", { "information", "QWidget*,QString&,QString&,StandardButtons,StandardButton", "StandardButton", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "question(QWidget*,QString,QString)", { "question", "QWidget*,QString&,QString&", "StandardButton", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "question(QWidget*,QString,QString,enum)", { "question", "QWidget*,QString&,QString&,StandardButtons", "StandardButton", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "question(QWidget*,QString,QString,enum,enum)", { "question", "QWidget*,QString&,QString&,StandardButtons,StandardButton", "StandardButton", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "warning(QWidget*,QString,QString)", { "warning", "QWidget*,QString&,QString&", "StandardButton", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "warning(QWidget*,QString,QString,enum)", { "warning", "QWidget*,QString&,QString&,StandardButtons", "StandardButton", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "warning(QWidget*,QString,QString,enum,enum)", { "warning", "QWidget*,QString&,QString&,StandardButtons,StandardButton", "StandardButton", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 50, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 52, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 53, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 55, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "exec()", { "exec", "", "int", 56, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMessageBox::plastiqSignals = {
    { "buttonClicked(QAbstractButton*)", { "buttonClicked", "QAbstractButton*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMessageBox::plastiqProperties = {
    { "detailedText", { "detailedText", "QString", "setDetailedText", "detailedText" } },
    { "icon", { "icon", "long", "setIcon", "icon" } },
    { "iconPixmap", { "iconPixmap", "QPixmap", "setIconPixmap", "iconPixmap" } },
    { "informativeText", { "informativeText", "QString", "setInformativeText", "informativeText" } },
    { "standardButtons", { "standardButtons", "long", "setStandardButtons", "standardButtons" } },
    { "text", { "text", "QString", "setText", "text" } },
    { "textFormat", { "textFormat", "long", "setTextFormat", "textFormat" } },
    { "textInteractionFlags", { "textInteractionFlags", "long", "setTextInteractionFlags", "textInteractionFlags" } },

};

QHash<QByteArray, long> PlastiQQMessageBox::plastiqConstants = {

    /* QMessageBox::ButtonRole */
   { "InvalidRole", QMessageBox::InvalidRole },
   { "AcceptRole", QMessageBox::AcceptRole },
   { "RejectRole", QMessageBox::RejectRole },
   { "DestructiveRole", QMessageBox::DestructiveRole },
   { "ActionRole", QMessageBox::ActionRole },
   { "HelpRole", QMessageBox::HelpRole },
   { "YesRole", QMessageBox::YesRole },
   { "NoRole", QMessageBox::NoRole },
   { "ResetRole", QMessageBox::ResetRole },
   { "ApplyRole", QMessageBox::ApplyRole },
   { "NRoles", QMessageBox::NRoles },

    /* QMessageBox::Icon */
   { "NoIcon", QMessageBox::NoIcon },
   { "Information", QMessageBox::Information },
   { "Warning", QMessageBox::Warning },
   { "Critical", QMessageBox::Critical },
   { "Question", QMessageBox::Question },

    /* QMessageBox::StandardButton */
   { "NoButton", QMessageBox::NoButton },
   { "Ok", QMessageBox::Ok },
   { "Save", QMessageBox::Save },
   { "SaveAll", QMessageBox::SaveAll },
   { "Open", QMessageBox::Open },
   { "Yes", QMessageBox::Yes },
   { "YesToAll", QMessageBox::YesToAll },
   { "No", QMessageBox::No },
   { "NoToAll", QMessageBox::NoToAll },
   { "Abort", QMessageBox::Abort },
   { "Retry", QMessageBox::Retry },
   { "Ignore", QMessageBox::Ignore },
   { "Close", QMessageBox::Close },
   { "Cancel", QMessageBox::Cancel },
   { "Discard", QMessageBox::Discard },
   { "Help", QMessageBox::Help },
   { "Apply", QMessageBox::Apply },
   { "Reset", QMessageBox::Reset },
   { "RestoreDefaults", QMessageBox::RestoreDefaults },
   { "FirstButton", QMessageBox::FirstButton },
   { "LastButton", QMessageBox::LastButton },
   { "YesAll", QMessageBox::YesAll },
   { "NoAll", QMessageBox::NoAll },
   { "Default", QMessageBox::Default },
   { "Escape", QMessageBox::Escape },
   { "FlagMask", QMessageBox::FlagMask },
   { "ButtonMask", QMessageBox::ButtonMask },

};

QVector<PlastiQMetaObject*> PlastiQQMessageBox::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMessageBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQMessageBox::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QMessageBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMessageBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMessageBoxWrapper : public QMessageBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMessageBoxWrapper(QWidget *parent = Q_NULLPTR)
         : QMessageBox(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQMessageBoxWrapper(Icon icon, const QString &title, const QString &text, StandardButtons buttons = NoButton, QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint)
         : QMessageBox(icon,title,text,buttons,parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void changeEvent(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMessageBox::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QMessageBox::changeEvent(ev);
    }

    void closeEvent(QCloseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMessageBox::closeEvent(e);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *e) {
        return QMessageBox::closeEvent(e);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMessageBox::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QMessageBox::event(e);
    }

    void keyPressEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMessageBox::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QMessageBox::keyPressEvent(e);
    }

    void resizeEvent(QResizeEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMessageBox::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QMessageBox::resizeEvent(event);
    }

    void showEvent(QShowEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMessageBox::showEvent(e);
    }

    void PlastiQParentCall_showEvent(QShowEvent *e) {
        return QMessageBox::showEvent(e);
    }

    void contextMenuEvent(QContextMenuEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMessageBox::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QMessageBox::contextMenuEvent(e);
    }

    bool eventFilter(QObject *o, QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(o);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(e);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMessageBox::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QMessageBox::eventFilter(o,e);
    }

};

void PlastiQQMessageBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMessageBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMessageBoxWrapper(); break;
        case 1: o = new PlastiQQMessageBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQMessageBoxWrapper(QMessageBox::Icon(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_string); break;
        case 3: o = new PlastiQQMessageBoxWrapper(QMessageBox::Icon(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)); break;
        case 4: o = new PlastiQQMessageBoxWrapper(QMessageBox::Icon(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    reinterpret_cast<QWidget*>(stack[5].s_voidp)); break;
        case 5: o = new PlastiQQMessageBoxWrapper(QMessageBox::Icon(stack[1].s_int64),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    reinterpret_cast<QWidget*>(stack[5].s_voidp),
                    Qt::WindowFlags(stack[6].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMessageBox *p = new PlastiQQMessageBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMessageBox *p = new PlastiQQMessageBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 57) {
            id -= 57;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMessageBox *o = sc ? Q_NULLPTR : reinterpret_cast<QMessageBox*>(object->plastiq_data());

        switch(id) {
        case 0: o->addButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp),
                    QMessageBox::ButtonRole(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 1: { QPushButton* _r = o->addButton(stack[1].s_string,
                    QMessageBox::ButtonRole(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPushButton"; } break;
        case 2: { QPushButton* _r = o->addButton(QMessageBox::StandardButton(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPushButton"; } break;
        case 3: { QAbstractButton* _r = o->button(QMessageBox::StandardButton(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractButton"; } break;
        case 4: { qint64 _r = o->buttonRole(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp)); // HACK for ButtonRole 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QCheckBox* _r = o->checkBox();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCheckBox"; } break;
        case 6: { QAbstractButton* _r = o->clickedButton();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractButton"; } break;
        case 7: { QPushButton* _r = o->defaultButton();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPushButton"; } break;
        case 8: { QString _r = o->detailedText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QAbstractButton* _r = o->escapeButton();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractButton"; } break;
        case 10: { qint64 _r = o->icon(); // HACK for Icon 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->iconPixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { QString _r = o->informativeText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: o->open(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->removeButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setCheckBox(reinterpret_cast<QCheckBox*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setDefaultButton(reinterpret_cast<QPushButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setDefaultButton(QMessageBox::StandardButton(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setDetailedText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setEscapeButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setEscapeButton(QMessageBox::StandardButton(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setIcon(QMessageBox::Icon(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setIconPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setInformativeText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setStandardButtons(QMessageBox::StandardButtons(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setTextFormat(Qt::TextFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setTextInteractionFlags(Qt::TextInteractionFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setWindowModality(Qt::WindowModality(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setWindowTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 30: { qint64 _r = o->standardButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 31: { qint64 _r = o->standardButtons(); // HACK for StandardButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 32: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 33: { qint64 _r = o->textFormat(); // HACK for Qt::TextFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 34: { qint64 _r = o->textInteractionFlags(); // HACK for Qt::TextInteractionFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 35: if(sc) { QMessageBox::about(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string); } else { o->about(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 36: if(sc) { QMessageBox::aboutQt(reinterpret_cast<QWidget*>(stack[1].s_voidp)); } else { o->aboutQt(reinterpret_cast<QWidget*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 37: if(sc) { QMessageBox::aboutQt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string); } else { o->aboutQt(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 38: { qint64 _r = sc ? QMessageBox::critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 39: { qint64 _r = sc ? QMessageBox::critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)) : o->critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 40: { qint64 _r = sc ? QMessageBox::critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)) : o->critical(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 41: { qint64 _r = sc ? QMessageBox::information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 42: { qint64 _r = sc ? QMessageBox::information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)) : o->information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 43: { qint64 _r = sc ? QMessageBox::information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)) : o->information(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 44: { qint64 _r = sc ? QMessageBox::question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 45: { qint64 _r = sc ? QMessageBox::question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)) : o->question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 46: { qint64 _r = sc ? QMessageBox::question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)) : o->question(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 47: { qint64 _r = sc ? QMessageBox::warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string) : o->warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 48: { qint64 _r = sc ? QMessageBox::warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)) : o->warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 49: { qint64 _r = sc ? QMessageBox::warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)) : o->warning(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string,
                    stack[3].s_string,
                    QMessageBox::StandardButtons(stack[4].s_int64),
                    QMessageBox::StandardButton(stack[5].s_int64)); // HACK for StandardButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 50: if (isWrapper) ((PlastiQQMessageBoxWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 51: if (isWrapper) ((PlastiQQMessageBoxWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 52: { bool _r;
                if (isWrapper) _r = ((PlastiQQMessageBoxWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 53: if (isWrapper) ((PlastiQQMessageBoxWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 54: if (isWrapper) ((PlastiQQMessageBoxWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 55: if (isWrapper) ((PlastiQQMessageBoxWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 56: { int _r = o->exec();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMessageBox *o = reinterpret_cast<QMessageBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMessageBox::buttonClicked,
            [=](QAbstractButton* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAbstractButton";
                PlastiQ_activate(sender, "buttonClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMessageBox *o = reinterpret_cast<QMessageBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMessageBox *o = reinterpret_cast<QMessageBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMessageBox *o = reinterpret_cast<QMessageBox*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMessageBox::~PlastiQQMessageBox() {
    QMessageBox* o = reinterpret_cast<QMessageBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
