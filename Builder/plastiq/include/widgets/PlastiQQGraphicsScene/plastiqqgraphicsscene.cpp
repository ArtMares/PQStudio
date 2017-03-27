#include "plastiqmethod.h"
#include "plastiqqgraphicsscene.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QGraphicsScene> 
#include <QGraphicsItem>
#include <QGraphicsWidget>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsRectItem>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsProxyWidget>
#include <QBrush>
#include <QGraphicsItemGroup>
#include <QFont>
#include <QVariant>
#include <QRectF>
#include <QPalette>
#include <QPainterPath>
#include <QStyle>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QPainter>
#include <QFocusEvent>
#include <QGraphicsSceneHelpEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QEvent>
#include <QObject>
#include <QList>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsScene::plastiqConstructors = {
    { "QGraphicsScene()", { "QGraphicsScene", "", "QGraphicsScene*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsScene(QObject*)", { "QGraphicsScene", "QObject*", "QGraphicsScene*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsScene(QRectF&)", { "QGraphicsScene", "QRectF&", "QGraphicsScene*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsScene(QRectF&,QObject*)", { "QGraphicsScene", "QRectF&,QObject*", "QGraphicsScene*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsScene(double,double,double,double)", { "QGraphicsScene", "qreal,qreal,qreal,qreal", "QGraphicsScene*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsScene(double,double,double,double,QObject*)", { "QGraphicsScene", "qreal,qreal,qreal,qreal,QObject*", "QGraphicsScene*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsScene::plastiqMethods = {
    { "activePanel()", { "activePanel", "", "QGraphicsItem*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "activeWindow()", { "activeWindow", "", "QGraphicsWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(QRectF&)", { "addEllipse", "QRectF&", "QGraphicsEllipseItem*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(QRectF&,QPen&)", { "addEllipse", "QRectF&,QPen&", "QGraphicsEllipseItem*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(QRectF&,QPen&,QBrush&)", { "addEllipse", "QRectF&,QPen&,QBrush&", "QGraphicsEllipseItem*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(double,double,double,double)", { "addEllipse", "qreal,qreal,qreal,qreal", "QGraphicsEllipseItem*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(double,double,double,double,QPen&)", { "addEllipse", "qreal,qreal,qreal,qreal,QPen&", "QGraphicsEllipseItem*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addEllipse(double,double,double,double,QPen&,QBrush&)", { "addEllipse", "qreal,qreal,qreal,qreal,QPen&,QBrush&", "QGraphicsEllipseItem*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QGraphicsItem*)", { "addItem", "QGraphicsItem*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLine(QLineF&)", { "addLine", "QLineF&", "QGraphicsLineItem*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLine(QLineF&,QPen&)", { "addLine", "QLineF&,QPen&", "QGraphicsLineItem*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLine(double,double,double,double)", { "addLine", "qreal,qreal,qreal,qreal", "QGraphicsLineItem*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addLine(double,double,double,double,QPen&)", { "addLine", "qreal,qreal,qreal,qreal,QPen&", "QGraphicsLineItem*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPath(QPainterPath&)", { "addPath", "QPainterPath&", "QGraphicsPathItem*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPath(QPainterPath&,QPen&)", { "addPath", "QPainterPath&,QPen&", "QGraphicsPathItem*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPath(QPainterPath&,QPen&,QBrush&)", { "addPath", "QPainterPath&,QPen&,QBrush&", "QGraphicsPathItem*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPixmap(QPixmap&)", { "addPixmap", "QPixmap&", "QGraphicsPixmapItem*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPolygon(QPolygonF&)", { "addPolygon", "QPolygonF&", "QGraphicsPolygonItem*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPolygon(QPolygonF&,QPen&)", { "addPolygon", "QPolygonF&,QPen&", "QGraphicsPolygonItem*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPolygon(QPolygonF&,QPen&,QBrush&)", { "addPolygon", "QPolygonF&,QPen&,QBrush&", "QGraphicsPolygonItem*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(QRectF&)", { "addRect", "QRectF&", "QGraphicsRectItem*", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(QRectF&,QPen&)", { "addRect", "QRectF&,QPen&", "QGraphicsRectItem*", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(QRectF&,QPen&,QBrush&)", { "addRect", "QRectF&,QPen&,QBrush&", "QGraphicsRectItem*", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(double,double,double,double)", { "addRect", "qreal,qreal,qreal,qreal", "QGraphicsRectItem*", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(double,double,double,double,QPen&)", { "addRect", "qreal,qreal,qreal,qreal,QPen&", "QGraphicsRectItem*", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addRect(double,double,double,double,QPen&,QBrush&)", { "addRect", "qreal,qreal,qreal,qreal,QPen&,QBrush&", "QGraphicsRectItem*", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSimpleText(QString)", { "addSimpleText", "QString&", "QGraphicsSimpleTextItem*", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSimpleText(QString,QFont&)", { "addSimpleText", "QString&,QFont&", "QGraphicsSimpleTextItem*", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addText(QString)", { "addText", "QString&", "QGraphicsTextItem*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addText(QString,QFont&)", { "addText", "QString&,QFont&", "QGraphicsTextItem*", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "QGraphicsProxyWidget*", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,enum)", { "addWidget", "QWidget*,Qt::WindowFlags", "QGraphicsProxyWidget*", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundBrush()", { "backgroundBrush", "", "QBrush", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bspTreeDepth()", { "bspTreeDepth", "", "int", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearFocus()", { "clearFocus", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createItemGroup(QList<QGraphicsItem*>&)", { "createItemGroup", "QList<QGraphicsItem*>&", "QGraphicsItemGroup*", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "destroyItemGroup(QGraphicsItemGroup*)", { "destroyItemGroup", "QGraphicsItemGroup*", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusItem()", { "focusItem", "", "QGraphicsItem*", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foregroundBrush()", { "foregroundBrush", "", "QBrush", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFocus()", { "hasFocus", "", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "qreal", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputMethodQuery(enum)", { "inputMethodQuery", "Qt::InputMethodQuery", "QVariant", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invalidate(double,double,double,double)", { "invalidate", "qreal,qreal,qreal,qreal", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invalidate(double,double,double,double,enum)", { "invalidate", "qreal,qreal,qreal,qreal,SceneLayers", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(QPointF&,QTransform&)", { "itemAt", "QPointF&,QTransform&", "QGraphicsItem*", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(double,double,QTransform&)", { "itemAt", "qreal,qreal,QTransform&", "QGraphicsItem*", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemIndexMethod()", { "itemIndexMethod", "", "ItemIndexMethod", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemsBoundingRect()", { "itemsBoundingRect", "", "QRectF", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumRenderSize()", { "minimumRenderSize", "", "qreal", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mouseGrabberItem()", { "mouseGrabberItem", "", "QGraphicsItem*", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "palette()", { "palette", "", "QPalette", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItem(QGraphicsItem*)", { "removeItem", "QGraphicsItem*", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*)", { "render", "QPainter*", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QRectF&)", { "render", "QPainter*,QRectF&", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QRectF&,QRectF&)", { "render", "QPainter*,QRectF&,QRectF&", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "render(QPainter*,QRectF&,QRectF&,enum)", { "render", "QPainter*,QRectF&,QRectF&,Qt::AspectRatioMode", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sceneRect()", { "sceneRect", "", "QRectF", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionArea()", { "selectionArea", "", "QPainterPath", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sendEvent(QGraphicsItem*,QEvent*)", { "sendEvent", "QGraphicsItem*,QEvent*", "bool", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActivePanel(QGraphicsItem*)", { "setActivePanel", "QGraphicsItem*", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActiveWindow(QGraphicsWidget*)", { "setActiveWindow", "QGraphicsWidget*", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundBrush(QBrush&)", { "setBackgroundBrush", "QBrush&", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBspTreeDepth(int)", { "setBspTreeDepth", "int", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocus()", { "setFocus", "", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocus(enum)", { "setFocus", "Qt::FocusReason", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusItem(QGraphicsItem*)", { "setFocusItem", "QGraphicsItem*", "void", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusItem(QGraphicsItem*,enum)", { "setFocusItem", "QGraphicsItem*,Qt::FocusReason", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForegroundBrush(QBrush&)", { "setForegroundBrush", "QBrush&", "void", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemIndexMethod(enum)", { "setItemIndexMethod", "ItemIndexMethod", "void", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumRenderSize(double)", { "setMinimumRenderSize", "qreal", "void", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPalette(QPalette&)", { "setPalette", "QPalette&", "void", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSceneRect(QRectF&)", { "setSceneRect", "QRectF&", "void", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSceneRect(double,double,double,double)", { "setSceneRect", "qreal,qreal,qreal,qreal", "void", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionArea(QPainterPath&,QTransform&)", { "setSelectionArea", "QPainterPath&,QTransform&", "void", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionArea(QPainterPath&)", { "setSelectionArea", "QPainterPath&", "void", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionArea(QPainterPath&,enum)", { "setSelectionArea", "QPainterPath&,Qt::ItemSelectionMode", "void", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionArea(QPainterPath&,enum,QTransform&)", { "setSelectionArea", "QPainterPath&,Qt::ItemSelectionMode,QTransform&", "void", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionArea(QPainterPath&,enum,enum)", { "setSelectionArea", "QPainterPath&,Qt::ItemSelectionOperation,Qt::ItemSelectionMode", "void", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionArea(QPainterPath&,enum,enum,QTransform&)", { "setSelectionArea", "QPainterPath&,Qt::ItemSelectionOperation,Qt::ItemSelectionMode,QTransform&", "void", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStickyFocus(bool)", { "setStickyFocus", "bool", "void", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyle(QStyle*)", { "setStyle", "QStyle*", "void", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stickyFocus()", { "stickyFocus", "", "bool", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "QStyle*", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update(double,double,double,double)", { "update", "qreal,qreal,qreal,qreal", "void", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contextMenuEvent(QGraphicsSceneContextMenuEvent*)", { "contextMenuEvent", "QGraphicsSceneContextMenuEvent*", "void", 88, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QGraphicsSceneDragDropEvent*)", { "dragEnterEvent", "QGraphicsSceneDragDropEvent*", "void", 89, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QGraphicsSceneDragDropEvent*)", { "dragLeaveEvent", "QGraphicsSceneDragDropEvent*", "void", 90, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QGraphicsSceneDragDropEvent*)", { "dragMoveEvent", "QGraphicsSceneDragDropEvent*", "void", 91, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawBackground(QPainter*,QRectF&)", { "drawBackground", "QPainter*,QRectF&", "void", 92, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "drawForeground(QPainter*,QRectF&)", { "drawForeground", "QPainter*,QRectF&", "void", 93, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QGraphicsSceneDragDropEvent*)", { "dropEvent", "QGraphicsSceneDragDropEvent*", "void", 94, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 95, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 96, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "helpEvent(QGraphicsSceneHelpEvent*)", { "helpEvent", "QGraphicsSceneHelpEvent*", "void", 97, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 98, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 99, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 100, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)", { "mouseDoubleClickEvent", "QGraphicsSceneMouseEvent*", "void", 101, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QGraphicsSceneMouseEvent*)", { "mouseMoveEvent", "QGraphicsSceneMouseEvent*", "void", 102, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QGraphicsSceneMouseEvent*)", { "mousePressEvent", "QGraphicsSceneMouseEvent*", "void", 103, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QGraphicsSceneMouseEvent*)", { "mouseReleaseEvent", "QGraphicsSceneMouseEvent*", "void", 104, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QGraphicsSceneWheelEvent*)", { "wheelEvent", "QGraphicsSceneWheelEvent*", "void", 105, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 106, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 107, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "advance()", { "advance", "", "void", 108, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "clear()", { "clear", "", "void", 109, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "clearSelection()", { "clearSelection", "", "void", 110, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "invalidate()", { "invalidate", "", "void", 111, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "invalidate(QRectF&)", { "invalidate", "QRectF&", "void", 112, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "invalidate(QRectF&,enum)", { "invalidate", "QRectF&,SceneLayers", "void", 113, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "update()", { "update", "", "void", 114, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "update(QRectF&)", { "update", "QRectF&", "void", 115, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsScene::plastiqSignals = {
    { "changed(QList<QRectF>&)", { "changed", "QList<QRectF>&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusItemChanged(QGraphicsItem*,QGraphicsItem*,enum)", { "focusItemChanged", "QGraphicsItem*,QGraphicsItem*,Qt::FocusReason", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sceneRectChanged(QRectF&)", { "sceneRectChanged", "QRectF&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsScene::plastiqProperties = {
    { "backgroundBrush", { "backgroundBrush", "QBrush", "setBackgroundBrush", "backgroundBrush" } },
    { "bspTreeDepth", { "bspTreeDepth", "int", "setBspTreeDepth", "bspTreeDepth" } },
    { "font", { "font", "QFont", "setFont", "font" } },
    { "foregroundBrush", { "foregroundBrush", "QBrush", "setForegroundBrush", "foregroundBrush" } },
    { "itemIndexMethod", { "itemIndexMethod", "long", "setItemIndexMethod", "itemIndexMethod" } },
    { "minimumRenderSize", { "minimumRenderSize", "qreal", "setMinimumRenderSize", "minimumRenderSize" } },
    { "palette", { "palette", "QPalette", "setPalette", "palette" } },
    { "sceneRect", { "sceneRect", "QRectF", "setSceneRect", "sceneRect" } },
    { "stickyFocus", { "stickyFocus", "bool", "setStickyFocus", "stickyFocus" } },

};

QHash<QByteArray, long> PlastiQQGraphicsScene::plastiqConstants = {

    /* QGraphicsScene::ItemIndexMethod */
   { "BspTreeIndex", QGraphicsScene::BspTreeIndex },
   { "NoIndex", QGraphicsScene::NoIndex },

    /* QGraphicsScene::SceneLayer */
   { "ItemLayer", QGraphicsScene::ItemLayer },
   { "BackgroundLayer", QGraphicsScene::BackgroundLayer },
   { "ForegroundLayer", QGraphicsScene::ForegroundLayer },
   { "AllLayers", QGraphicsScene::AllLayers },

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsScene::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsScene::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsScene::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QGraphicsScene", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsScene::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsSceneWrapper : public QGraphicsScene {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGraphicsSceneWrapper(QObject *parent = Q_NULLPTR)
         : QGraphicsScene(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQGraphicsSceneWrapper(const QRectF &sceneRect, QObject *parent = Q_NULLPTR)
         : QGraphicsScene(sceneRect,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQGraphicsSceneWrapper(qreal x, qreal y, qreal width, qreal height, QObject *parent = Q_NULLPTR)
         : QGraphicsScene(x,y,width,height,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QGraphicsScene::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QGraphicsScene::inputMethodQuery(query);
    }

    void contextMenuEvent(QGraphicsSceneContextMenuEvent *contextMenuEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QGraphicsSceneContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(contextMenuEvent);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::contextMenuEvent(contextMenuEvent);
    }

    void PlastiQParentCall_contextMenuEvent(QGraphicsSceneContextMenuEvent *contextMenuEvent) {
        return QGraphicsScene::contextMenuEvent(contextMenuEvent);
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
        else return QGraphicsScene::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsScene::dragEnterEvent(event);
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
        else return QGraphicsScene::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsScene::dragLeaveEvent(event);
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
        else return QGraphicsScene::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsScene::dragMoveEvent(event);
    }

    void drawBackground(QPainter *painter, const QRectF &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawBackground(QPainter*,const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRectF");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::drawBackground(painter,rect);
    }

    void PlastiQParentCall_drawBackground(QPainter *painter, const QRectF &rect) {
        return QGraphicsScene::drawBackground(painter,rect);
    }

    void drawForeground(QPainter *painter, const QRectF &rect) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawForeground(QPainter*,const QRectF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRectF(rect) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRectF");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::drawForeground(painter,rect);
    }

    void PlastiQParentCall_drawForeground(QPainter *painter, const QRectF &rect) {
        return QGraphicsScene::drawForeground(painter,rect);
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
        else return QGraphicsScene::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsScene::dropEvent(event);
    }

    void focusInEvent(QFocusEvent *focusEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(focusEvent);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::focusInEvent(focusEvent);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *focusEvent) {
        return QGraphicsScene::focusInEvent(focusEvent);
    }

    void focusOutEvent(QFocusEvent *focusEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(focusEvent);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::focusOutEvent(focusEvent);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *focusEvent) {
        return QGraphicsScene::focusOutEvent(focusEvent);
    }

    void helpEvent(QGraphicsSceneHelpEvent *helpEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void helpEvent(QGraphicsSceneHelpEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(helpEvent);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneHelpEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::helpEvent(helpEvent);
    }

    void PlastiQParentCall_helpEvent(QGraphicsSceneHelpEvent *helpEvent) {
        return QGraphicsScene::helpEvent(helpEvent);
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
        else return QGraphicsScene::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QGraphicsScene::inputMethodEvent(event);
    }

    void keyPressEvent(QKeyEvent *keyEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(keyEvent);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::keyPressEvent(keyEvent);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *keyEvent) {
        return QGraphicsScene::keyPressEvent(keyEvent);
    }

    void keyReleaseEvent(QKeyEvent *keyEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(keyEvent);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::keyReleaseEvent(keyEvent);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *keyEvent) {
        return QGraphicsScene::keyReleaseEvent(keyEvent);
    }

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::mouseDoubleClickEvent(mouseEvent);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QGraphicsSceneMouseEvent *mouseEvent) {
        return QGraphicsScene::mouseDoubleClickEvent(mouseEvent);
    }

    void mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::mouseMoveEvent(mouseEvent);
    }

    void PlastiQParentCall_mouseMoveEvent(QGraphicsSceneMouseEvent *mouseEvent) {
        return QGraphicsScene::mouseMoveEvent(mouseEvent);
    }

    void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::mousePressEvent(mouseEvent);
    }

    void PlastiQParentCall_mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent) {
        return QGraphicsScene::mousePressEvent(mouseEvent);
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QGraphicsSceneMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::mouseReleaseEvent(mouseEvent);
    }

    void PlastiQParentCall_mouseReleaseEvent(QGraphicsSceneMouseEvent *mouseEvent) {
        return QGraphicsScene::mouseReleaseEvent(mouseEvent);
    }

    void wheelEvent(QGraphicsSceneWheelEvent *wheelEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QGraphicsSceneWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(wheelEvent);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::wheelEvent(wheelEvent);
    }

    void PlastiQParentCall_wheelEvent(QGraphicsSceneWheelEvent *wheelEvent) {
        return QGraphicsScene::wheelEvent(wheelEvent);
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
        else return QGraphicsScene::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QGraphicsScene::event(event);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsScene::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QGraphicsScene::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsScene::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QGraphicsScene::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QGraphicsScene::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QGraphicsScene::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QGraphicsScene::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QGraphicsScene::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsScene::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QGraphicsScene::timerEvent(event);
    }

};

void PlastiQQGraphicsScene::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsSceneWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGraphicsSceneWrapper(); break;
        case 1: o = new PlastiQQGraphicsSceneWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQGraphicsSceneWrapper((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))); break;
        case 3: o = new PlastiQQGraphicsSceneWrapper((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 4: o = new PlastiQQGraphicsSceneWrapper(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 5: o = new PlastiQQGraphicsSceneWrapper(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    reinterpret_cast<QObject*>(stack[5].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsScene *p = new PlastiQQGraphicsScene();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsScene *p = new PlastiQQGraphicsScene();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 116) {
            id -= 116;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsScene *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsScene*>(object->plastiq_data());

        switch(id) {
        case 0: { QGraphicsItem* _r = o->activePanel();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 1: { QGraphicsWidget* _r = o->activeWindow();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsWidget"; } break;
        case 2: { QGraphicsEllipseItem* _r = o->addEllipse((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsEllipseItem"; } break;
        case 3: { QGraphicsEllipseItem* _r = o->addEllipse((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsEllipseItem"; } break;
        case 4: { QGraphicsEllipseItem* _r = o->addEllipse((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsEllipseItem"; } break;
        case 5: { QGraphicsEllipseItem* _r = o->addEllipse(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsEllipseItem"; } break;
        case 6: { QGraphicsEllipseItem* _r = o->addEllipse(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    (*reinterpret_cast< QPen(*) >(stack[5].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsEllipseItem"; } break;
        case 7: { QGraphicsEllipseItem* _r = o->addEllipse(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    (*reinterpret_cast< QPen(*) >(stack[5].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[6].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsEllipseItem"; } break;
        case 8: o->addItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: { QGraphicsLineItem* _r = o->addLine((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLineItem"; } break;
        case 10: { QGraphicsLineItem* _r = o->addLine((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLineItem"; } break;
        case 11: { QGraphicsLineItem* _r = o->addLine(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLineItem"; } break;
        case 12: { QGraphicsLineItem* _r = o->addLine(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    (*reinterpret_cast< QPen(*) >(stack[5].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsLineItem"; } break;
        case 13: { QGraphicsPathItem* _r = o->addPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsPathItem"; } break;
        case 14: { QGraphicsPathItem* _r = o->addPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsPathItem"; } break;
        case 15: { QGraphicsPathItem* _r = o->addPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsPathItem"; } break;
        case 16: { QGraphicsPixmapItem* _r = o->addPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsPixmapItem"; } break;
        case 17: { QGraphicsPolygonItem* _r = o->addPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsPolygonItem"; } break;
        case 18: { QGraphicsPolygonItem* _r = o->addPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsPolygonItem"; } break;
        case 19: { QGraphicsPolygonItem* _r = o->addPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsPolygonItem"; } break;
        case 20: { QGraphicsRectItem* _r = o->addRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsRectItem"; } break;
        case 21: { QGraphicsRectItem* _r = o->addRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsRectItem"; } break;
        case 22: { QGraphicsRectItem* _r = o->addRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsRectItem"; } break;
        case 23: { QGraphicsRectItem* _r = o->addRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsRectItem"; } break;
        case 24: { QGraphicsRectItem* _r = o->addRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    (*reinterpret_cast< QPen(*) >(stack[5].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsRectItem"; } break;
        case 25: { QGraphicsRectItem* _r = o->addRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    (*reinterpret_cast< QPen(*) >(stack[5].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[6].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsRectItem"; } break;
        case 26: { QGraphicsSimpleTextItem* _r = o->addSimpleText(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsSimpleTextItem"; } break;
        case 27: { QGraphicsSimpleTextItem* _r = o->addSimpleText(stack[1].s_string,
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsSimpleTextItem"; } break;
        case 28: { QGraphicsTextItem* _r = o->addText(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsTextItem"; } break;
        case 29: { QGraphicsTextItem* _r = o->addText(stack[1].s_string,
                    (*reinterpret_cast< QFont(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsTextItem"; } break;
        case 30: { QGraphicsProxyWidget* _r = o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsProxyWidget"; } break;
        case 31: { QGraphicsProxyWidget* _r = o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsProxyWidget"; } break;
        case 32: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->backgroundBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { int _r = o->bspTreeDepth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 34: o->clearFocus();
                stack[0].type = PlastiQ::Void; break;
        case 35: { QGraphicsItemGroup* _r = o->createItemGroup((*reinterpret_cast< QList<QGraphicsItem*>(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItemGroup"; } break;
        case 36: o->destroyItemGroup(reinterpret_cast<QGraphicsItemGroup*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 37: { QGraphicsItem* _r = o->focusItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 38: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->foregroundBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { bool _r = o->hasFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { double _r = o->height();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 42: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery(stack[1].s_int64)));
                else _r = new QVariant(o->inputMethodQuery(Qt::InputMethodQuery(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: o->invalidate(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 44: o->invalidate(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    QGraphicsScene::SceneLayers(stack[5].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 45: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 46: { QGraphicsItem* _r = o->itemAt((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[2].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 47: { QGraphicsItem* _r = o->itemAt(stack[1].s_double,
                    stack[2].s_double,
                    (*reinterpret_cast< QTransform(*) >(stack[3].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 48: { qint64 _r = o->itemIndexMethod(); // HACK for ItemIndexMethod 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 49: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->itemsBoundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 50: { double _r = o->minimumRenderSize();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 51: { QGraphicsItem* _r = o->mouseGrabberItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 52: { /* COPY OBJECT */
            QPalette *_r = new QPalette(o->palette());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 53: o->removeItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 54: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 55: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 56: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 57: o->render(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)),
                    Qt::AspectRatioMode(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 58: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->sceneRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->selectionArea());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 60: { bool _r = o->sendEvent(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 61: o->setActivePanel(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 62: o->setActiveWindow(reinterpret_cast<QGraphicsWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 63: o->setBackgroundBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 64: o->setBspTreeDepth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 65: o->setFocus();
                stack[0].type = PlastiQ::Void; break;
        case 66: o->setFocus(Qt::FocusReason(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 67: o->setFocusItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 68: o->setFocusItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp),
                    Qt::FocusReason(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 69: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 70: o->setForegroundBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 71: o->setItemIndexMethod(QGraphicsScene::ItemIndexMethod(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 72: o->setMinimumRenderSize(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 73: o->setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 74: o->setSceneRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 75: o->setSceneRect(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 76: o->setSelectionArea((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QTransform(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 77: o->setSelectionArea((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 78: o->setSelectionArea((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    Qt::ItemSelectionMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 79: o->setSelectionArea((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    Qt::ItemSelectionMode(stack[2].s_int64),
                    (*reinterpret_cast< QTransform(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 80: o->setSelectionArea((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    Qt::ItemSelectionOperation(stack[2].s_int64),
                    Qt::ItemSelectionMode(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 81: o->setSelectionArea((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    Qt::ItemSelectionOperation(stack[2].s_int64),
                    Qt::ItemSelectionMode(stack[3].s_int64),
                    (*reinterpret_cast< QTransform(*) >(stack[4].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 82: o->setStickyFocus(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 83: o->setStyle(reinterpret_cast<QStyle*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 84: { bool _r = o->stickyFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 85: { QStyle* _r = o->style();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 86: o->update(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 87: { double _r = o->width();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 88: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QGraphicsSceneContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 89: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 90: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 91: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 92: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_drawBackground(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 93: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_drawForeground(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 94: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 95: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 96: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 97: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_helpEvent(reinterpret_cast<QGraphicsSceneHelpEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 98: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 99: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 100: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 101: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 102: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 103: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 104: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 105: if (isWrapper) ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QGraphicsSceneWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 106: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 107: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsSceneWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 108: o->advance();
                stack[0].type = PlastiQ::Void; break;
        case 109: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 110: o->clearSelection();
                stack[0].type = PlastiQ::Void; break;
        case 111: o->invalidate();
                stack[0].type = PlastiQ::Void; break;
        case 112: o->invalidate((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 113: o->invalidate((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    QGraphicsScene::SceneLayers(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 114: o->update();
                stack[0].type = PlastiQ::Void; break;
        case 115: o->update((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGraphicsScene *o = reinterpret_cast<QGraphicsScene*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGraphicsScene::changed,
            [=](const QList<QRectF>& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&const_cast<QList<QRectF>&>(arg0));
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QRectF>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "changed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QGraphicsScene::focusItemChanged,
            [=](QGraphicsItem* arg0, QGraphicsItem* arg1, Qt::FocusReason arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QGraphicsItem";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QGraphicsItem";
                    cstack[2].s_int64 = arg2;
                    cstack[2].type = PlastiQ::Enum; cstack[2].name = "Qt::FocusReason";
                PlastiQ_activate(sender, "focusItemChanged", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QGraphicsScene::sceneRectChanged,
            [=](const QRectF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QRectF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRectF";
                PlastiQ_activate(sender, "sceneRectChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QGraphicsScene::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsScene *o = reinterpret_cast<QGraphicsScene*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsScene *o = reinterpret_cast<QGraphicsScene*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsScene *o = reinterpret_cast<QGraphicsScene*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsScene::~PlastiQQGraphicsScene() {
    QGraphicsScene* o = reinterpret_cast<QGraphicsScene*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
