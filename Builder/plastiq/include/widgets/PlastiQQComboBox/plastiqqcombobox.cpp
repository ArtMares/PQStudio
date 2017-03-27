#include "plastiqmethod.h"
#include "plastiqqcombobox.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QComboBox> 
#include <QCompleter>
#include <QVariant>
#include <QString>
#include <QSize>
#include <QAbstractItemDelegate>
#include <QIcon>
#include <QLineEdit>
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QValidator>
#include <QAbstractItemView>
#include <QEvent>
#include <QContextMenuEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQComboBox::plastiqConstructors = {
    { "QComboBox()", { "QComboBox", "", "QComboBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QComboBox(QWidget*)", { "QComboBox", "QWidget*", "QComboBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQComboBox::plastiqMethods = {
    { "addItem(QString)", { "addItem", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QString,QVariant)", { "addItem", "QString&,QVariant&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QIcon&,QString)", { "addItem", "QIcon&,QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QIcon&,QString,QVariant)", { "addItem", "QIcon&,QString&,QVariant&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItems(QStringList&)", { "addItems", "QStringList&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completer()", { "completer", "", "QCompleter*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentData()", { "currentData", "", "QVariant", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentData(int)", { "currentData", "int", "QVariant", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentText()", { "currentText", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duplicatesEnabled()", { "duplicatesEnabled", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findData(QVariant)", { "findData", "QVariant&", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findData(QVariant,int)", { "findData", "QVariant&,int", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findData(QVariant,int,enum)", { "findData", "QVariant&,int,Qt::MatchFlags", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findText(QString)", { "findText", "QString&", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "findText(QString,enum)", { "findText", "QString&,Qt::MatchFlags", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFrame()", { "hasFrame", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hidePopup()", { "hidePopup", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconSize()", { "iconSize", "", "QSize", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QString)", { "insertItem", "int,QString&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QString,QVariant)", { "insertItem", "int,QString&,QVariant&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QIcon&,QString)", { "insertItem", "int,QIcon&,QString&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QIcon&,QString,QVariant)", { "insertItem", "int,QIcon&,QString&,QVariant&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItems(int,QStringList&)", { "insertItems", "int,QStringList&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertPolicy()", { "insertPolicy", "", "InsertPolicy", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSeparator(int)", { "insertSeparator", "int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEditable()", { "isEditable", "", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemData(int)", { "itemData", "int", "QVariant", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemData(int,int)", { "itemData", "int,int", "QVariant", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemDelegate()", { "itemDelegate", "", "QAbstractItemDelegate*", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemIcon(int)", { "itemIcon", "int", "QIcon", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemText(int)", { "itemText", "int", "QString", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineEdit()", { "lineEdit", "", "QLineEdit*", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxCount()", { "maxCount", "", "int", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxVisibleItems()", { "maxVisibleItems", "", "int", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumContentsLength()", { "minimumContentsLength", "", "int", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modelColumn()", { "modelColumn", "", "int", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItem(int)", { "removeItem", "int", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootModelIndex()", { "rootModelIndex", "", "QModelIndex", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCompleter(QCompleter*)", { "setCompleter", "QCompleter*", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDuplicatesEnabled(bool)", { "setDuplicatesEnabled", "bool", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEditable(bool)", { "setEditable", "bool", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrame(bool)", { "setFrame", "bool", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconSize(QSize&)", { "setIconSize", "QSize&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInsertPolicy(enum)", { "setInsertPolicy", "InsertPolicy", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemData(int,QVariant)", { "setItemData", "int,QVariant&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemData(int,QVariant,int)", { "setItemData", "int,QVariant&,int", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemDelegate(QAbstractItemDelegate*)", { "setItemDelegate", "QAbstractItemDelegate*", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemIcon(int,QIcon&)", { "setItemIcon", "int,QIcon&", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemText(int,QString)", { "setItemText", "int,QString&", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineEdit(QLineEdit*)", { "setLineEdit", "QLineEdit*", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaxCount(int)", { "setMaxCount", "int", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaxVisibleItems(int)", { "setMaxVisibleItems", "int", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumContentsLength(int)", { "setMinimumContentsLength", "int", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModelColumn(int)", { "setModelColumn", "int", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRootModelIndex(QModelIndex&)", { "setRootModelIndex", "QModelIndex&", "void", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeAdjustPolicy(enum)", { "setSizeAdjustPolicy", "SizeAdjustPolicy", "void", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValidator(const QValidator*)", { "setValidator", "QValidator*", "void", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setView(QAbstractItemView*)", { "setView", "QAbstractItemView*", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showPopup()", { "showPopup", "", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeAdjustPolicy()", { "sizeAdjustPolicy", "", "SizeAdjustPolicy", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "validator()", { "validator", "", "const QValidator*", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "view()", { "view", "", "QAbstractItemView*", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionComboBox*)", { "initStyleOption", "QStyleOptionComboBox*", "void", 66, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 71, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 72, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 73, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 74, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 75, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 76, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 77, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 78, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 79, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 80, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 81, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "clearEditText()", { "clearEditText", "", "void", 82, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 83, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentText(QString)", { "setCurrentText", "QString&", "void", 84, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setEditText(QString)", { "setEditText", "QString&", "void", 85, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQComboBox::plastiqSignals = {
    { "activated(int)", { "activated", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "activated(QString)", { "activated", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentIndexChanged(int)", { "currentIndexChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentIndexChanged(QString)", { "currentIndexChanged", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentTextChanged(QString)", { "currentTextChanged", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "editTextChanged(QString)", { "editTextChanged", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highlighted(int)", { "highlighted", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highlighted(QString)", { "highlighted", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQComboBox::plastiqProperties = {
    { "count", { "count", "int", "", "count" } },
    { "currentData", { "currentData", "QVariant", "", "currentData" } },
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },
    { "currentText", { "currentText", "QString", "setCurrentText", "currentText" } },
    { "duplicatesEnabled", { "duplicatesEnabled", "bool", "setDuplicatesEnabled", "duplicatesEnabled" } },
    { "editable", { "editable", "bool", "setEditable", "isEditable" } },
    { "frame", { "frame", "bool", "setFrame", "hasFrame" } },
    { "iconSize", { "iconSize", "QSize", "setIconSize", "iconSize" } },
    { "insertPolicy", { "insertPolicy", "long", "setInsertPolicy", "insertPolicy" } },
    { "maxCount", { "maxCount", "int", "setMaxCount", "maxCount" } },
    { "maxVisibleItems", { "maxVisibleItems", "int", "setMaxVisibleItems", "maxVisibleItems" } },
    { "minimumContentsLength", { "minimumContentsLength", "int", "setMinimumContentsLength", "minimumContentsLength" } },
    { "modelColumn", { "modelColumn", "int", "setModelColumn", "modelColumn" } },
    { "sizeAdjustPolicy", { "sizeAdjustPolicy", "long", "setSizeAdjustPolicy", "sizeAdjustPolicy" } },

};

QHash<QByteArray, long> PlastiQQComboBox::plastiqConstants = {

    /* QComboBox::InsertPolicy */
   { "NoInsert", QComboBox::NoInsert },
   { "InsertAtTop", QComboBox::InsertAtTop },
   { "InsertAtCurrent", QComboBox::InsertAtCurrent },
   { "InsertAtBottom", QComboBox::InsertAtBottom },
   { "InsertAfterCurrent", QComboBox::InsertAfterCurrent },
   { "InsertBeforeCurrent", QComboBox::InsertBeforeCurrent },
   { "InsertAlphabetically", QComboBox::InsertAlphabetically },

    /* QComboBox::SizeAdjustPolicy */
   { "AdjustToContents", QComboBox::AdjustToContents },
   { "AdjustToContentsOnFirstShow", QComboBox::AdjustToContentsOnFirstShow },
   { "AdjustToMinimumContentsLength", QComboBox::AdjustToMinimumContentsLength },
   { "AdjustToMinimumContentsLengthWithIcon", QComboBox::AdjustToMinimumContentsLengthWithIcon },

};

QVector<PlastiQMetaObject*> PlastiQQComboBox::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQComboBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQComboBox::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QComboBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQComboBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQComboBoxWrapper : public QComboBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQComboBoxWrapper(QWidget *parent = Q_NULLPTR)
         : QComboBox(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void hidePopup() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hidePopup()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::hidePopup();
    }

    void PlastiQParentCall_hidePopup() {
        return QComboBox::hidePopup();
    }

    void showPopup() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showPopup()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::showPopup();
    }

    void PlastiQParentCall_showPopup() {
        return QComboBox::showPopup();
    }

    void changeEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QComboBox::changeEvent(e);
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
        else return QComboBox::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QComboBox::contextMenuEvent(e);
    }

    void focusInEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QComboBox::focusInEvent(e);
    }

    void focusOutEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QComboBox::focusOutEvent(e);
    }

    void hideEvent(QHideEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::hideEvent(e);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *e) {
        return QComboBox::hideEvent(e);
    }

    void inputMethodEvent(QInputMethodEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void inputMethodEvent(QInputMethodEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QInputMethodEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::inputMethodEvent(e);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *e) {
        return QComboBox::inputMethodEvent(e);
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
        else return QComboBox::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QComboBox::keyPressEvent(e);
    }

    void keyReleaseEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QComboBox::keyReleaseEvent(e);
    }

    void mousePressEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QComboBox::mousePressEvent(e);
    }

    void mouseReleaseEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QComboBox::mouseReleaseEvent(e);
    }

    void paintEvent(QPaintEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QComboBox::paintEvent(e);
    }

    void resizeEvent(QResizeEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QComboBox::resizeEvent(e);
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
        else return QComboBox::showEvent(e);
    }

    void PlastiQParentCall_showEvent(QShowEvent *e) {
        return QComboBox::showEvent(e);
    }

    void wheelEvent(QWheelEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QComboBox::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QComboBox::wheelEvent(e);
    }

};

void PlastiQQComboBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQComboBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQComboBoxWrapper(); break;
        case 1: o = new PlastiQQComboBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQComboBox *p = new PlastiQQComboBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQComboBox *p = new PlastiQQComboBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 86) {
            id -= 86;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QComboBox *o = sc ? Q_NULLPTR : reinterpret_cast<QComboBox*>(object->plastiq_data());

        switch(id) {
        case 0: o->addItem(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addItem(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addItem((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addItem((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->addItems((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: { QCompleter* _r = o->completer();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCompleter"; } break;
        case 6: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->currentData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->currentData(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { QString _r = o->currentText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { bool _r = o->duplicatesEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { int _r = o->findData(stack[1].s_variant);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->findData(stack[1].s_variant,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->findData(stack[1].s_variant,
                    stack[2].s_int,
                    Qt::MatchFlags(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->findText(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { int _r = o->findText(stack[1].s_string,
                    Qt::MatchFlags(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { bool _r = o->hasFrame();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_hidePopup();
                else o->hidePopup();
                stack[0].type = PlastiQ::Void; break;
        case 19: { /* COPY OBJECT */
            QSize *_r = new QSize(o->iconSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: o->insertItem(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->insertItem(stack[1].s_int,
                    stack[2].s_string,
                    stack[3].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->insertItem(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->insertItem(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)),
                    stack[3].s_string,
                    stack[4].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->insertItems(stack[1].s_int,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: { qint64 _r = o->insertPolicy(); // HACK for InsertPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 26: o->insertSeparator(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: { bool _r = o->isEditable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->itemData(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->itemData(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { QAbstractItemDelegate* _r = o->itemDelegate();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemDelegate"; } break;
        case 31: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->itemIcon(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { QString _r = o->itemText(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 33: { QLineEdit* _r = o->lineEdit();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLineEdit"; } break;
        case 34: { int _r = o->maxCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 35: { int _r = o->maxVisibleItems();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 36: { int _r = o->minimumContentsLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 37: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 38: { int _r = o->modelColumn();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 39: o->removeItem(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 40: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->rootModelIndex());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: o->setCompleter(reinterpret_cast<QCompleter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setDuplicatesEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setEditable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setFrame(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setIconSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setInsertPolicy(QComboBox::InsertPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setItemData(stack[1].s_int,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setItemData(stack[1].s_int,
                    stack[2].s_variant,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setItemDelegate(reinterpret_cast<QAbstractItemDelegate*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setItemIcon(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setItemText(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setLineEdit(reinterpret_cast<QLineEdit*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setMaxCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 54: o->setMaxVisibleItems(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 55: o->setMinimumContentsLength(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 56: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 57: o->setModelColumn(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 58: o->setRootModelIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 59: o->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 60: o->setValidator(reinterpret_cast<const QValidator*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 61: o->setView(reinterpret_cast<QAbstractItemView*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 62: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_showPopup();
                else o->showPopup();
                stack[0].type = PlastiQ::Void; break;
        case 63: { qint64 _r = o->sizeAdjustPolicy(); // HACK for SizeAdjustPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 64: { QValidator* _r = const_cast<QValidator*>(o->validator());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QValidator"; } break;
        case 65: { QAbstractItemView* _r = o->view();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemView"; } break;
        case 66: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 67: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 68: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 69: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 70: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 71: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 72: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 73: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 74: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 75: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 76: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 77: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 78: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 79: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 80: if (isWrapper) ((PlastiQQComboBoxWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 81: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 82: o->clearEditText();
                stack[0].type = PlastiQ::Void; break;
        case 83: o->setCurrentIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 84: o->setCurrentText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 85: o->setEditText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 8) {
            id -= 8;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QComboBox *o = reinterpret_cast<QComboBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QComboBox::*)(int)>(&QComboBox::activated),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::activated),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "activated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentIndexChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentIndexChanged),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "currentIndexChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QComboBox::currentTextChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "currentTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QComboBox::editTextChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "editTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, static_cast<void (QComboBox::*)(int)>(&QComboBox::highlighted),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "highlighted", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::highlighted),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "highlighted", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QComboBox *o = reinterpret_cast<QComboBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QComboBox *o = reinterpret_cast<QComboBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QComboBox *o = reinterpret_cast<QComboBox*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQComboBox::~PlastiQQComboBox() {
    QComboBox* o = reinterpret_cast<QComboBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
