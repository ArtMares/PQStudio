#include "plastiqmethod.h"
#include "plastiqqgraphicstextitem.h"

#include "widgets/PlastiQQGraphicsObject/plastiqqgraphicsobject.h"
#include <QGraphicsTextItem> 
#include <QColor>
#include <QTextDocument>
#include <QFont>
#include <QTextCursor>
#include <QString>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QFocusEvent>
#include <QGraphicsSceneHoverEvent>
#include <QInputMethodEvent>
#include <QVariant>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsTextItem::plastiqConstructors = {
    { "QGraphicsTextItem()", { "QGraphicsTextItem", "", "QGraphicsTextItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsTextItem(QGraphicsItem*)", { "QGraphicsTextItem", "QGraphicsItem*", "QGraphicsTextItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsTextItem(QString)", { "QGraphicsTextItem", "QString&", "QGraphicsTextItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsTextItem(QString,QGraphicsItem*)", { "QGraphicsTextItem", "QString&,QGraphicsItem*", "QGraphicsTextItem*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsTextItem::plastiqMethods = {
    { "adjustSize()", { "adjustSize", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultTextColor()", { "defaultTextColor", "", "QColor", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "document()", { "document", "", "QTextDocument*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openExternalLinks()", { "openExternalLinks", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultTextColor(QColor&)", { "setDefaultTextColor", "QColor&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocument(QTextDocument*)", { "setDocument", "QTextDocument*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHtml(QString)", { "setHtml", "QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpenExternalLinks(bool)", { "setOpenExternalLinks", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlainText(QString)", { "setPlainText", "QString&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabChangesFocus(bool)", { "setTabChangesFocus", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextCursor(QTextCursor&)", { "setTextCursor", "QTextCursor&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextInteractionFlags(enum)", { "setTextInteractionFlags", "Qt::TextInteractionFlags", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextWidth(double)", { "setTextWidth", "qreal", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabChangesFocus()", { "tabChangesFocus", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textCursor()", { "textCursor", "", "QTextCursor", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInteractionFlags()", { "textInteractionFlags", "", "Qt::TextInteractionFlags", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textWidth()", { "textWidth", "", "qreal", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHtml()", { "toHtml", "", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPlainText()", { "toPlainText", "", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contextMenuEvent(QGraphicsSceneContextMenuEvent*)", { "contextMenuEvent", "QGraphicsSceneContextMenuEvent*", "void", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QGraphicsSceneDragDropEvent*)", { "dragEnterEvent", "QGraphicsSceneDragDropEvent*", "void", 22, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QGraphicsSceneDragDropEvent*)", { "dragLeaveEvent", "QGraphicsSceneDragDropEvent*", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QGraphicsSceneDragDropEvent*)", { "dragMoveEvent", "QGraphicsSceneDragDropEvent*", "void", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QGraphicsSceneDragDropEvent*)", { "dropEvent", "QGraphicsSceneDragDropEvent*", "void", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverEnterEvent(QGraphicsSceneHoverEvent*)", { "hoverEnterEvent", "QGraphicsSceneHoverEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverLeaveEvent(QGraphicsSceneHoverEvent*)", { "hoverLeaveEvent", "QGraphicsSceneHoverEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverMoveEvent(QGraphicsSceneHoverEvent*)", { "hoverMoveEvent", "QGraphicsSceneHoverEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodQuery(enum)", { "inputMethodQuery", "Qt::InputMethodQuery", "QVariant", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)", { "mouseDoubleClickEvent", "QGraphicsSceneMouseEvent*", "void", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QGraphicsSceneMouseEvent*)", { "mouseMoveEvent", "QGraphicsSceneMouseEvent*", "void", 36, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QGraphicsSceneMouseEvent*)", { "mousePressEvent", "QGraphicsSceneMouseEvent*", "void", 37, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QGraphicsSceneMouseEvent*)", { "mouseReleaseEvent", "QGraphicsSceneMouseEvent*", "void", 38, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sceneEvent(QEvent*)", { "sceneEvent", "QEvent*", "bool", 39, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsTextItem::plastiqSignals = {
    { "linkActivated(QString)", { "linkActivated", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "linkHovered(QString)", { "linkHovered", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsTextItem::plastiqProperties = {
    { "openExternalLinks", { "openExternalLinks", "bool", "setOpenExternalLinks", "openExternalLinks" } },
    { "textCursor", { "textCursor", "QTextCursor", "setTextCursor", "textCursor" } },

};

QHash<QByteArray, long> PlastiQQGraphicsTextItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsTextItem::plastiqInherits = { &PlastiQQGraphicsObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsTextItem::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsTextItem::plastiq_static_metaObject = {
    { &PlastiQQGraphicsObject::plastiq_static_metaObject, &plastiqInherits, "QGraphicsTextItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsTextItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsTextItemWrapper : public QGraphicsTextItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsTextItemWrapper(QGraphicsItem *parent = Q_NULLPTR)
         : QGraphicsTextItem(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQGraphicsTextItemWrapper(const QString &text, QGraphicsItem *parent = Q_NULLPTR)
         : QGraphicsTextItem(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QGraphicsSceneContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QGraphicsSceneContextMenuEvent *event) {
        return QGraphicsTextItem::contextMenuEvent(event);
    }

    void dragEnterEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragEnterEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsTextItem::dragEnterEvent(event);
    }

    void dragLeaveEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragLeaveEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsTextItem::dragLeaveEvent(event);
    }

    void dragMoveEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dragMoveEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsTextItem::dragMoveEvent(event);
    }

    void dropEvent(QGraphicsSceneDragDropEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void dropEvent(QGraphicsSceneDragDropEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneDragDropEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsTextItem::dropEvent(event);
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
        else return QGraphicsTextItem::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QGraphicsTextItem::focusInEvent(event);
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
        else return QGraphicsTextItem::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QGraphicsTextItem::focusOutEvent(event);
    }

    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hoverEnterEvent(QGraphicsSceneHoverEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneHoverEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::hoverEnterEvent(event);
    }

    void PlastiQParentCall_hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsTextItem::hoverEnterEvent(event);
    }

    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hoverLeaveEvent(QGraphicsSceneHoverEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneHoverEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::hoverLeaveEvent(event);
    }

    void PlastiQParentCall_hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsTextItem::hoverLeaveEvent(event);
    }

    void hoverMoveEvent(QGraphicsSceneHoverEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hoverMoveEvent(QGraphicsSceneHoverEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneHoverEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::hoverMoveEvent(event);
    }

    void PlastiQParentCall_hoverMoveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsTextItem::hoverMoveEvent(event);
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
        else return QGraphicsTextItem::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QGraphicsTextItem::inputMethodEvent(event);
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
        else return QGraphicsTextItem::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QGraphicsTextItem::inputMethodQuery(query);
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
        else return QGraphicsTextItem::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QGraphicsTextItem::keyPressEvent(event);
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
        else return QGraphicsTextItem::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QGraphicsTextItem::keyReleaseEvent(event);
    }

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsTextItem::mouseDoubleClickEvent(event);
    }

    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsTextItem::mouseMoveEvent(event);
    }

    void mousePressEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsTextItem::mousePressEvent(event);
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsTextItem::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsTextItem::mouseReleaseEvent(event);
    }

    bool sceneEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool sceneEvent(QEvent*)");
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
        else return QGraphicsTextItem::sceneEvent(event);
    }

    bool PlastiQParentCall_sceneEvent(QEvent *event) {
        return QGraphicsTextItem::sceneEvent(event);
    }

    bool event(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsTextItem::event(ev);
    }

    bool PlastiQParentCall_event(QEvent *ev) {
        return QGraphicsTextItem::event(ev);
    }

};

void PlastiQQGraphicsTextItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsTextItemWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsTextItemWrapper(); break;
        case 1: o = new PlastiQQGraphicsTextItemWrapper(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQGraphicsTextItemWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQGraphicsTextItemWrapper(stack[1].s_string,
                    reinterpret_cast<QGraphicsItem*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsTextItem *p = new PlastiQQGraphicsTextItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsTextItem *p = new PlastiQQGraphicsTextItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 40) {
            id -= 40;
            PlastiQQGraphicsObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsTextItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsTextItem*>(object->plastiq_data());

        switch(id) {
        case 0: o->adjustSize();
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QColor *_r = new QColor(o->defaultTextColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QTextDocument* _r = o->document();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTextDocument"; } break;
        case 3: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->openExternalLinks();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: o->setDefaultTextColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setDocument(reinterpret_cast<QTextDocument*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setHtml(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setOpenExternalLinks(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setPlainText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setTabChangesFocus(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setTextCursor((*reinterpret_cast< QTextCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setTextInteractionFlags(Qt::TextInteractionFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setTextWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r = o->tabChangesFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { /* COPY OBJECT */
            QTextCursor *_r = new QTextCursor(o->textCursor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { qint64 _r = o->textInteractionFlags(); // HACK for Qt::TextInteractionFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 18: { double _r = o->textWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 19: { QString _r = o->toHtml();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: { QString _r = o->toPlainText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QGraphicsSceneContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 22: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 23: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 25: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 26: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_hoverEnterEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_hoverLeaveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_hoverMoveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery(stack[1].s_int64)));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 36: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 37: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 38: if (isWrapper) ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 39: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsTextItemWrapper*)o)->PlastiQParentCall_sceneEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQGraphicsObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGraphicsTextItem *o = reinterpret_cast<QGraphicsTextItem*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGraphicsTextItem::linkActivated,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "linkActivated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QGraphicsTextItem::linkHovered,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "linkHovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsTextItem *o = reinterpret_cast<QGraphicsTextItem*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsTextItem *o = reinterpret_cast<QGraphicsTextItem*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsTextItem *o = reinterpret_cast<QGraphicsTextItem*>(object->plastiq_data());

        if(className == "QGraphicsObject") {
            stack[0].s_voidp = static_cast<QGraphicsObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsTextItem::~PlastiQQGraphicsTextItem() {
    QGraphicsTextItem* o = reinterpret_cast<QGraphicsTextItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
