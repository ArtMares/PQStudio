#include "plastiqmethod.h"
#include "plastiqqwizardpage.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QWizardPage> 
#include <QString>
#include <QPixmap>
#include <QVariant>
#include <QWizard>

QHash<QByteArray, PlastiQMethod> PlastiQQWizardPage::plastiqConstructors = {
    { "QWizardPage()", { "QWizardPage", "", "QWizardPage*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWizardPage(QWidget*)", { "QWizardPage", "QWidget*", "QWizardPage*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWizardPage::plastiqMethods = {
    { "buttonText(enum)", { "buttonText", "QWizard::WizardButton", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cleanupPage()", { "cleanupPage", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initializePage()", { "initializePage", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCommitPage()", { "isCommitPage", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isComplete()", { "isComplete", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFinalPage()", { "isFinalPage", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextId()", { "nextId", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(enum)", { "pixmap", "QWizard::WizardPixmap", "QPixmap", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setButtonText(enum,QString)", { "setButtonText", "QWizard::WizardButton,QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCommitPage(bool)", { "setCommitPage", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFinalPage(bool)", { "setFinalPage", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixmap(enum,QPixmap&)", { "setPixmap", "QWizard::WizardPixmap,QPixmap&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSubTitle(QString)", { "setSubTitle", "QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitle(QString)", { "setTitle", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subTitle()", { "subTitle", "", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "validatePage()", { "validatePage", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "field(QString)", { "field", "QString&", "QVariant", 17, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "registerField(QString,QWidget*)", { "registerField", "QString&,QWidget*", "void", 18, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "registerField(QString,QWidget*,const char*)", { "registerField", "QString&,QWidget*,char*", "void", 19, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "registerField(QString,QWidget*,const char*,const char*)", { "registerField", "QString&,QWidget*,char*,char*", "void", 20, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setField(QString,QVariant)", { "setField", "QString&,QVariant&", "void", 21, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "wizard()", { "wizard", "", "QWizard*", 22, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWizardPage::plastiqSignals = {
    { "completeChanged()", { "completeChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWizardPage::plastiqProperties = {
    { "subTitle", { "subTitle", "QString", "setSubTitle", "subTitle" } },
    { "title", { "title", "QString", "setTitle", "title" } },

};

QHash<QByteArray, long> PlastiQQWizardPage::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWizardPage::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWizardPage::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQWizardPage::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QWizardPage", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWizardPage::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQWizardPageWrapper : public QWizardPage {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQWizardPageWrapper(QWidget *parent = Q_NULLPTR)
         : QWizardPage(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void cleanupPage() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void cleanupPage()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::cleanupPage();
    }

    void PlastiQParentCall_cleanupPage() {
        return QWizardPage::cleanupPage();
    }

    void initializePage() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void initializePage()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::initializePage();
    }

    void PlastiQParentCall_initializePage() {
        return QWizardPage::initializePage();
    }

    bool isComplete() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isComplete()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWizardPage::isComplete();
    }

    bool PlastiQParentCall_isComplete() const {
        return QWizardPage::isComplete();
    }

    int nextId() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int nextId()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QWizardPage::nextId();
    }

    int PlastiQParentCall_nextId() const {
        return QWizardPage::nextId();
    }

    bool validatePage() override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool validatePage()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWizardPage::validatePage();
    }

    bool PlastiQParentCall_validatePage() {
        return QWizardPage::validatePage();
    }

    bool hasHeightForWidth() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hasHeightForWidth()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWizardPage::hasHeightForWidth();
    }

    bool PlastiQParentCall_hasHeightForWidth() const {
        return QWizardPage::hasHeightForWidth();
    }

    int heightForWidth(int w) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int heightForWidth(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = w;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QWizardPage::heightForWidth(w);
    }

    int PlastiQParentCall_heightForWidth(int w) const {
        return QWizardPage::heightForWidth(w);
    }

    QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant inputMethodQuery(Qt::InputMethodQuery)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = query;
            stack[1].name = QByteArrayLiteral("Qt::InputMethodQuery");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QWizardPage::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QWizardPage::inputMethodQuery(query);
    }

    QSize minimumSizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize minimumSizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QWizardPage::minimumSizeHint();
    }

    QSize PlastiQParentCall_minimumSizeHint() const {
        return QWizardPage::minimumSizeHint();
    }

    QSize sizeHint() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize sizeHint()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QWizardPage::sizeHint();
    }

    QSize PlastiQParentCall_sizeHint() const {
        return QWizardPage::sizeHint();
    }

    void actionEvent(QActionEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void actionEvent(QActionEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QActionEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::actionEvent(event);
    }

    void PlastiQParentCall_actionEvent(QActionEvent *event) {
        return QWizardPage::actionEvent(event);
    }

    void changeEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QWizardPage::changeEvent(event);
    }

    void closeEvent(QCloseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QWizardPage::closeEvent(event);
    }

    void contextMenuEvent(QContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QWizardPage::contextMenuEvent(event);
    }

    void dragEnterEvent(QDragEnterEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragEnterEvent(QDragEnterEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragEnterEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QDragEnterEvent *event) {
        return QWizardPage::dragEnterEvent(event);
    }

    void dragLeaveEvent(QDragLeaveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QDragLeaveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragLeaveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QDragLeaveEvent *event) {
        return QWizardPage::dragLeaveEvent(event);
    }

    void dragMoveEvent(QDragMoveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QDragMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDragMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QDragMoveEvent *event) {
        return QWizardPage::dragMoveEvent(event);
    }

    void dropEvent(QDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QDropEvent *event) {
        return QWizardPage::dropEvent(event);
    }

    void enterEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void enterEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::enterEvent(event);
    }

    void PlastiQParentCall_enterEvent(QEvent *event) {
        return QWizardPage::enterEvent(event);
    }

    void focusInEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QWizardPage::focusInEvent(event);
    }

    bool focusNextPrevChild(bool next) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool focusNextPrevChild(bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_bool = next;
            stack[1].name = QByteArrayLiteral("bool");
            stack[1].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QWizardPage::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QWizardPage::focusNextPrevChild(next);
    }

    void focusOutEvent(QFocusEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QWizardPage::focusOutEvent(event);
    }

    void hideEvent(QHideEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::hideEvent(event);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *event) {
        return QWizardPage::hideEvent(event);
    }

    void inputMethodEvent(QInputMethodEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void inputMethodEvent(QInputMethodEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QInputMethodEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QWizardPage::inputMethodEvent(event);
    }

    void keyPressEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QWizardPage::keyPressEvent(event);
    }

    void keyReleaseEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QWizardPage::keyReleaseEvent(event);
    }

    void leaveEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void leaveEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::leaveEvent(event);
    }

    void PlastiQParentCall_leaveEvent(QEvent *event) {
        return QWizardPage::leaveEvent(event);
    }

    void mouseDoubleClickEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *event) {
        return QWizardPage::mouseDoubleClickEvent(event);
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QWizardPage::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QWizardPage::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QWizardPage::mouseReleaseEvent(event);
    }

    void moveEvent(QMoveEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void moveEvent(QMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::moveEvent(event);
    }

    void PlastiQParentCall_moveEvent(QMoveEvent *event) {
        return QWizardPage::moveEvent(event);
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
        else return QWizardPage::nativeEvent(eventType,message,result);
    }

    bool PlastiQParentCall_nativeEvent(const QByteArray &eventType, void *message, long *result) {
        return QWizardPage::nativeEvent(eventType,message,result);
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
        else return QWizardPage::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QWizardPage::paintEvent(event);
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
        else return QWizardPage::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QWizardPage::resizeEvent(event);
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
        else return QWizardPage::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QWizardPage::showEvent(event);
    }

    void tabletEvent(QTabletEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void tabletEvent(QTabletEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTabletEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::tabletEvent(event);
    }

    void PlastiQParentCall_tabletEvent(QTabletEvent *event) {
        return QWizardPage::tabletEvent(event);
    }

    void wheelEvent(QWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QWizardPage::wheelEvent(event);
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
        else return QWizardPage::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QWizardPage::event(event);
    }

    void initPainter(QPainter *painter) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void initPainter(QPainter*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QWizardPage::initPainter(painter);
    }

    void PlastiQParentCall_initPainter(QPainter *painter) const {
        return QWizardPage::initPainter(painter);
    }

};

void PlastiQQWizardPage::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQWizardPageWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQWizardPageWrapper(); break;
        case 1: o = new PlastiQQWizardPageWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQWizardPage *p = new PlastiQQWizardPage();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWizardPage *p = new PlastiQQWizardPage();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 23) {
            id -= 23;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWizardPage *o = sc ? Q_NULLPTR : reinterpret_cast<QWizardPage*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->buttonText(QWizard::WizardButton(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: if (isWrapper) ((PlastiQQWizardPageWrapper*)o)->PlastiQParentCall_cleanupPage();
                else o->cleanupPage();
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQWizardPageWrapper*)o)->PlastiQParentCall_initializePage();
                else o->initializePage();
                stack[0].type = PlastiQ::Void; break;
        case 3: { bool _r = o->isCommitPage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQWizardPageWrapper*)o)->PlastiQParentCall_isComplete();
                else _r = o->isComplete();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isFinalPage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { int _r;
                if (isWrapper) _r = ((PlastiQQWizardPageWrapper*)o)->PlastiQParentCall_nextId();
                else _r = o->nextId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(QWizard::WizardPixmap(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: o->setButtonText(QWizard::WizardButton(stack[1].s_int64),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setCommitPage(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setFinalPage(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setPixmap(QWizard::WizardPixmap(stack[1].s_int64),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setSubTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: { QString _r = o->subTitle();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 16: { bool _r;
                if (isWrapper) _r = ((PlastiQQWizardPageWrapper*)o)->PlastiQParentCall_validatePage();
                else _r = o->validatePage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { /* COPY OBJECT */
            QVariant *_r; stack[0].type = PlastiQ::Error; } break;
        case 18: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 19: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 20: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 21: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 22: { QWizard* _r; stack[0].type = PlastiQ::Error; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWizardPage *o = reinterpret_cast<QWizardPage*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWizardPage::completeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "completeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWizardPage *o = reinterpret_cast<QWizardPage*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWizardPage *o = reinterpret_cast<QWizardPage*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWizardPage *o = reinterpret_cast<QWizardPage*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWizardPage::~PlastiQQWizardPage() {
    QWizardPage* o = reinterpret_cast<QWizardPage*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
