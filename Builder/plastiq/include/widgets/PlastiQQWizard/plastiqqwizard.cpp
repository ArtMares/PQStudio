#include "plastiqmethod.h"
#include "plastiqqwizard.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QWizard> 
#include <QAbstractButton>
#include <QString>
#include <QWizardPage>
#include <QVariant>
#include <QPixmap>
#include <QWidget>
#include <QEvent>
#include <QByteArray>
#include <QPaintEvent>
#include <QResizeEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQWizard::plastiqConstructors = {
    { "QWizard()", { "QWizard", "", "QWizard*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWizard(QWidget*)", { "QWizard", "QWidget*", "QWizard*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWizard(QWidget*,enum)", { "QWizard", "QWidget*,Qt::WindowFlags", "QWizard*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWizard::plastiqMethods = {
    { "addPage(QWizardPage*)", { "addPage", "QWizardPage*", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "button(enum)", { "button", "WizardButton", "QAbstractButton*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonText(enum)", { "buttonText", "WizardButton", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentId()", { "currentId", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentPage()", { "currentPage", "", "QWizardPage*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "field(QString)", { "field", "QString&", "QVariant", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasVisitedPage(int)", { "hasVisitedPage", "int", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextId()", { "nextId", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "options()", { "options", "", "WizardOptions", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "page(int)", { "page", "int", "QWizardPage*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(enum)", { "pixmap", "WizardPixmap", "QPixmap", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removePage(int)", { "removePage", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setButton(enum,QAbstractButton*)", { "setButton", "WizardButton,QAbstractButton*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setButtonText(enum,QString)", { "setButtonText", "WizardButton,QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultProperty(const char*,const char*,const char*)", { "setDefaultProperty", "char*,char*,char*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setField(QString,QVariant)", { "setField", "QString&,QVariant&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "WizardOption", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "WizardOption,bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptions(enum)", { "setOptions", "WizardOptions", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPage(int,QWizardPage*)", { "setPage", "int,QWizardPage*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixmap(enum,QPixmap&)", { "setPixmap", "WizardPixmap,QPixmap&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSideWidget(QWidget*)", { "setSideWidget", "QWidget*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStartId(int)", { "setStartId", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSubTitleFormat(enum)", { "setSubTitleFormat", "Qt::TextFormat", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleFormat(enum)", { "setTitleFormat", "Qt::TextFormat", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWizardStyle(enum)", { "setWizardStyle", "WizardStyle", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sideWidget()", { "sideWidget", "", "QWidget*", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startId()", { "startId", "", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subTitleFormat()", { "subTitleFormat", "", "Qt::TextFormat", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "WizardOption", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "titleFormat()", { "titleFormat", "", "Qt::TextFormat", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "validateCurrentPage()", { "validateCurrentPage", "", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wizardStyle()", { "wizardStyle", "", "WizardStyle", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cleanupPage(int)", { "cleanupPage", "int", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "initializePage(int)", { "initializePage", "int", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "done(int)", { "done", "int", "void", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 36, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "nativeEvent(QByteArray,void*,long*)", { "nativeEvent", "QByteArray&,void*,long*", "bool", 37, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 38, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 39, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "back()", { "back", "", "void", 40, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "next()", { "next", "", "void", 41, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "restart()", { "restart", "", "void", 42, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWizard::plastiqSignals = {
    { "currentIdChanged(int)", { "currentIdChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "customButtonClicked(int)", { "customButtonClicked", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "helpRequested()", { "helpRequested", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pageAdded(int)", { "pageAdded", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pageRemoved(int)", { "pageRemoved", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWizard::plastiqProperties = {
    { "currentId", { "currentId", "int", "currentIdChanged", "currentId" } },
    { "options", { "options", "long", "setOptions", "options" } },
    { "startId", { "startId", "int", "setStartId", "startId" } },
    { "subTitleFormat", { "subTitleFormat", "long", "setSubTitleFormat", "subTitleFormat" } },
    { "titleFormat", { "titleFormat", "long", "setTitleFormat", "titleFormat" } },
    { "wizardStyle", { "wizardStyle", "long", "setWizardStyle", "wizardStyle" } },

};

QHash<QByteArray, long> PlastiQQWizard::plastiqConstants = {

    /* QWizard::WizardButton */
   { "BackButton", QWizard::BackButton },
   { "NextButton", QWizard::NextButton },
   { "CommitButton", QWizard::CommitButton },
   { "FinishButton", QWizard::FinishButton },
   { "CancelButton", QWizard::CancelButton },
   { "HelpButton", QWizard::HelpButton },
   { "CustomButton1", QWizard::CustomButton1 },
   { "CustomButton2", QWizard::CustomButton2 },
   { "CustomButton3", QWizard::CustomButton3 },
   { "Stretch", QWizard::Stretch },
   { "NoButton", QWizard::NoButton },
   { "NStandardButtons", QWizard::NStandardButtons },
   { "NButtons", QWizard::NButtons },

    /* QWizard::WizardOption */
   { "IndependentPages", QWizard::IndependentPages },
   { "IgnoreSubTitles", QWizard::IgnoreSubTitles },
   { "ExtendedWatermarkPixmap", QWizard::ExtendedWatermarkPixmap },
   { "NoDefaultButton", QWizard::NoDefaultButton },
   { "NoBackButtonOnStartPage", QWizard::NoBackButtonOnStartPage },
   { "NoBackButtonOnLastPage", QWizard::NoBackButtonOnLastPage },
   { "DisabledBackButtonOnLastPage", QWizard::DisabledBackButtonOnLastPage },
   { "HaveNextButtonOnLastPage", QWizard::HaveNextButtonOnLastPage },
   { "HaveFinishButtonOnEarlyPages", QWizard::HaveFinishButtonOnEarlyPages },
   { "NoCancelButton", QWizard::NoCancelButton },
   { "CancelButtonOnLeft", QWizard::CancelButtonOnLeft },
   { "HaveHelpButton", QWizard::HaveHelpButton },
   { "HelpButtonOnRight", QWizard::HelpButtonOnRight },
   { "HaveCustomButton1", QWizard::HaveCustomButton1 },
   { "HaveCustomButton2", QWizard::HaveCustomButton2 },
   { "HaveCustomButton3", QWizard::HaveCustomButton3 },
   { "NoCancelButtonOnLastPage", QWizard::NoCancelButtonOnLastPage },

    /* QWizard::WizardPixmap */
   { "WatermarkPixmap", QWizard::WatermarkPixmap },
   { "LogoPixmap", QWizard::LogoPixmap },
   { "BannerPixmap", QWizard::BannerPixmap },
   { "BackgroundPixmap", QWizard::BackgroundPixmap },
   { "NPixmaps", QWizard::NPixmaps },

    /* QWizard::WizardStyle */
   { "ClassicStyle", QWizard::ClassicStyle },
   { "ModernStyle", QWizard::ModernStyle },
   { "MacStyle", QWizard::MacStyle },
   { "AeroStyle", QWizard::AeroStyle },
   { "NStyles", QWizard::NStyles },

};

QVector<PlastiQMetaObject*> PlastiQQWizard::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWizard::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQWizard::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QWizard", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWizard::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWizardWrapper : public QWizard {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWizardWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = Qt::WindowFlags())
         : QWizard(parent,flags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    int nextId() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int nextId()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QWizard::nextId();
    }

    int PlastiQParentCall_nextId() const {
        return QWizard::nextId();
    }

    bool validateCurrentPage() override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool validateCurrentPage()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWizard::validateCurrentPage();
    }

    bool PlastiQParentCall_validateCurrentPage() {
        return QWizard::validateCurrentPage();
    }

    void cleanupPage(int id) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void cleanupPage(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = id;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizard::cleanupPage(id);
    }

    void PlastiQParentCall_cleanupPage(int id) {
        return QWizard::cleanupPage(id);
    }

    void initializePage(int id) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void initializePage(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = id;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizard::initializePage(id);
    }

    void PlastiQParentCall_initializePage(int id) {
        return QWizard::initializePage(id);
    }

    void done(int result) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void done(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = result;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizard::done(result);
    }

    void PlastiQParentCall_done(int result) {
        return QWizard::done(result);
    }

    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWizard::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QWizard::event(event);
    }

    bool nativeEvent(const QByteArray &eventType, void *message, long *result) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool nativeEvent(const QByteArray&,void*,long*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_bytearray = const_cast<QByteArray&>(eventType);
            stack[1].name = QByteArrayLiteral("QByteArray");
            stack[1].type = PlastiQ::ByteArray;
            stack[2].s_voidp = reinterpret_cast<void*>(message);
            stack[2].name = QByteArrayLiteral("void");
            stack[2].type = PlastiQ::ObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(result);
            stack[3].name = QByteArrayLiteral("long");
            stack[3].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWizard::nativeEvent(eventType,message,result);
    }

    bool PlastiQParentCall_nativeEvent(const QByteArray &eventType, void *message, long *result) {
        return QWizard::nativeEvent(eventType,message,result);
    }

    void paintEvent(QPaintEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizard::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QWizard::paintEvent(event);
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
        else return QWizard::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QWizard::resizeEvent(event);
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
        else return QWizard::closeEvent(e);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *e) {
        return QWizard::closeEvent(e);
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
        else return QWizard::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QWizard::contextMenuEvent(e);
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
        else return QWizard::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QWizard::eventFilter(o,e);
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
        else return QWizard::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QWizard::keyPressEvent(e);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizard::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QWizard::showEvent(event);
    }

};

void PlastiQQWizard::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWizardWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWizardWrapper(); break;
        case 1: o = new PlastiQQWizardWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQWizardWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWizard *p = new PlastiQQWizard();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWizard *p = new PlastiQQWizard();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 43) {
            id -= 43;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWizard *o = sc ? Q_NULLPTR : reinterpret_cast<QWizard*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->addPage(reinterpret_cast<QWizardPage*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QAbstractButton* _r = o->button(QWizard::WizardButton(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractButton"; } break;
        case 2: { QString _r = o->buttonText(QWizard::WizardButton(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { int _r = o->currentId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QWizardPage* _r = o->currentPage();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWizardPage"; } break;
        case 5: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->field(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { bool _r = o->hasVisitedPage(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { int _r;
                if (isWrapper) _r = ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_nextId();
                else _r = o->nextId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { qint64 _r = o->options(); // HACK for WizardOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QWizardPage* _r = o->page(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWizardPage"; } break;
        case 10: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(QWizard::WizardPixmap(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: o->removePage(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setButton(QWizard::WizardButton(stack[1].s_int64),
                    reinterpret_cast<QAbstractButton*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setButtonText(QWizard::WizardButton(stack[1].s_int64),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setDefaultProperty(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setField(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setOption(QWizard::WizardOption(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setOption(QWizard::WizardOption(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setOptions(QWizard::WizardOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setPage(stack[1].s_int,
                    reinterpret_cast<QWizardPage*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setPixmap(QWizard::WizardPixmap(stack[1].s_int64),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setSideWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setStartId(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setSubTitleFormat(Qt::TextFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setTitleFormat(Qt::TextFormat(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setWizardStyle(QWizard::WizardStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: { QWidget* _r = o->sideWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 27: { int _r = o->startId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { qint64 _r = o->subTitleFormat(); // HACK for Qt::TextFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 29: { bool _r = o->testOption(QWizard::WizardOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { qint64 _r = o->titleFormat(); // HACK for Qt::TextFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 31: { bool _r;
                if (isWrapper) _r = ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_validateCurrentPage();
                else _r = o->validateCurrentPage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { qint64 _r = o->wizardStyle(); // HACK for WizardStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 33: if (isWrapper) ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_cleanupPage(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_initializePage(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: if (isWrapper) ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_done(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 36: { bool _r;
                if (isWrapper) _r = ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 37: { bool _r;
                if (isWrapper) _r = ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_nativeEvent(stack[1].s_bytearray,
                    reinterpret_cast<void*>(stack[2].s_voidp),
                    reinterpret_cast<long*>(stack[3].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: if (isWrapper) ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 39: if (isWrapper) ((PlastiQQWizardWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 40: o->back();
                stack[0].type = PlastiQ::Void; break;
        case 41: o->next();
                stack[0].type = PlastiQ::Void; break;
        case 42: o->restart();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWizard *o = reinterpret_cast<QWizard*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWizard::currentIdChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentIdChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWizard::customButtonClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "customButtonClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QWizard::helpRequested,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "helpRequested", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QWizard::pageAdded,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "pageAdded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QWizard::pageRemoved,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "pageRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWizard *o = reinterpret_cast<QWizard*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWizard *o = reinterpret_cast<QWizard*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWizard *o = reinterpret_cast<QWizard*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWizard::~PlastiQQWizard() {
    QWizard* o = reinterpret_cast<QWizard*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
