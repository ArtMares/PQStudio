#include "plastiqmethod.h"
#include "plastiqqpainter.h"

#include <QPainter> 
#include <QBrush>
#include <QRectF>
#include <QRect>
#include <QPoint>
#include <QPainterPath>
#include <QRegion>
#include <QTransform>
#include <QPaintDevice>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QPaintEngine>
#include <QPen>

QHash<QByteArray, PlastiQMethod> PlastiQQPainter::plastiqConstructors = {
    { "QPainter()", { "QPainter", "", "QPainter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPainter(QPaintDevice*)", { "QPainter", "QPaintDevice*", "QPainter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPainter::plastiqMethods = {
    { "background()", { "background", "", "const QBrush&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundMode()", { "backgroundMode", "", "Qt::BGMode", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "begin(QPaintDevice*)", { "begin", "QPaintDevice*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "beginNativePainting()", { "beginNativePainting", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRectF&,int,QString)", { "boundingRect", "QRectF&,int,QString&", "QRectF", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRect&,int,QString)", { "boundingRect", "QRect&,int,QString&", "QRect", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(int,int,int,int,int,QString)", { "boundingRect", "int,int,int,int,int,QString&", "QRect", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRectF&,QString)", { "boundingRect", "QRectF&,QString&", "QRectF", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(QRectF&,QString,QTextOption&)", { "boundingRect", "QRectF&,QString&,QTextOption&", "QRectF", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "const QBrush&", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brushOrigin()", { "brushOrigin", "", "QPoint", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipBoundingRect()", { "clipBoundingRect", "", "QRectF", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipPath()", { "clipPath", "", "QPainterPath", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipRegion()", { "clipRegion", "", "QRegion", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "combinedTransform()", { "combinedTransform", "", "QTransform", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compositionMode()", { "compositionMode", "", "CompositionMode", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QPaintDevice*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deviceTransform()", { "deviceTransform", "", "const QTransform&", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawArc(QRectF&,int,int)", { "drawArc", "QRectF&,int,int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawArc(QRect&,int,int)", { "drawArc", "QRect&,int,int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawArc(int,int,int,int,int,int)", { "drawArc", "int,int,int,int,int,int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawChord(QRectF&,int,int)", { "drawChord", "QRectF&,int,int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawChord(int,int,int,int,int,int)", { "drawChord", "int,int,int,int,int,int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawChord(QRect&,int,int)", { "drawChord", "QRect&,int,int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawConvexPolygon(const QPointF*,int)", { "drawConvexPolygon", "QPointF*,int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawConvexPolygon(QPolygonF&)", { "drawConvexPolygon", "QPolygonF&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawConvexPolygon(const QPoint*,int)", { "drawConvexPolygon", "QPoint*,int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawConvexPolygon(QPolygon&)", { "drawConvexPolygon", "QPolygon&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawEllipse(QRectF&)", { "drawEllipse", "QRectF&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawEllipse(QRect&)", { "drawEllipse", "QRect&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawEllipse(int,int,int,int)", { "drawEllipse", "int,int,int,int", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawEllipse(QPointF&,double,double)", { "drawEllipse", "QPointF&,qreal,qreal", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawEllipse(QPoint&,int,int)", { "drawEllipse", "QPoint&,int,int", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawGlyphRun(QPointF&,QGlyphRun&)", { "drawGlyphRun", "QPointF&,QGlyphRun&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRectF&,QImage&,QRectF&)", { "drawImage", "QRectF&,QImage&,QRectF&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRectF&,QImage&,QRectF&,enum)", { "drawImage", "QRectF&,QImage&,QRectF&,Qt::ImageConversionFlags", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRect&,QImage&,QRect&)", { "drawImage", "QRect&,QImage&,QRect&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRect&,QImage&,QRect&,enum)", { "drawImage", "QRect&,QImage&,QRect&,Qt::ImageConversionFlags", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QPointF&,QImage&,QRectF&)", { "drawImage", "QPointF&,QImage&,QRectF&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QPointF&,QImage&,QRectF&,enum)", { "drawImage", "QPointF&,QImage&,QRectF&,Qt::ImageConversionFlags", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QPoint&,QImage&,QRect&)", { "drawImage", "QPoint&,QImage&,QRect&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QPoint&,QImage&,QRect&,enum)", { "drawImage", "QPoint&,QImage&,QRect&,Qt::ImageConversionFlags", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRectF&,QImage&)", { "drawImage", "QRectF&,QImage&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QRect&,QImage&)", { "drawImage", "QRect&,QImage&", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QPointF&,QImage&)", { "drawImage", "QPointF&,QImage&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(QPoint&,QImage&)", { "drawImage", "QPoint&,QImage&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(int,int,QImage&)", { "drawImage", "int,int,QImage&", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(int,int,QImage&,int)", { "drawImage", "int,int,QImage&,int", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(int,int,QImage&,int,int)", { "drawImage", "int,int,QImage&,int,int", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(int,int,QImage&,int,int,int)", { "drawImage", "int,int,QImage&,int,int,int", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(int,int,QImage&,int,int,int,int)", { "drawImage", "int,int,QImage&,int,int,int,int", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawImage(int,int,QImage&,int,int,int,int,enum)", { "drawImage", "int,int,QImage&,int,int,int,int,Qt::ImageConversionFlags", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLine(QLineF&)", { "drawLine", "QLineF&", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLine(QLine&)", { "drawLine", "QLine&", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLine(int,int,int,int)", { "drawLine", "int,int,int,int", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLine(QPoint&,QPoint&)", { "drawLine", "QPoint&,QPoint&", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLine(QPointF&,QPointF&)", { "drawLine", "QPointF&,QPointF&", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(const QLineF*,int)", { "drawLines", "QLineF*,int", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(QVector<QLineF>&)", { "drawLines", "QVector<QLineF>&", "void", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(const QPointF*,int)", { "drawLines", "QPointF*,int", "void", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(QVector<QPointF>&)", { "drawLines", "QVector<QPointF>&", "void", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(const QLine*,int)", { "drawLines", "QLine*,int", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(QVector<QLine>&)", { "drawLines", "QVector<QLine>&", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(const QPoint*,int)", { "drawLines", "QPoint*,int", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawLines(QVector<QPoint>&)", { "drawLines", "QVector<QPoint>&", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPath(QPainterPath&)", { "drawPath", "QPainterPath&", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPicture(QPointF&,QPicture&)", { "drawPicture", "QPointF&,QPicture&", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPicture(int,int,QPicture&)", { "drawPicture", "int,int,QPicture&", "void", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPicture(QPoint&,QPicture&)", { "drawPicture", "QPoint&,QPicture&", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPie(QRectF&,int,int)", { "drawPie", "QRectF&,int,int", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPie(int,int,int,int,int,int)", { "drawPie", "int,int,int,int,int,int", "void", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPie(QRect&,int,int)", { "drawPie", "QRect&,int,int", "void", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QRectF&,QPixmap&,QRectF&)", { "drawPixmap", "QRectF&,QPixmap&,QRectF&", "void", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QRect&,QPixmap&,QRect&)", { "drawPixmap", "QRect&,QPixmap&,QRect&", "void", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(int,int,int,int,QPixmap&,int,int,int,int)", { "drawPixmap", "int,int,int,int,QPixmap&,int,int,int,int", "void", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(int,int,QPixmap&,int,int,int,int)", { "drawPixmap", "int,int,QPixmap&,int,int,int,int", "void", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QPointF&,QPixmap&,QRectF&)", { "drawPixmap", "QPointF&,QPixmap&,QRectF&", "void", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QPoint&,QPixmap&,QRect&)", { "drawPixmap", "QPoint&,QPixmap&,QRect&", "void", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QPointF&,QPixmap&)", { "drawPixmap", "QPointF&,QPixmap&", "void", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QPoint&,QPixmap&)", { "drawPixmap", "QPoint&,QPixmap&", "void", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(int,int,QPixmap&)", { "drawPixmap", "int,int,QPixmap&", "void", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(QRect&,QPixmap&)", { "drawPixmap", "QRect&,QPixmap&", "void", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPixmap(int,int,int,int,QPixmap&)", { "drawPixmap", "int,int,int,int,QPixmap&", "void", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoint(QPointF&)", { "drawPoint", "QPointF&", "void", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoint(QPoint&)", { "drawPoint", "QPoint&", "void", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoint(int,int)", { "drawPoint", "int,int", "void", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoints(const QPointF*,int)", { "drawPoints", "QPointF*,int", "void", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoints(QPolygonF&)", { "drawPoints", "QPolygonF&", "void", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoints(const QPoint*,int)", { "drawPoints", "QPoint*,int", "void", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPoints(QPolygon&)", { "drawPoints", "QPolygon&", "void", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(const QPointF*,int)", { "drawPolygon", "QPointF*,int", "void", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(const QPointF*,int,enum)", { "drawPolygon", "QPointF*,int,Qt::FillRule", "void", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(QPolygonF&)", { "drawPolygon", "QPolygonF&", "void", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(QPolygonF&,enum)", { "drawPolygon", "QPolygonF&,Qt::FillRule", "void", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(const QPoint*,int)", { "drawPolygon", "QPoint*,int", "void", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(const QPoint*,int,enum)", { "drawPolygon", "QPoint*,int,Qt::FillRule", "void", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(QPolygon&)", { "drawPolygon", "QPolygon&", "void", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolygon(QPolygon&,enum)", { "drawPolygon", "QPolygon&,Qt::FillRule", "void", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolyline(const QPointF*,int)", { "drawPolyline", "QPointF*,int", "void", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolyline(QPolygonF&)", { "drawPolyline", "QPolygonF&", "void", 99, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolyline(const QPoint*,int)", { "drawPolyline", "QPoint*,int", "void", 100, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPolyline(QPolygon&)", { "drawPolyline", "QPolygon&", "void", 101, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRect(QRectF&)", { "drawRect", "QRectF&", "void", 102, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRect(int,int,int,int)", { "drawRect", "int,int,int,int", "void", 103, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRect(QRect&)", { "drawRect", "QRect&", "void", 104, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRects(const QRectF*,int)", { "drawRects", "QRectF*,int", "void", 105, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRects(QVector<QRectF>&)", { "drawRects", "QVector<QRectF>&", "void", 106, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRects(const QRect*,int)", { "drawRects", "QRect*,int", "void", 107, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRects(QVector<QRect>&)", { "drawRects", "QVector<QRect>&", "void", 108, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRoundedRect(QRectF&,double,double)", { "drawRoundedRect", "QRectF&,qreal,qreal", "void", 109, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRoundedRect(QRectF&,double,double,enum)", { "drawRoundedRect", "QRectF&,qreal,qreal,Qt::SizeMode", "void", 110, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRoundedRect(int,int,int,int,double,double)", { "drawRoundedRect", "int,int,int,int,qreal,qreal", "void", 111, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRoundedRect(int,int,int,int,double,double,enum)", { "drawRoundedRect", "int,int,int,int,qreal,qreal,Qt::SizeMode", "void", 112, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRoundedRect(QRect&,double,double)", { "drawRoundedRect", "QRect&,qreal,qreal", "void", 113, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawRoundedRect(QRect&,double,double,enum)", { "drawRoundedRect", "QRect&,qreal,qreal,Qt::SizeMode", "void", 114, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawStaticText(QPointF&,QStaticText&)", { "drawStaticText", "QPointF&,QStaticText&", "void", 115, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawStaticText(QPoint&,QStaticText&)", { "drawStaticText", "QPoint&,QStaticText&", "void", 116, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawStaticText(int,int,QStaticText&)", { "drawStaticText", "int,int,QStaticText&", "void", 117, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QPointF&,QString)", { "drawText", "QPointF&,QString&", "void", 118, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QPoint&,QString)", { "drawText", "QPoint&,QString&", "void", 119, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(int,int,QString)", { "drawText", "int,int,QString&", "void", 120, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QRectF&,int,QString)", { "drawText", "QRectF&,int,QString&", "void", 121, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QRectF&,int,QString,QRectF*)", { "drawText", "QRectF&,int,QString&,QRectF*", "void", 122, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QRect&,int,QString)", { "drawText", "QRect&,int,QString&", "void", 123, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QRect&,int,QString,QRect*)", { "drawText", "QRect&,int,QString&,QRect*", "void", 124, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(int,int,int,int,int,QString)", { "drawText", "int,int,int,int,int,QString&", "void", 125, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(int,int,int,int,int,QString,QRect*)", { "drawText", "int,int,int,int,int,QString&,QRect*", "void", 126, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QRectF&,QString)", { "drawText", "QRectF&,QString&", "void", 127, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawText(QRectF&,QString,QTextOption&)", { "drawText", "QRectF&,QString&,QTextOption&", "void", 128, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(QRectF&,QPixmap&)", { "drawTiledPixmap", "QRectF&,QPixmap&", "void", 129, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(QRectF&,QPixmap&,QPointF&)", { "drawTiledPixmap", "QRectF&,QPixmap&,QPointF&", "void", 130, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(int,int,int,int,QPixmap&)", { "drawTiledPixmap", "int,int,int,int,QPixmap&", "void", 131, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(int,int,int,int,QPixmap&,int)", { "drawTiledPixmap", "int,int,int,int,QPixmap&,int", "void", 132, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(int,int,int,int,QPixmap&,int,int)", { "drawTiledPixmap", "int,int,int,int,QPixmap&,int,int", "void", 133, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(QRect&,QPixmap&)", { "drawTiledPixmap", "QRect&,QPixmap&", "void", 134, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawTiledPixmap(QRect&,QPixmap&,QPoint&)", { "drawTiledPixmap", "QRect&,QPixmap&,QPoint&", "void", 135, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "bool", 136, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endNativePainting()", { "endNativePainting", "", "void", 137, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eraseRect(QRectF&)", { "eraseRect", "QRectF&", "void", 138, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eraseRect(int,int,int,int)", { "eraseRect", "int,int,int,int", "void", 139, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eraseRect(QRect&)", { "eraseRect", "QRect&", "void", 140, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillPath(QPainterPath&,QBrush&)", { "fillPath", "QPainterPath&,QBrush&", "void", 141, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRectF&,QBrush&)", { "fillRect", "QRectF&,QBrush&", "void", 142, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(int,int,int,int,QBrush&)", { "fillRect", "int,int,int,int,QBrush&", "void", 143, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRect&,QBrush&)", { "fillRect", "QRect&,QBrush&", "void", 144, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRectF&,QColor&)", { "fillRect", "QRectF&,QColor&", "void", 145, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(int,int,int,int,QColor&)", { "fillRect", "int,int,int,int,QColor&", "void", 146, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRect&,QColor&)", { "fillRect", "QRect&,QColor&", "void", 147, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(int,int,int,int,enum)", { "fillRect", "int,int,int,int,Qt::GlobalColor", "void", 148, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRect&,enum)", { "fillRect", "QRect&,Qt::GlobalColor", "void", 149, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRectF&,enum)", { "fillRect", "QRectF&,Qt::GlobalColor", "void", 150, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(int,int,int,int,enum)", { "fillRect", "int,int,int,int,Qt::BrushStyle", "void", 151, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRect&,enum)", { "fillRect", "QRect&,Qt::BrushStyle", "void", 152, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fillRect(QRectF&,enum)", { "fillRect", "QRectF&,Qt::BrushStyle", "void", 153, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "const QFont&", 154, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontInfo()", { "fontInfo", "", "QFontInfo", 155, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontMetrics()", { "fontMetrics", "", "QFontMetrics", 156, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasClipping()", { "hasClipping", "", "bool", 157, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 158, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutDirection()", { "layoutDirection", "", "Qt::LayoutDirection", 159, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opacity()", { "opacity", "", "qreal", 160, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintEngine()", { "paintEngine", "", "QPaintEngine*", 161, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "const QPen&", 162, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "renderHints()", { "renderHints", "", "RenderHints", 163, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetTransform()", { "resetTransform", "", "void", 164, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restore()", { "restore", "", "void", 165, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotate(double)", { "rotate", "qreal", "void", 166, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save()", { "save", "", "void", 167, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scale(double,double)", { "scale", "qreal,qreal", "void", 168, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackground(QBrush&)", { "setBackground", "QBrush&", "void", 169, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundMode(enum)", { "setBackgroundMode", "Qt::BGMode", "void", 170, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 171, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(enum)", { "setBrush", "Qt::BrushStyle", "void", 172, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrushOrigin(QPointF&)", { "setBrushOrigin", "QPointF&", "void", 173, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrushOrigin(QPoint&)", { "setBrushOrigin", "QPoint&", "void", 174, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrushOrigin(int,int)", { "setBrushOrigin", "int,int", "void", 175, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipPath(QPainterPath&)", { "setClipPath", "QPainterPath&", "void", 176, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipPath(QPainterPath&,enum)", { "setClipPath", "QPainterPath&,Qt::ClipOperation", "void", 177, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRect(QRectF&)", { "setClipRect", "QRectF&", "void", 178, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRect(QRectF&,enum)", { "setClipRect", "QRectF&,Qt::ClipOperation", "void", 179, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRect(QRect&)", { "setClipRect", "QRect&", "void", 180, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRect(QRect&,enum)", { "setClipRect", "QRect&,Qt::ClipOperation", "void", 181, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRect(int,int,int,int)", { "setClipRect", "int,int,int,int", "void", 182, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRect(int,int,int,int,enum)", { "setClipRect", "int,int,int,int,Qt::ClipOperation", "void", 183, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRegion(QRegion&)", { "setClipRegion", "QRegion&", "void", 184, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRegion(QRegion&,enum)", { "setClipRegion", "QRegion&,Qt::ClipOperation", "void", 185, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipping(bool)", { "setClipping", "bool", "void", 186, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCompositionMode(enum)", { "setCompositionMode", "CompositionMode", "void", 187, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 188, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayoutDirection(enum)", { "setLayoutDirection", "Qt::LayoutDirection", "void", 189, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpacity(double)", { "setOpacity", "qreal", "void", 190, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 191, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QColor&)", { "setPen", "QColor&", "void", 192, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(enum)", { "setPen", "Qt::PenStyle", "void", 193, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderHint(enum)", { "setRenderHint", "RenderHint", "void", 194, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderHint(enum,bool)", { "setRenderHint", "RenderHint,bool", "void", 195, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderHints(enum)", { "setRenderHints", "RenderHints", "void", 196, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRenderHints(enum,bool)", { "setRenderHints", "RenderHints,bool", "void", 197, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransform(QTransform&)", { "setTransform", "QTransform&", "void", 198, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransform(QTransform&,bool)", { "setTransform", "QTransform&,bool", "void", 199, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewTransformEnabled(bool)", { "setViewTransformEnabled", "bool", "void", 200, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewport(QRect&)", { "setViewport", "QRect&", "void", 201, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewport(int,int,int,int)", { "setViewport", "int,int,int,int", "void", 202, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindow(QRect&)", { "setWindow", "QRect&", "void", 203, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindow(int,int,int,int)", { "setWindow", "int,int,int,int", "void", 204, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWorldMatrixEnabled(bool)", { "setWorldMatrixEnabled", "bool", "void", 205, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWorldTransform(QTransform&)", { "setWorldTransform", "QTransform&", "void", 206, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWorldTransform(QTransform&,bool)", { "setWorldTransform", "QTransform&,bool", "void", 207, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shear(double,double)", { "shear", "qreal,qreal", "void", 208, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "strokePath(QPainterPath&,QPen&)", { "strokePath", "QPainterPath&,QPen&", "void", 209, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testRenderHint(enum)", { "testRenderHint", "RenderHint", "bool", 210, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transform()", { "transform", "", "const QTransform&", 211, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPointF&)", { "translate", "QPointF&", "void", 212, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(QPoint&)", { "translate", "QPoint&", "void", 213, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(double,double)", { "translate", "qreal,qreal", "void", 214, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewTransformEnabled()", { "viewTransformEnabled", "", "bool", 215, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewport()", { "viewport", "", "QRect", 216, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "QRect", 217, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "worldMatrixEnabled()", { "worldMatrixEnabled", "", "bool", 218, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "worldTransform()", { "worldTransform", "", "const QTransform&", 219, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPainter::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPainter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPainter::plastiqConstants = {

    /* QPainter::CompositionMode */
   { "CompositionMode_SourceOver", QPainter::CompositionMode_SourceOver },
   { "CompositionMode_DestinationOver", QPainter::CompositionMode_DestinationOver },
   { "CompositionMode_Clear", QPainter::CompositionMode_Clear },
   { "CompositionMode_Source", QPainter::CompositionMode_Source },
   { "CompositionMode_Destination", QPainter::CompositionMode_Destination },
   { "CompositionMode_SourceIn", QPainter::CompositionMode_SourceIn },
   { "CompositionMode_DestinationIn", QPainter::CompositionMode_DestinationIn },
   { "CompositionMode_SourceOut", QPainter::CompositionMode_SourceOut },
   { "CompositionMode_DestinationOut", QPainter::CompositionMode_DestinationOut },
   { "CompositionMode_SourceAtop", QPainter::CompositionMode_SourceAtop },
   { "CompositionMode_DestinationAtop", QPainter::CompositionMode_DestinationAtop },
   { "CompositionMode_Xor", QPainter::CompositionMode_Xor },
   { "CompositionMode_Plus", QPainter::CompositionMode_Plus },
   { "CompositionMode_Multiply", QPainter::CompositionMode_Multiply },
   { "CompositionMode_Screen", QPainter::CompositionMode_Screen },
   { "CompositionMode_Overlay", QPainter::CompositionMode_Overlay },
   { "CompositionMode_Darken", QPainter::CompositionMode_Darken },
   { "CompositionMode_Lighten", QPainter::CompositionMode_Lighten },
   { "CompositionMode_ColorDodge", QPainter::CompositionMode_ColorDodge },
   { "CompositionMode_ColorBurn", QPainter::CompositionMode_ColorBurn },
   { "CompositionMode_HardLight", QPainter::CompositionMode_HardLight },
   { "CompositionMode_SoftLight", QPainter::CompositionMode_SoftLight },
   { "CompositionMode_Difference", QPainter::CompositionMode_Difference },
   { "CompositionMode_Exclusion", QPainter::CompositionMode_Exclusion },
   { "RasterOp_SourceOrDestination", QPainter::RasterOp_SourceOrDestination },
   { "RasterOp_SourceAndDestination", QPainter::RasterOp_SourceAndDestination },
   { "RasterOp_SourceXorDestination", QPainter::RasterOp_SourceXorDestination },
   { "RasterOp_NotSourceAndNotDestination", QPainter::RasterOp_NotSourceAndNotDestination },
   { "RasterOp_NotSourceOrNotDestination", QPainter::RasterOp_NotSourceOrNotDestination },
   { "RasterOp_NotSourceXorDestination", QPainter::RasterOp_NotSourceXorDestination },
   { "RasterOp_NotSource", QPainter::RasterOp_NotSource },
   { "RasterOp_NotSourceAndDestination", QPainter::RasterOp_NotSourceAndDestination },
   { "RasterOp_SourceAndNotDestination", QPainter::RasterOp_SourceAndNotDestination },
   { "RasterOp_NotSourceOrDestination", QPainter::RasterOp_NotSourceOrDestination },
   { "RasterOp_SourceOrNotDestination", QPainter::RasterOp_SourceOrNotDestination },
   { "RasterOp_ClearDestination", QPainter::RasterOp_ClearDestination },
   { "RasterOp_SetDestination", QPainter::RasterOp_SetDestination },
   { "RasterOp_NotDestination", QPainter::RasterOp_NotDestination },

    /* QPainter::PixmapFragmentHint */
   { "OpaqueHint", QPainter::OpaqueHint },

    /* QPainter::RenderHint */
   { "Antialiasing", QPainter::Antialiasing },
   { "TextAntialiasing", QPainter::TextAntialiasing },
   { "SmoothPixmapTransform", QPainter::SmoothPixmapTransform },
   { "HighQualityAntialiasing", QPainter::HighQualityAntialiasing },
   { "NonCosmeticDefaultPen", QPainter::NonCosmeticDefaultPen },
   { "Qt4CompatiblePainting", QPainter::Qt4CompatiblePainting },

};

QVector<PlastiQMetaObject*> PlastiQQPainter::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPainter::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPainter::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPainter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPainter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPainter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPainter *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPainter(); break;
        case 1: o = new QPainter(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPainter *p = new PlastiQQPainter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPainter *p = new PlastiQQPainter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 220) {
            id -= 220;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPainter *o = sc ? Q_NULLPTR : reinterpret_cast<QPainter*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->background());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->backgroundMode(); // HACK for Qt::BGMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { bool _r = o->begin(reinterpret_cast<QPaintDevice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->beginNativePainting();
                stack[0].type = PlastiQ::Void; break;
        case 4: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QRect *_r = new QRect(o->boundingRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    (*reinterpret_cast< QTextOption(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->brushOrigin());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->clipBoundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->clipPath());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->clipRegion());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->combinedTransform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { qint64 _r = o->compositionMode(); // HACK for CompositionMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { QPaintDevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPaintDevice"; } break;
        case 17: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->deviceTransform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: o->drawArc((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->drawArc((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->drawArc(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->drawChord((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->drawChord(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->drawChord((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->drawConvexPolygon(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->drawConvexPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->drawConvexPolygon(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->drawConvexPolygon((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->drawEllipse((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->drawEllipse((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->drawEllipse(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->drawEllipse((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->drawEllipse((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->drawGlyphRun((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QGlyphRun(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->drawImage((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->drawImage((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)),
                    Qt::ImageConversionFlags(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->drawImage((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->drawImage((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)),
                    Qt::ImageConversionFlags(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->drawImage((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->drawImage((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)),
                    Qt::ImageConversionFlags(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->drawImage((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->drawImage((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)),
                    Qt::ImageConversionFlags(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->drawImage((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->drawImage((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->drawImage((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: o->drawImage((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QImage(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->drawImage(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QImage(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 47: o->drawImage(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QImage(*) >(stack[3].s_voidp)),
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->drawImage(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QImage(*) >(stack[3].s_voidp)),
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->drawImage(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QImage(*) >(stack[3].s_voidp)),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 50: o->drawImage(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QImage(*) >(stack[3].s_voidp)),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 51: o->drawImage(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QImage(*) >(stack[3].s_voidp)),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int,
                    Qt::ImageConversionFlags(stack[8].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 52: o->drawLine((*reinterpret_cast< QLineF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 53: o->drawLine((*reinterpret_cast< QLine(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 54: o->drawLine(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 55: o->drawLine((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 56: o->drawLine((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 57: o->drawLines(reinterpret_cast<const QLineF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 58: o->drawLines((*reinterpret_cast< QVector<QLineF>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 59: o->drawLines(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 60: o->drawLines((*reinterpret_cast< QVector<QPointF>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 61: o->drawLines(reinterpret_cast<const QLine*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 62: o->drawLines((*reinterpret_cast< QVector<QLine>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 63: o->drawLines(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 64: o->drawLines((*reinterpret_cast< QVector<QPoint>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 65: o->drawPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 66: o->drawPicture((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPicture(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 67: o->drawPicture(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QPicture(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 68: o->drawPicture((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPicture(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 69: o->drawPie((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 70: o->drawPie(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 71: o->drawPie((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 72: o->drawPixmap((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 73: o->drawPixmap((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 74: o->drawPixmap(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[5].s_voidp)),
                    stack[6].s_int,
                    stack[7].s_int,
                    stack[8].s_int,
                    stack[9].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 75: o->drawPixmap(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[3].s_voidp)),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 76: o->drawPixmap((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRectF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 77: o->drawPixmap((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 78: o->drawPixmap((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 79: o->drawPixmap((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 80: o->drawPixmap(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 81: o->drawPixmap((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 82: o->drawPixmap(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[5].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 83: o->drawPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 84: o->drawPoint((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 85: o->drawPoint(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 86: o->drawPoints(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 87: o->drawPoints((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 88: o->drawPoints(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 89: o->drawPoints((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 90: o->drawPolygon(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 91: o->drawPolygon(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int,
                    Qt::FillRule(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 92: o->drawPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 93: o->drawPolygon((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)),
                    Qt::FillRule(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 94: o->drawPolygon(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 95: o->drawPolygon(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int,
                    Qt::FillRule(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 96: o->drawPolygon((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 97: o->drawPolygon((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp)),
                    Qt::FillRule(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 98: o->drawPolyline(reinterpret_cast<const QPointF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 99: o->drawPolyline((*reinterpret_cast< QPolygonF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 100: o->drawPolyline(reinterpret_cast<const QPoint*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 101: o->drawPolyline((*reinterpret_cast< QPolygon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 102: o->drawRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 103: o->drawRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 104: o->drawRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 105: o->drawRects(reinterpret_cast<const QRectF*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 106: o->drawRects((*reinterpret_cast< QVector<QRectF>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 107: o->drawRects(reinterpret_cast<const QRect*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 108: o->drawRects((*reinterpret_cast< QVector<QRect>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 109: o->drawRoundedRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 110: o->drawRoundedRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double,
                    Qt::SizeMode(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 111: o->drawRoundedRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_double,
                    stack[6].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 112: o->drawRoundedRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_double,
                    stack[6].s_double,
                    Qt::SizeMode(stack[7].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 113: o->drawRoundedRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 114: o->drawRoundedRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double,
                    Qt::SizeMode(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 115: o->drawStaticText((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStaticText(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 116: o->drawStaticText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStaticText(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 117: o->drawStaticText(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QStaticText(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 118: o->drawText((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 119: o->drawText((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 120: o->drawText(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 121: o->drawText((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 122: o->drawText((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string,
                    reinterpret_cast<QRectF*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 123: o->drawText((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 124: o->drawText((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string,
                    reinterpret_cast<QRect*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 125: o->drawText(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 126: o->drawText(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_string,
                    reinterpret_cast<QRect*>(stack[7].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 127: o->drawText((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 128: o->drawText((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    (*reinterpret_cast< QTextOption(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 129: o->drawTiledPixmap((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 130: o->drawTiledPixmap((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 131: o->drawTiledPixmap(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[5].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 132: o->drawTiledPixmap(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[5].s_voidp)),
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 133: o->drawTiledPixmap(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[5].s_voidp)),
                    stack[6].s_int,
                    stack[7].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 134: o->drawTiledPixmap((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 135: o->drawTiledPixmap((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 136: { bool _r = o->end();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 137: o->endNativePainting();
                stack[0].type = PlastiQ::Void; break;
        case 138: o->eraseRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 139: o->eraseRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 140: o->eraseRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 141: o->fillPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 142: o->fillRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 143: o->fillRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QBrush(*) >(stack[5].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 144: o->fillRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QBrush(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 145: o->fillRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 146: o->fillRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[5].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 147: o->fillRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 148: o->fillRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    Qt::GlobalColor(stack[5].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 149: o->fillRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    Qt::GlobalColor(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 150: o->fillRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    Qt::GlobalColor(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 151: o->fillRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    Qt::BrushStyle(stack[5].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 152: o->fillRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    Qt::BrushStyle(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 153: o->fillRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    Qt::BrushStyle(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 154: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 155: { /* COPY OBJECT */
            QFontInfo *_r = new QFontInfo(o->fontInfo());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFontInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 156: { /* COPY OBJECT */
            QFontMetrics *_r = new QFontMetrics(o->fontMetrics());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFontMetrics";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 157: { bool _r = o->hasClipping();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 158: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 159: { qint64 _r = o->layoutDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 160: { double _r = o->opacity();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 161: { QPaintEngine* _r = o->paintEngine();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QPaintEngine"; } break;
        case 162: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 163: { qint64 _r = o->renderHints(); // HACK for RenderHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 164: o->resetTransform();
                stack[0].type = PlastiQ::Void; break;
        case 165: o->restore();
                stack[0].type = PlastiQ::Void; break;
        case 166: o->rotate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 167: o->save();
                stack[0].type = PlastiQ::Void; break;
        case 168: o->scale(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 169: o->setBackground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 170: o->setBackgroundMode(Qt::BGMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 171: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 172: o->setBrush(Qt::BrushStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 173: o->setBrushOrigin((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 174: o->setBrushOrigin((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 175: o->setBrushOrigin(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 176: o->setClipPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 177: o->setClipPath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    Qt::ClipOperation(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 178: o->setClipRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 179: o->setClipRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    Qt::ClipOperation(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 180: o->setClipRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 181: o->setClipRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    Qt::ClipOperation(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 182: o->setClipRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 183: o->setClipRect(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    Qt::ClipOperation(stack[5].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 184: o->setClipRegion((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 185: o->setClipRegion((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp)),
                    Qt::ClipOperation(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 186: o->setClipping(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 187: o->setCompositionMode(QPainter::CompositionMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 188: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 189: o->setLayoutDirection(Qt::LayoutDirection(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 190: o->setOpacity(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 191: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 192: o->setPen((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 193: o->setPen(Qt::PenStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 194: o->setRenderHint(QPainter::RenderHint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 195: o->setRenderHint(QPainter::RenderHint(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 196: o->setRenderHints(QPainter::RenderHints(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 197: o->setRenderHints(QPainter::RenderHints(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 198: o->setTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 199: o->setTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 200: o->setViewTransformEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 201: o->setViewport((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 202: o->setViewport(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 203: o->setWindow((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 204: o->setWindow(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 205: o->setWorldMatrixEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 206: o->setWorldTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 207: o->setWorldTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 208: o->shear(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 209: o->strokePath((*reinterpret_cast< QPainterPath(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPen(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 210: { bool _r = o->testRenderHint(QPainter::RenderHint(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 211: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->transform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 212: o->translate((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 213: o->translate((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 214: o->translate(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 215: { bool _r = o->viewTransformEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 216: { /* COPY OBJECT */
            QRect *_r = new QRect(o->viewport());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 217: { /* COPY OBJECT */
            QRect *_r = new QRect(o->window());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 218: { bool _r = o->worldMatrixEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 219: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->worldTransform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QPainter *o = reinterpret_cast<QPainter*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPainter::~PlastiQQPainter() {
    QPainter* o = reinterpret_cast<QPainter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
