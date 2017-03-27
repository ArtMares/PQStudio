#include "plastiqmethod.h"
#include "plastiqqgraphicsitem.h"

#include <QGraphicsItem> 
#include <QRectF>
#include <QRegion>
#include <QPainterPath>
#include <QPointF>
#include <QCursor>
#include <QVariant>
#include <QTransform>
#include <QGraphicsEffect>
#include <QGraphicsItemGroup>
#include <QPolygonF>
#include <QGraphicsObject>
#include <QGraphicsWidget>
#include <QGraphicsScene>
#include <QString>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QFocusEvent>
#include <QGraphicsSceneHoverEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QGraphicsSceneMouseEvent>
#include <QEvent>
#include <QGraphicsSceneWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsItem::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsItem::plastiqMethods = {
    { "acceptDrops()", { "acceptDrops", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "acceptHoverEvents()", { "acceptHoverEvents", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "acceptTouchEvents()", { "acceptTouchEvents", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "acceptedMouseButtons()", { "acceptedMouseButtons", "", "Qt::MouseButtons", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "advance(int)", { "advance", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect()", { "boundingRect", "", "QRectF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRegion(QTransform&)", { "boundingRegion", "QTransform&", "QRegion", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRegionGranularity()", { "boundingRegionGranularity", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cacheMode()", { "cacheMode", "", "CacheMode", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childrenBoundingRect()", { "childrenBoundingRect", "", "QRectF", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearFocus()", { "clearFocus", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipPath()", { "clipPath", "", "QPainterPath", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "collidesWithItem(const QGraphicsItem*)", { "collidesWithItem", "QGraphicsItem*", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "collidesWithItem(const QGraphicsItem*,enum)", { "collidesWithItem", "QGraphicsItem*,Qt::ItemSelectionMode", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "collidesWithPath(QPainterPath&)", { "collidesWithPath", "QPainterPath&", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "collidesWithPath(QPainterPath&,enum)", { "collidesWithPath", "QPainterPath&,Qt::ItemSelectionMode", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "commonAncestorItem(const QGraphicsItem*)", { "commonAncestorItem", "QGraphicsItem*", "QGraphicsItem*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QPointF&)", { "contains", "QPointF&", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursor()", { "cursor", "", "QCursor", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data(int)", { "data", "int", "QVariant", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deviceTransform(QTransform&)", { "deviceTransform", "QTransform&", "QTransform", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "effectiveOpacity()", { "effectiveOpacity", "", "qreal", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible()", { "ensureVisible", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(QRectF&)", { "ensureVisible", "QRectF&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(QRectF&,int)", { "ensureVisible", "QRectF&,int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(QRectF&,int,int)", { "ensureVisible", "QRectF&,int,int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(double,double,double,double)", { "ensureVisible", "qreal,qreal,qreal,qreal", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(double,double,double,double,int)", { "ensureVisible", "qreal,qreal,qreal,qreal,int", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureVisible(double,double,double,double,int,int)", { "ensureVisible", "qreal,qreal,qreal,qreal,int,int", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filtersChildEvents()", { "filtersChildEvents", "", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "GraphicsItemFlags", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusItem()", { "focusItem", "", "QGraphicsItem*", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusProxy()", { "focusProxy", "", "QGraphicsItem*", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabKeyboard()", { "grabKeyboard", "", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabMouse()", { "grabMouse", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "graphicsEffect()", { "graphicsEffect", "", "QGraphicsEffect*", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "group()", { "group", "", "QGraphicsItemGroup*", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasCursor()", { "hasCursor", "", "bool", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasFocus()", { "hasFocus", "", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hide()", { "hide", "", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputMethodHints()", { "inputMethodHints", "", "Qt::InputMethodHints", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "installSceneEventFilter(QGraphicsItem*)", { "installSceneEventFilter", "QGraphicsItem*", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAncestorOf(const QGraphicsItem*)", { "isAncestorOf", "QGraphicsItem*", "bool", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBlockedByModalPanel()", { "isBlockedByModalPanel", "", "bool", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBlockedByModalPanel(QGraphicsItem**)", { "isBlockedByModalPanel", "QGraphicsItem**", "bool", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isClipped()", { "isClipped", "", "bool", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isObscured()", { "isObscured", "", "bool", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isObscured(QRectF&)", { "isObscured", "QRectF&", "bool", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isObscured(double,double,double,double)", { "isObscured", "qreal,qreal,qreal,qreal", "bool", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isObscuredBy(const QGraphicsItem*)", { "isObscuredBy", "QGraphicsItem*", "bool", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPanel()", { "isPanel", "", "bool", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSelected()", { "isSelected", "", "bool", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isUnderMouse()", { "isUnderMouse", "", "bool", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisibleTo(const QGraphicsItem*)", { "isVisibleTo", "QGraphicsItem*", "bool", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWidget()", { "isWidget", "", "bool", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWindow()", { "isWindow", "", "bool", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemTransform(const QGraphicsItem*)", { "itemTransform", "QGraphicsItem*", "QTransform", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemTransform(const QGraphicsItem*,bool*)", { "itemTransform", "QGraphicsItem*,bool*", "QTransform", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromItem(const QGraphicsItem*,QPointF&)", { "mapFromItem", "QGraphicsItem*,QPointF&", "QPointF", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromItem(const QGraphicsItem*,QRectF&)", { "mapFromItem", "QGraphicsItem*,QRectF&", "QPolygonF", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromItem(const QGraphicsItem*,QPolygonF&)", { "mapFromItem", "QGraphicsItem*,QPolygonF&", "QPolygonF", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromItem(const QGraphicsItem*,QPainterPath&)", { "mapFromItem", "QGraphicsItem*,QPainterPath&", "QPainterPath", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromItem(const QGraphicsItem*,double,double)", { "mapFromItem", "QGraphicsItem*,qreal,qreal", "QPointF", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromItem(const QGraphicsItem*,double,double,double,double)", { "mapFromItem", "QGraphicsItem*,qreal,qreal,qreal,qreal", "QPolygonF", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromParent(QPointF&)", { "mapFromParent", "QPointF&", "QPointF", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromParent(QRectF&)", { "mapFromParent", "QRectF&", "QPolygonF", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromParent(QPolygonF&)", { "mapFromParent", "QPolygonF&", "QPolygonF", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromParent(QPainterPath&)", { "mapFromParent", "QPainterPath&", "QPainterPath", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromParent(double,double)", { "mapFromParent", "qreal,qreal", "QPointF", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromParent(double,double,double,double)", { "mapFromParent", "qreal,qreal,qreal,qreal", "QPolygonF", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QPointF&)", { "mapFromScene", "QPointF&", "QPointF", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QRectF&)", { "mapFromScene", "QRectF&", "QPolygonF", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QPolygonF&)", { "mapFromScene", "QPolygonF&", "QPolygonF", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(QPainterPath&)", { "mapFromScene", "QPainterPath&", "QPainterPath", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(double,double)", { "mapFromScene", "qreal,qreal", "QPointF", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapFromScene(double,double,double,double)", { "mapFromScene", "qreal,qreal,qreal,qreal", "QPolygonF", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectFromItem(const QGraphicsItem*,QRectF&)", { "mapRectFromItem", "QGraphicsItem*,QRectF&", "QRectF", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectFromItem(const QGraphicsItem*,double,double,double,double)", { "mapRectFromItem", "QGraphicsItem*,qreal,qreal,qreal,qreal", "QRectF", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectFromParent(QRectF&)", { "mapRectFromParent", "QRectF&", "QRectF", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectFromParent(double,double,double,double)", { "mapRectFromParent", "qreal,qreal,qreal,qreal", "QRectF", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectFromScene(QRectF&)", { "mapRectFromScene", "QRectF&", "QRectF", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectFromScene(double,double,double,double)", { "mapRectFromScene", "qreal,qreal,qreal,qreal", "QRectF", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectToItem(const QGraphicsItem*,QRectF&)", { "mapRectToItem", "QGraphicsItem*,QRectF&", "QRectF", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectToItem(const QGraphicsItem*,double,double,double,double)", { "mapRectToItem", "QGraphicsItem*,qreal,qreal,qreal,qreal", "QRectF", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectToParent(QRectF&)", { "mapRectToParent", "QRectF&", "QRectF", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectToParent(double,double,double,double)", { "mapRectToParent", "qreal,qreal,qreal,qreal", "QRectF", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectToScene(QRectF&)", { "mapRectToScene", "QRectF&", "QRectF", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapRectToScene(double,double,double,double)", { "mapRectToScene", "qreal,qreal,qreal,qreal", "QRectF", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToItem(const QGraphicsItem*,QPointF&)", { "mapToItem", "QGraphicsItem*,QPointF&", "QPointF", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToItem(const QGraphicsItem*,QRectF&)", { "mapToItem", "QGraphicsItem*,QRectF&", "QPolygonF", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToItem(const QGraphicsItem*,QPolygonF&)", { "mapToItem", "QGraphicsItem*,QPolygonF&", "QPolygonF", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToItem(const QGraphicsItem*,QPainterPath&)", { "mapToItem", "QGraphicsItem*,QPainterPath&", "QPainterPath", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToItem(const QGraphicsItem*,double,double)", { "mapToItem", "QGraphicsItem*,qreal,qreal", "QPointF", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToItem(const QGraphicsItem*,double,double,double,double)", { "mapToItem", "QGraphicsItem*,qreal,qreal,qreal,qreal", "QPolygonF", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToParent(QPointF&)", { "mapToParent", "QPointF&", "QPointF", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToParent(QRectF&)", { "mapToParent", "QRectF&", "QPolygonF", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToParent(QPolygonF&)", { "mapToParent", "QPolygonF&", "QPolygonF", 99, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToParent(QPainterPath&)", { "mapToParent", "QPainterPath&", "QPainterPath", 100, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToParent(double,double)", { "mapToParent", "qreal,qreal", "QPointF", 101, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToParent(double,double,double,double)", { "mapToParent", "qreal,qreal,qreal,qreal", "QPolygonF", 102, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QPointF&)", { "mapToScene", "QPointF&", "QPointF", 103, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QRectF&)", { "mapToScene", "QRectF&", "QPolygonF", 104, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QPolygonF&)", { "mapToScene", "QPolygonF&", "QPolygonF", 105, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(QPainterPath&)", { "mapToScene", "QPainterPath&", "QPainterPath", 106, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(double,double)", { "mapToScene", "qreal,qreal", "QPointF", 107, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToScene(double,double,double,double)", { "mapToScene", "qreal,qreal,qreal,qreal", "QPolygonF", 108, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveBy(double,double)", { "moveBy", "qreal,qreal", "void", 109, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opacity()", { "opacity", "", "qreal", 110, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opaqueArea()", { "opaqueArea", "", "QPainterPath", 111, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,const QStyleOptionGraphicsItem*)", { "paint", "QPainter*,QStyleOptionGraphicsItem*", "void", 112, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paint(QPainter*,const QStyleOptionGraphicsItem*,QWidget*)", { "paint", "QPainter*,QStyleOptionGraphicsItem*,QWidget*", "void", 113, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "panel()", { "panel", "", "QGraphicsItem*", 114, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "panelModality()", { "panelModality", "", "PanelModality", 115, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentItem()", { "parentItem", "", "QGraphicsItem*", 116, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentObject()", { "parentObject", "", "QGraphicsObject*", 117, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentWidget()", { "parentWidget", "", "QGraphicsWidget*", 118, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPointF", 119, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeSceneEventFilter(QGraphicsItem*)", { "removeSceneEventFilter", "QGraphicsItem*", "void", 120, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetTransform()", { "resetTransform", "", "void", 121, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotation()", { "rotation", "", "qreal", 122, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale()", { "scale", "", "qreal", 123, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scene()", { "scene", "", "QGraphicsScene*", 124, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sceneBoundingRect()", { "sceneBoundingRect", "", "QRectF", 125, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scenePos()", { "scenePos", "", "QPointF", 126, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sceneTransform()", { "sceneTransform", "", "QTransform", 127, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(double,double)", { "scroll", "qreal,qreal", "void", 128, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(double,double,QRectF&)", { "scroll", "qreal,qreal,QRectF&", "void", 129, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceptDrops(bool)", { "setAcceptDrops", "bool", "void", 130, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceptHoverEvents(bool)", { "setAcceptHoverEvents", "bool", "void", 131, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceptTouchEvents(bool)", { "setAcceptTouchEvents", "bool", "void", 132, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceptedMouseButtons(enum)", { "setAcceptedMouseButtons", "Qt::MouseButtons", "void", 133, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActive(bool)", { "setActive", "bool", "void", 134, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBoundingRegionGranularity(double)", { "setBoundingRegionGranularity", "qreal", "void", 135, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCacheMode(enum)", { "setCacheMode", "CacheMode", "void", 136, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCacheMode(enum,QSize&)", { "setCacheMode", "CacheMode,QSize&", "void", 137, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursor(QCursor&)", { "setCursor", "QCursor&", "void", 138, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(int,QVariant)", { "setData", "int,QVariant&", "void", 139, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 140, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFiltersChildEvents(bool)", { "setFiltersChildEvents", "bool", "void", 141, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlag(enum)", { "setFlag", "GraphicsItemFlag", "void", 142, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlag(enum,bool)", { "setFlag", "GraphicsItemFlag,bool", "void", 143, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "GraphicsItemFlags", "void", 144, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocus()", { "setFocus", "", "void", 145, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocus(enum)", { "setFocus", "Qt::FocusReason", "void", 146, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusProxy(QGraphicsItem*)", { "setFocusProxy", "QGraphicsItem*", "void", 147, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGraphicsEffect(QGraphicsEffect*)", { "setGraphicsEffect", "QGraphicsEffect*", "void", 148, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGroup(QGraphicsItemGroup*)", { "setGroup", "QGraphicsItemGroup*", "void", 149, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInputMethodHints(enum)", { "setInputMethodHints", "Qt::InputMethodHints", "void", 150, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpacity(double)", { "setOpacity", "qreal", "void", 151, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPanelModality(enum)", { "setPanelModality", "PanelModality", "void", 152, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setParentItem(QGraphicsItem*)", { "setParentItem", "QGraphicsItem*", "void", 153, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPos(QPointF&)", { "setPos", "QPointF&", "void", 154, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPos(double,double)", { "setPos", "qreal,qreal", "void", 155, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRotation(double)", { "setRotation", "qreal", "void", 156, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScale(double)", { "setScale", "qreal", "void", 157, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelected(bool)", { "setSelected", "bool", "void", 158, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 159, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransform(QTransform&)", { "setTransform", "QTransform&", "void", 160, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransform(QTransform&,bool)", { "setTransform", "QTransform&,bool", "void", 161, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransformOriginPoint(QPointF&)", { "setTransformOriginPoint", "QPointF&", "void", 162, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransformOriginPoint(double,double)", { "setTransformOriginPoint", "qreal,qreal", "void", 163, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransformations(QList<QGraphicsTransform*>&)", { "setTransformations", "QList<QGraphicsTransform*>&", "void", 164, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 165, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setX(double)", { "setX", "qreal", "void", 166, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setY(double)", { "setY", "qreal", "void", 167, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setZValue(double)", { "setZValue", "qreal", "void", 168, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shape()", { "shape", "", "QPainterPath", 169, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "show()", { "show", "", "void", 170, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stackBefore(const QGraphicsItem*)", { "stackBefore", "QGraphicsItem*", "void", 171, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toGraphicsObject()", { "toGraphicsObject", "", "QGraphicsObject*", 172, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 173, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLevelItem()", { "topLevelItem", "", "QGraphicsItem*", 174, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "topLevelWidget()", { "topLevelWidget", "", "QGraphicsWidget*", 175, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transform()", { "transform", "", "QTransform", 176, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformOriginPoint()", { "transformOriginPoint", "", "QPointF", 177, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "int", 178, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ungrabKeyboard()", { "ungrabKeyboard", "", "void", 179, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ungrabMouse()", { "ungrabMouse", "", "void", 180, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetCursor()", { "unsetCursor", "", "void", 181, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update()", { "update", "", "void", 182, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update(QRectF&)", { "update", "QRectF&", "void", 183, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update(double,double,double,double)", { "update", "qreal,qreal,qreal,qreal", "void", 184, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "QGraphicsWidget*", 185, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "x()", { "x", "", "qreal", 186, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "y()", { "y", "", "qreal", 187, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zValue()", { "zValue", "", "qreal", 188, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "Type()", { "Type", "", "const int", 189, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "UserType()", { "UserType", "", "const int", 190, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "contextMenuEvent(QGraphicsSceneContextMenuEvent*)", { "contextMenuEvent", "QGraphicsSceneContextMenuEvent*", "void", 191, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragEnterEvent(QGraphicsSceneDragDropEvent*)", { "dragEnterEvent", "QGraphicsSceneDragDropEvent*", "void", 192, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragLeaveEvent(QGraphicsSceneDragDropEvent*)", { "dragLeaveEvent", "QGraphicsSceneDragDropEvent*", "void", 193, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dragMoveEvent(QGraphicsSceneDragDropEvent*)", { "dragMoveEvent", "QGraphicsSceneDragDropEvent*", "void", 194, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "dropEvent(QGraphicsSceneDragDropEvent*)", { "dropEvent", "QGraphicsSceneDragDropEvent*", "void", 195, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 196, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 197, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverEnterEvent(QGraphicsSceneHoverEvent*)", { "hoverEnterEvent", "QGraphicsSceneHoverEvent*", "void", 198, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverLeaveEvent(QGraphicsSceneHoverEvent*)", { "hoverLeaveEvent", "QGraphicsSceneHoverEvent*", "void", 199, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hoverMoveEvent(QGraphicsSceneHoverEvent*)", { "hoverMoveEvent", "QGraphicsSceneHoverEvent*", "void", 200, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodEvent(QInputMethodEvent*)", { "inputMethodEvent", "QInputMethodEvent*", "void", 201, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "inputMethodQuery(enum)", { "inputMethodQuery", "Qt::InputMethodQuery", "QVariant", 202, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "itemChange(enum,QVariant)", { "itemChange", "GraphicsItemChange,QVariant&", "QVariant", 203, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 204, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 205, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QGraphicsSceneMouseEvent*)", { "mouseDoubleClickEvent", "QGraphicsSceneMouseEvent*", "void", 206, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QGraphicsSceneMouseEvent*)", { "mouseMoveEvent", "QGraphicsSceneMouseEvent*", "void", 207, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QGraphicsSceneMouseEvent*)", { "mousePressEvent", "QGraphicsSceneMouseEvent*", "void", 208, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QGraphicsSceneMouseEvent*)", { "mouseReleaseEvent", "QGraphicsSceneMouseEvent*", "void", 209, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "prepareGeometryChange()", { "prepareGeometryChange", "", "void", 210, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "sceneEvent(QEvent*)", { "sceneEvent", "QEvent*", "bool", 211, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "sceneEventFilter(QGraphicsItem*,QEvent*)", { "sceneEventFilter", "QGraphicsItem*,QEvent*", "bool", 212, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "updateMicroFocus()", { "updateMicroFocus", "", "void", 213, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "wheelEvent(QGraphicsSceneWheelEvent*)", { "wheelEvent", "QGraphicsSceneWheelEvent*", "void", 214, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsItem::plastiqConstants = {

    /* QGraphicsItem::CacheMode */
   { "NoCache", QGraphicsItem::NoCache },
   { "ItemCoordinateCache", QGraphicsItem::ItemCoordinateCache },
   { "DeviceCoordinateCache", QGraphicsItem::DeviceCoordinateCache },

    /* QGraphicsItem::GraphicsItemChange */
   { "ItemPositionChange", QGraphicsItem::ItemPositionChange },
   { "ItemMatrixChange", QGraphicsItem::ItemMatrixChange },
   { "ItemVisibleChange", QGraphicsItem::ItemVisibleChange },
   { "ItemEnabledChange", QGraphicsItem::ItemEnabledChange },
   { "ItemSelectedChange", QGraphicsItem::ItemSelectedChange },
   { "ItemParentChange", QGraphicsItem::ItemParentChange },
   { "ItemChildAddedChange", QGraphicsItem::ItemChildAddedChange },
   { "ItemChildRemovedChange", QGraphicsItem::ItemChildRemovedChange },
   { "ItemTransformChange", QGraphicsItem::ItemTransformChange },
   { "ItemPositionHasChanged", QGraphicsItem::ItemPositionHasChanged },
   { "ItemTransformHasChanged", QGraphicsItem::ItemTransformHasChanged },
   { "ItemSceneChange", QGraphicsItem::ItemSceneChange },
   { "ItemVisibleHasChanged", QGraphicsItem::ItemVisibleHasChanged },
   { "ItemEnabledHasChanged", QGraphicsItem::ItemEnabledHasChanged },
   { "ItemSelectedHasChanged", QGraphicsItem::ItemSelectedHasChanged },
   { "ItemParentHasChanged", QGraphicsItem::ItemParentHasChanged },
   { "ItemSceneHasChanged", QGraphicsItem::ItemSceneHasChanged },
   { "ItemCursorChange", QGraphicsItem::ItemCursorChange },
   { "ItemCursorHasChanged", QGraphicsItem::ItemCursorHasChanged },
   { "ItemToolTipChange", QGraphicsItem::ItemToolTipChange },
   { "ItemToolTipHasChanged", QGraphicsItem::ItemToolTipHasChanged },
   { "ItemFlagsChange", QGraphicsItem::ItemFlagsChange },
   { "ItemFlagsHaveChanged", QGraphicsItem::ItemFlagsHaveChanged },
   { "ItemZValueChange", QGraphicsItem::ItemZValueChange },
   { "ItemZValueHasChanged", QGraphicsItem::ItemZValueHasChanged },
   { "ItemOpacityChange", QGraphicsItem::ItemOpacityChange },
   { "ItemOpacityHasChanged", QGraphicsItem::ItemOpacityHasChanged },
   { "ItemScenePositionHasChanged", QGraphicsItem::ItemScenePositionHasChanged },
   { "ItemRotationChange", QGraphicsItem::ItemRotationChange },
   { "ItemRotationHasChanged", QGraphicsItem::ItemRotationHasChanged },
   { "ItemScaleChange", QGraphicsItem::ItemScaleChange },
   { "ItemScaleHasChanged", QGraphicsItem::ItemScaleHasChanged },
   { "ItemTransformOriginPointChange", QGraphicsItem::ItemTransformOriginPointChange },
   { "ItemTransformOriginPointHasChanged", QGraphicsItem::ItemTransformOriginPointHasChanged },

    /* QGraphicsItem::GraphicsItemFlag */
   { "ItemIsMovable", QGraphicsItem::ItemIsMovable },
   { "ItemIsSelectable", QGraphicsItem::ItemIsSelectable },
   { "ItemIsFocusable", QGraphicsItem::ItemIsFocusable },
   { "ItemClipsToShape", QGraphicsItem::ItemClipsToShape },
   { "ItemClipsChildrenToShape", QGraphicsItem::ItemClipsChildrenToShape },
   { "ItemIgnoresTransformations", QGraphicsItem::ItemIgnoresTransformations },
   { "ItemIgnoresParentOpacity", QGraphicsItem::ItemIgnoresParentOpacity },
   { "ItemDoesntPropagateOpacityToChildren", QGraphicsItem::ItemDoesntPropagateOpacityToChildren },
   { "ItemStacksBehindParent", QGraphicsItem::ItemStacksBehindParent },
   { "ItemUsesExtendedStyleOption", QGraphicsItem::ItemUsesExtendedStyleOption },
   { "ItemHasNoContents", QGraphicsItem::ItemHasNoContents },
   { "ItemSendsGeometryChanges", QGraphicsItem::ItemSendsGeometryChanges },
   { "ItemAcceptsInputMethod", QGraphicsItem::ItemAcceptsInputMethod },
   { "ItemNegativeZStacksBehindParent", QGraphicsItem::ItemNegativeZStacksBehindParent },
   { "ItemIsPanel", QGraphicsItem::ItemIsPanel },
   { "ItemIsFocusScope", QGraphicsItem::ItemIsFocusScope },
   { "ItemSendsScenePositionChanges", QGraphicsItem::ItemSendsScenePositionChanges },
   { "ItemStopsClickFocusPropagation", QGraphicsItem::ItemStopsClickFocusPropagation },
   { "ItemStopsFocusHandling", QGraphicsItem::ItemStopsFocusHandling },
   { "ItemContainsChildrenInShape", QGraphicsItem::ItemContainsChildrenInShape },

    /* QGraphicsItem::PanelModality */
   { "NonModal", QGraphicsItem::NonModal },
   { "PanelModal", QGraphicsItem::PanelModal },
   { "SceneModal", QGraphicsItem::SceneModal },

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQGraphicsItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQGraphicsItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QGraphicsItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGraphicsItemWrapper : public QGraphicsItem {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    ~PlastiQQGraphicsItemWrapper() { PlastiQ_self_destroy(pqObjectWPtr); }

    void advance(int phase) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void advance(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = phase;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsItem::advance(phase);
    }

    void PlastiQParentCall_advance(int phase) {
        return QGraphicsItem::advance(phase);
    }

    bool collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool collidesWithItem(const QGraphicsItem*,Qt::ItemSelectionMode=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QGraphicsItem*>(other));
            stack[1].name = QByteArrayLiteral("QGraphicsItem");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_int64 = mode;
            stack[2].name = QByteArrayLiteral("Qt::ItemSelectionMode");
            stack[2].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::collidesWithItem(other,mode);
    }

    bool PlastiQParentCall_collidesWithItem(const QGraphicsItem *other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const {
        return QGraphicsItem::collidesWithItem(other,mode);
    }

    bool collidesWithPath(const QPainterPath &path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool collidesWithPath(const QPainterPath&,Qt::ItemSelectionMode=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QPainterPath(path) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPainterPath");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int64 = mode;
            stack[2].name = QByteArrayLiteral("Qt::ItemSelectionMode");
            stack[2].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::collidesWithPath(path,mode);
    }

    bool PlastiQParentCall_collidesWithPath(const QPainterPath &path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const {
        return QGraphicsItem::collidesWithPath(path,mode);
    }

    bool contains(const QPointF &point) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool contains(const QPointF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPointF(point) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPointF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::contains(point);
    }

    bool PlastiQParentCall_contains(const QPointF &point) const {
        return QGraphicsItem::contains(point);
    }

    bool isObscuredBy(const QGraphicsItem *item) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isObscuredBy(const QGraphicsItem*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QGraphicsItem*>(item));
            stack[1].name = QByteArrayLiteral("QGraphicsItem");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::isObscuredBy(item);
    }

    bool PlastiQParentCall_isObscuredBy(const QGraphicsItem *item) const {
        return QGraphicsItem::isObscuredBy(item);
    }

    QPainterPath opaqueArea() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QPainterPath opaqueArea()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QPainterPath _r = QPainterPath(*reinterpret_cast<QPainterPath*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::opaqueArea();
    }

    QPainterPath PlastiQParentCall_opaqueArea() const {
        return QGraphicsItem::opaqueArea();
    }

    QPainterPath shape() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QPainterPath shape()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QPainterPath _r = QPainterPath(*reinterpret_cast<QPainterPath*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::shape();
    }

    QPainterPath PlastiQParentCall_shape() const {
        return QGraphicsItem::shape();
    }

    int type() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int type()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::type();
    }

    int PlastiQParentCall_type() const {
        return QGraphicsItem::type();
    }

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
        else return QGraphicsItem::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QGraphicsSceneContextMenuEvent *event) {
        return QGraphicsItem::contextMenuEvent(event);
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
        else return QGraphicsItem::dragEnterEvent(event);
    }

    void PlastiQParentCall_dragEnterEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsItem::dragEnterEvent(event);
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
        else return QGraphicsItem::dragLeaveEvent(event);
    }

    void PlastiQParentCall_dragLeaveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsItem::dragLeaveEvent(event);
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
        else return QGraphicsItem::dragMoveEvent(event);
    }

    void PlastiQParentCall_dragMoveEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsItem::dragMoveEvent(event);
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
        else return QGraphicsItem::dropEvent(event);
    }

    void PlastiQParentCall_dropEvent(QGraphicsSceneDragDropEvent *event) {
        return QGraphicsItem::dropEvent(event);
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
        else return QGraphicsItem::focusInEvent(event);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *event) {
        return QGraphicsItem::focusInEvent(event);
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
        else return QGraphicsItem::focusOutEvent(event);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *event) {
        return QGraphicsItem::focusOutEvent(event);
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
        else return QGraphicsItem::hoverEnterEvent(event);
    }

    void PlastiQParentCall_hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsItem::hoverEnterEvent(event);
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
        else return QGraphicsItem::hoverLeaveEvent(event);
    }

    void PlastiQParentCall_hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsItem::hoverLeaveEvent(event);
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
        else return QGraphicsItem::hoverMoveEvent(event);
    }

    void PlastiQParentCall_hoverMoveEvent(QGraphicsSceneHoverEvent *event) {
        return QGraphicsItem::hoverMoveEvent(event);
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
        else return QGraphicsItem::inputMethodEvent(event);
    }

    void PlastiQParentCall_inputMethodEvent(QInputMethodEvent *event) {
        return QGraphicsItem::inputMethodEvent(event);
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
        else return QGraphicsItem::inputMethodQuery(query);
    }

    QVariant PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery query) const {
        return QGraphicsItem::inputMethodQuery(query);
    }

    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QVariant itemChange(GraphicsItemChange,const QVariant&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int64 = change;
            stack[1].name = QByteArrayLiteral("GraphicsItemChange");
            stack[1].type = PlastiQ::Enum;
            stack[2].s_voidp = new QVariant(value) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QVariant");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QVariant _r = QVariant(*reinterpret_cast<QVariant*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::itemChange(change,value);
    }

    QVariant PlastiQParentCall_itemChange(GraphicsItemChange change, const QVariant &value) {
        return QGraphicsItem::itemChange(change,value);
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
        else return QGraphicsItem::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QGraphicsItem::keyPressEvent(event);
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
        else return QGraphicsItem::keyReleaseEvent(event);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *event) {
        return QGraphicsItem::keyReleaseEvent(event);
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
        else return QGraphicsItem::mouseDoubleClickEvent(event);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsItem::mouseDoubleClickEvent(event);
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
        else return QGraphicsItem::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsItem::mouseMoveEvent(event);
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
        else return QGraphicsItem::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsItem::mousePressEvent(event);
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
        else return QGraphicsItem::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
        return QGraphicsItem::mouseReleaseEvent(event);
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
        else return QGraphicsItem::sceneEvent(event);
    }

    bool PlastiQParentCall_sceneEvent(QEvent *event) {
        return QGraphicsItem::sceneEvent(event);
    }

    bool sceneEventFilter(QGraphicsItem *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool sceneEventFilter(QGraphicsItem*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QGraphicsItem");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QGraphicsItem::sceneEventFilter(watched,event);
    }

    bool PlastiQParentCall_sceneEventFilter(QGraphicsItem *watched, QEvent *event) {
        return QGraphicsItem::sceneEventFilter(watched,event);
    }

    void wheelEvent(QGraphicsSceneWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QGraphicsSceneWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QGraphicsSceneWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGraphicsItem::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QGraphicsSceneWheelEvent *event) {
        return QGraphicsItem::wheelEvent(event);
    }

};

void PlastiQQGraphicsItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGraphicsItemWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGraphicsItem *p = new PlastiQQGraphicsItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsItem *p = new PlastiQQGraphicsItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 215) {
            id -= 215;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsItem *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsItem*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->acceptDrops();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->acceptHoverEvents();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->acceptTouchEvents();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { qint64 _r = o->acceptedMouseButtons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_advance(stack[1].s_int);
                else o->advance(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->boundingRegion((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { double _r = o->boundingRegionGranularity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { qint64 _r = o->cacheMode(); // HACK for CacheMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->childrenBoundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: o->clearFocus();
                stack[0].type = PlastiQ::Void; break;
        case 11: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->clipPath());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_collidesWithItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                else _r = o->collidesWithItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_collidesWithItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    Qt::ItemSelectionMode(stack[2].s_int64));
                else _r = o->collidesWithItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    Qt::ItemSelectionMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_collidesWithPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                else _r = o->collidesWithPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_collidesWithPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    Qt::ItemSelectionMode(stack[2].s_int64));
                else _r = o->collidesWithPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    Qt::ItemSelectionMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { QGraphicsItem* _r = o->commonAncestorItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 17: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_contains((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                else _r = o->contains((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { /* COPY OBJECT */
            QCursor *_r = new QCursor(o->cursor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCursor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->data(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->deviceTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { double _r = o->effectiveOpacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 22: o->ensureVisible();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->ensureVisible(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->ensureVisible(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->ensureVisible(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_int,
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 29: { bool _r = o->filtersChildEvents();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { qint64 _r = o->flags(); // HACK for GraphicsItemFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 31: { QGraphicsItem* _r = o->focusItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 32: { QGraphicsItem* _r = o->focusProxy();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 33: o->grabKeyboard();
                stack[0].type = PlastiQ::Void; break;
        case 34: o->grabMouse();
                stack[0].type = PlastiQ::Void; break;
        case 35: { QGraphicsEffect* _r = o->graphicsEffect();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsEffect"; } break;
        case 36: { QGraphicsItemGroup* _r = o->group();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItemGroup"; } break;
        case 37: { bool _r = o->hasCursor();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { bool _r = o->hasFocus();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 40: { qint64 _r = o->inputMethodHints(); // HACK for Qt::InputMethodHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 41: o->installSceneEventFilter(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 42: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 43: { bool _r = o->isAncestorOf(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 44: { bool _r = o->isBlockedByModalPanel();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 45: { bool _r = o->isBlockedByModalPanel(reinterpret_cast<QGraphicsItem**>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 46: { bool _r = o->isClipped();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 47: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { bool _r = o->isObscured();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 49: { bool _r = o->isObscured((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: { bool _r = o->isObscured(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 51: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_isObscuredBy(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                else _r = o->isObscuredBy(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: { bool _r = o->isPanel();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 53: { bool _r = o->isSelected();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 54: { bool _r = o->isUnderMouse();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 55: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 56: { bool _r = o->isVisibleTo(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 57: { bool _r = o->isWidget();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 58: { bool _r = o->isWindow();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 59: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->itemTransform(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 60: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->itemTransform(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    reinterpret_cast<bool*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 61: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 62: /* UNSUPPORTED_RETURN_VALUE o->mapFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp))) | ret: `QPolygonF` */ break;
        case 63: /* UNSUPPORTED_RETURN_VALUE o->mapFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPolygonF(*) >(stack[2].s_voidp))) | ret: `QPolygonF` */ break;
        case 64: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPainterPath(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 65: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_double,
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 66: /* UNSUPPORTED_RETURN_VALUE o->mapFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double) | ret: `QPolygonF` */ break;
        case 67: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapFromParent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 68: /* UNSUPPORTED_RETURN_VALUE o->mapFromParent((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 69: /* UNSUPPORTED_RETURN_VALUE o->mapFromParent((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 70: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapFromParent((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 71: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapFromParent(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 72: /* UNSUPPORTED_RETURN_VALUE o->mapFromParent(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double) | ret: `QPolygonF` */ break;
        case 73: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapFromScene((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 74: /* UNSUPPORTED_RETURN_VALUE o->mapFromScene((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 75: /* UNSUPPORTED_RETURN_VALUE o->mapFromScene((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 76: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapFromScene((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 77: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapFromScene(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 78: /* UNSUPPORTED_RETURN_VALUE o->mapFromScene(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double) | ret: `QPolygonF` */ break;
        case 79: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 80: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectFromItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 81: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectFromParent((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 82: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectFromParent(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 83: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectFromScene((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 84: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectFromScene(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 85: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 86: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 87: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectToParent((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 88: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectToParent(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 89: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectToScene((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 90: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->mapRectToScene(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 91: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 92: /* UNSUPPORTED_RETURN_VALUE o->mapToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp))) | ret: `QPolygonF` */ break;
        case 93: /* UNSUPPORTED_RETURN_VALUE o->mapToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPolygonF(*) >(stack[2].s_voidp))) | ret: `QPolygonF` */ break;
        case 94: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPainterPath(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 95: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_double,
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 96: /* UNSUPPORTED_RETURN_VALUE o->mapToItem(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp),
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double) | ret: `QPolygonF` */ break;
        case 97: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToParent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 98: /* UNSUPPORTED_RETURN_VALUE o->mapToParent((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 99: /* UNSUPPORTED_RETURN_VALUE o->mapToParent((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 100: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapToParent((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 101: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToParent(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 102: /* UNSUPPORTED_RETURN_VALUE o->mapToParent(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double) | ret: `QPolygonF` */ break;
        case 103: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToScene((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 104: /* UNSUPPORTED_RETURN_VALUE o->mapToScene((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 105: /* UNSUPPORTED_RETURN_VALUE o->mapToScene((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp))) | ret: `QPolygonF` */ break;
        case 106: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->mapToScene((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 107: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToScene(stack[1].s_double,
                    stack[2].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 108: /* UNSUPPORTED_RETURN_VALUE o->mapToScene(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double) | ret: `QPolygonF` */ break;
        case 109: o->moveBy(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 110: { double _r = o->opacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 111: { /* COPY OBJECT */
            QPainterPath *_r;
                if (isWrapper) _r = new QPainterPath(((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_opaqueArea());
                else _r = new QPainterPath(o->opaqueArea());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 112: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    reinterpret_cast<const QStyleOptionGraphicsItem*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 113: o->paint(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    reinterpret_cast<const QStyleOptionGraphicsItem*>(stack[2].s_voidp),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 114: { QGraphicsItem* _r = o->panel();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 115: { qint64 _r = o->panelModality(); // HACK for PanelModality 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 116: { QGraphicsItem* _r = o->parentItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 117: { QGraphicsObject* _r = o->parentObject();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsObject"; } break;
        case 118: { QGraphicsWidget* _r = o->parentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsWidget"; } break;
        case 119: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 120: o->removeSceneEventFilter(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 121: o->resetTransform();
                stack[0].type = PlastiQ::Void; break;
        case 122: { double _r = o->rotation();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 123: { double _r = o->scale();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 124: { QGraphicsScene* _r = o->scene();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsScene"; } break;
        case 125: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->sceneBoundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 126: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->scenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 127: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->sceneTransform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 128: o->scroll(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 129: o->scroll(stack[1].s_double,
                    stack[2].s_double,
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 130: o->setAcceptDrops(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 131: o->setAcceptHoverEvents(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 132: o->setAcceptTouchEvents(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 133: o->setAcceptedMouseButtons(Qt::MouseButtons(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 134: o->setActive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 135: o->setBoundingRegionGranularity(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 136: o->setCacheMode(QGraphicsItem::CacheMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 137: o->setCacheMode(QGraphicsItem::CacheMode(stack[1].s_int64),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 138: o->setCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 139: o->setData(stack[1].s_int,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 140: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 141: o->setFiltersChildEvents(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 142: o->setFlag(QGraphicsItem::GraphicsItemFlag(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 143: o->setFlag(QGraphicsItem::GraphicsItemFlag(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 144: o->setFlags(QGraphicsItem::GraphicsItemFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 145: o->setFocus();
                stack[0].type = PlastiQ::Void; break;
        case 146: o->setFocus(Qt::FocusReason(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 147: o->setFocusProxy(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 148: o->setGraphicsEffect(reinterpret_cast<QGraphicsEffect*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 149: o->setGroup(reinterpret_cast<QGraphicsItemGroup*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 150: o->setInputMethodHints(Qt::InputMethodHints(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 151: o->setOpacity(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 152: o->setPanelModality(QGraphicsItem::PanelModality(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 153: o->setParentItem(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 154: o->setPos((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 155: o->setPos(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 156: o->setRotation(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 157: o->setScale(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 158: o->setSelected(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 159: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 160: o->setTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 161: o->setTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 162: o->setTransformOriginPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 163: o->setTransformOriginPoint(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 164: o->setTransformations((*reinterpret_cast< QList<QGraphicsTransform*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 165: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 166: o->setX(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 167: o->setY(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 168: o->setZValue(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 169: { /* COPY OBJECT */
            QPainterPath *_r;
                if (isWrapper) _r = new QPainterPath(((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_shape());
                else _r = new QPainterPath(o->shape());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 170: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 171: o->stackBefore(reinterpret_cast<const QGraphicsItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 172: { QGraphicsObject* _r = o->toGraphicsObject();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsObject"; } break;
        case 173: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 174: { QGraphicsItem* _r = o->topLevelItem();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGraphicsItem"; } break;
        case 175: { QGraphicsWidget* _r = o->topLevelWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsWidget"; } break;
        case 176: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->transform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 177: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->transformOriginPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 178: { int _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_type();
                else _r = o->type();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 179: o->ungrabKeyboard();
                stack[0].type = PlastiQ::Void; break;
        case 180: o->ungrabMouse();
                stack[0].type = PlastiQ::Void; break;
        case 181: o->unsetCursor();
                stack[0].type = PlastiQ::Void; break;
        case 182: o->update();
                stack[0].type = PlastiQ::Void; break;
        case 183: o->update((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 184: o->update(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 185: { QGraphicsWidget* _r = o->window();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGraphicsWidget"; } break;
        case 186: { double _r = o->x();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 187: { double _r = o->y();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 188: { double _r = o->zValue();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 189: /* UNSUPPORTED_RETURN_VALUE o->Type() | ret: `const int` */ break;
        case 190: /* UNSUPPORTED_RETURN_VALUE o->UserType() | ret: `const int` */ break;
        case 191: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QGraphicsSceneContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 192: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_dragEnterEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 193: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_dragLeaveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 194: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_dragMoveEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 195: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_dropEvent(reinterpret_cast<QGraphicsSceneDragDropEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 196: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 197: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 198: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_hoverEnterEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 199: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_hoverLeaveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 200: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_hoverMoveEvent(reinterpret_cast<QGraphicsSceneHoverEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 201: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_inputMethodEvent(reinterpret_cast<QInputMethodEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 202: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_inputMethodQuery(Qt::InputMethodQuery(stack[1].s_int64)));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 203: { /* COPY OBJECT */
            QVariant *_r;
                if (isWrapper) _r = new QVariant(((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_itemChange(QGraphicsItem::GraphicsItemChange(stack[1].s_int64),
                    stack[2].s_variant));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 204: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 205: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 206: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 207: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 208: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 209: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QGraphicsSceneMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 210: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 211: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_sceneEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 212: { bool _r;
                if (isWrapper) _r = ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_sceneEventFilter(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 213: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 214: if (isWrapper) ((PlastiQQGraphicsItemWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QGraphicsSceneWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
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
        QGraphicsItem *o = reinterpret_cast<QGraphicsItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQGraphicsItem::~PlastiQQGraphicsItem() {
    QGraphicsItem* o = reinterpret_cast<QGraphicsItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
