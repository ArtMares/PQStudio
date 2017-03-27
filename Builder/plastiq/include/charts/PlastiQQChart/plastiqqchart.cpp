#include "plastiqmethod.h"
#include "plastiqqchart.h"

#include "widgets/PlastiQQGraphicsWidget/plastiqqgraphicswidget.h"
#include <QChart> 
#include <QEasingCurve>
#include <QAbstractAxis>
#include <QBrush>
#include <QPen>
#include <QLegend>
#include <QLocale>
#include <QPointF>
#include <QMargins>
#include <QRectF>
#include <QString>
#include <QFont>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQChart::plastiqConstructors = {
    { "QChart()", { "QChart", "", "QChart*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChart(QGraphicsItem*)", { "QChart", "QGraphicsItem*", "QChart*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QChart(QGraphicsItem*,enum)", { "QChart", "QGraphicsItem*,Qt::WindowFlags", "QChart*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQChart::plastiqMethods = {
    { "addAxis(QAbstractAxis*,enum)", { "addAxis", "QAbstractAxis*,Qt::Alignment", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSeries(QAbstractSeries*)", { "addSeries", "QAbstractSeries*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "animationDuration()", { "animationDuration", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "animationEasingCurve()", { "animationEasingCurve", "", "QEasingCurve", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "animationOptions()", { "animationOptions", "", "AnimationOptions", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "axisX()", { "axisX", "", "QAbstractAxis*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "axisX(QAbstractSeries*)", { "axisX", "QAbstractSeries*", "QAbstractAxis*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "axisY()", { "axisY", "", "QAbstractAxis*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "axisY(QAbstractSeries*)", { "axisY", "QAbstractSeries*", "QAbstractAxis*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundBrush()", { "backgroundBrush", "", "QBrush", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundPen()", { "backgroundPen", "", "QPen", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundRoundness()", { "backgroundRoundness", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "chartType()", { "chartType", "", "ChartType", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createDefaultAxes()", { "createDefaultAxes", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBackgroundVisible()", { "isBackgroundVisible", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDropShadowEnabled()", { "isDropShadowEnabled", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPlotAreaBackgroundVisible()", { "isPlotAreaBackgroundVisible", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isZoomed()", { "isZoomed", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "legend()", { "legend", "", "QLegend*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "locale()", { "locale", "", "QLocale", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "localizeNumbers()", { "localizeNumbers", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToPosition(QPointF&)", { "mapToPosition", "QPointF&", "QPointF", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToPosition(QPointF&,QAbstractSeries*)", { "mapToPosition", "QPointF&,QAbstractSeries*", "QPointF", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToValue(QPointF&)", { "mapToValue", "QPointF&", "QPointF", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToValue(QPointF&,QAbstractSeries*)", { "mapToValue", "QPointF&,QAbstractSeries*", "QPointF", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "margins()", { "margins", "", "QMargins", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "plotArea()", { "plotArea", "", "QRectF", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "plotAreaBackgroundBrush()", { "plotAreaBackgroundBrush", "", "QBrush", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "plotAreaBackgroundPen()", { "plotAreaBackgroundPen", "", "QPen", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAllSeries()", { "removeAllSeries", "", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAxis(QAbstractAxis*)", { "removeAxis", "QAbstractAxis*", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeSeries(QAbstractSeries*)", { "removeSeries", "QAbstractSeries*", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(double,double)", { "scroll", "qreal,qreal", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnimationDuration(int)", { "setAnimationDuration", "int", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnimationEasingCurve(QEasingCurve&)", { "setAnimationEasingCurve", "QEasingCurve&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnimationOptions(enum)", { "setAnimationOptions", "AnimationOptions", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAxisX(QAbstractAxis*)", { "setAxisX", "QAbstractAxis*", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAxisX(QAbstractAxis*,QAbstractSeries*)", { "setAxisX", "QAbstractAxis*,QAbstractSeries*", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAxisY(QAbstractAxis*)", { "setAxisY", "QAbstractAxis*", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAxisY(QAbstractAxis*,QAbstractSeries*)", { "setAxisY", "QAbstractAxis*,QAbstractSeries*", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundBrush(QBrush&)", { "setBackgroundBrush", "QBrush&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundPen(QPen&)", { "setBackgroundPen", "QPen&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundRoundness(double)", { "setBackgroundRoundness", "qreal", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundVisible()", { "setBackgroundVisible", "", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundVisible(bool)", { "setBackgroundVisible", "bool", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDropShadowEnabled()", { "setDropShadowEnabled", "", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDropShadowEnabled(bool)", { "setDropShadowEnabled", "bool", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocale(QLocale&)", { "setLocale", "QLocale&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalizeNumbers(bool)", { "setLocalizeNumbers", "bool", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMargins(QMargins&)", { "setMargins", "QMargins&", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlotAreaBackgroundBrush(QBrush&)", { "setPlotAreaBackgroundBrush", "QBrush&", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlotAreaBackgroundPen(QPen&)", { "setPlotAreaBackgroundPen", "QPen&", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlotAreaBackgroundVisible()", { "setPlotAreaBackgroundVisible", "", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlotAreaBackgroundVisible(bool)", { "setPlotAreaBackgroundVisible", "bool", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTheme(enum)", { "setTheme", "QChart::ChartTheme", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitle(QString)", { "setTitle", "QString&", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleBrush(QBrush&)", { "setTitleBrush", "QBrush&", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleFont(QFont&)", { "setTitleFont", "QFont&", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "theme()", { "theme", "", "QChart::ChartTheme", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "titleBrush()", { "titleBrush", "", "QBrush", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "titleFont()", { "titleFont", "", "QFont", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoom(double)", { "zoom", "qreal", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomIn()", { "zoomIn", "", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomIn(QRectF&)", { "zoomIn", "QRectF&", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomOut()", { "zoomOut", "", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomReset()", { "zoomReset", "", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQChart::plastiqSignals = {
    { "plotAreaChanged(QRectF&)", { "plotAreaChanged", "QRectF&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQChart::plastiqProperties = {
    { "animationDuration", { "animationDuration", "int", "setAnimationDuration", "animationDuration" } },
    { "animationEasingCurve", { "animationEasingCurve", "QEasingCurve", "setAnimationEasingCurve", "animationEasingCurve" } },
    { "animationOptions", { "animationOptions", "long", "setAnimationOptions", "animationOptions" } },
    { "backgroundRoundness", { "backgroundRoundness", "qreal", "setBackgroundRoundness", "backgroundRoundness" } },
    { "backgroundVisible", { "backgroundVisible", "bool", "setBackgroundVisible", "isBackgroundVisible" } },
    { "chartType", { "chartType", "long", "", "chartType" } },
    { "dropShadowEnabled", { "dropShadowEnabled", "bool", "setDropShadowEnabled", "isDropShadowEnabled" } },
    { "locale", { "locale", "QLocale", "setLocale", "locale" } },
    { "localizeNumbers", { "localizeNumbers", "bool", "setLocalizeNumbers", "localizeNumbers" } },
    { "margins", { "margins", "QMargins", "setMargins", "margins" } },
    { "plotArea", { "plotArea", "QRectF", "plotAreaChanged", "plotArea" } },
    { "plotAreaBackgroundVisible", { "plotAreaBackgroundVisible", "bool", "setPlotAreaBackgroundVisible", "isPlotAreaBackgroundVisible" } },
    { "theme", { "theme", "long", "setTheme", "theme" } },
    { "title", { "title", "QString", "setTitle", "title" } },

};

QHash<QByteArray, long> PlastiQQChart::plastiqConstants = {

    /* QChart::AnimationOption */
   { "NoAnimation", QChart::NoAnimation },
   { "GridAxisAnimations", QChart::GridAxisAnimations },
   { "SeriesAnimations", QChart::SeriesAnimations },
   { "AllAnimations", QChart::AllAnimations },

    /* QChart::ChartTheme */
   { "ChartThemeLight", QChart::ChartThemeLight },
   { "ChartThemeBlueCerulean", QChart::ChartThemeBlueCerulean },
   { "ChartThemeDark", QChart::ChartThemeDark },
   { "ChartThemeBrownSand", QChart::ChartThemeBrownSand },
   { "ChartThemeBlueNcs", QChart::ChartThemeBlueNcs },
   { "ChartThemeHighContrast", QChart::ChartThemeHighContrast },
   { "ChartThemeBlueIcy", QChart::ChartThemeBlueIcy },
   { "ChartThemeQt", QChart::ChartThemeQt },

    /* QChart::ChartType */
   { "ChartTypeUndefined", QChart::ChartTypeUndefined },
   { "ChartTypeCartesian", QChart::ChartTypeCartesian },
   { "ChartTypePolar", QChart::ChartTypePolar },

};

QVector<PlastiQMetaObject*> PlastiQQChart::plastiqInherits = { &PlastiQQGraphicsWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQChart::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQChart::plastiq_static_metaObject = {
    { &PlastiQQGraphicsWidget::plastiq_static_metaObject, &plastiqInherits, "QChart", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQChart::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQChart::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QChart *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QChart(); break;
        case 1: o = new QChart(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp)); break;
        case 2: o = new QChart(reinterpret_cast<QGraphicsItem*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQChart *p = new PlastiQQChart();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQChart *p = new PlastiQQChart();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 67) {
            id -= 67;
            PlastiQQGraphicsWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QChart *o = sc ? Q_NULLPTR : reinterpret_cast<QChart*>(object->plastiq_data());

        switch(id) {
        case 0: o->addAxis(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp),
                    Qt::Alignment(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addSeries(reinterpret_cast<QAbstractSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { int _r = o->animationDuration();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QEasingCurve *_r = new QEasingCurve(o->animationEasingCurve());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QEasingCurve";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->animationOptions(); // HACK for AnimationOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QAbstractAxis* _r = o->axisX();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractAxis"; } break;
        case 6: { QAbstractAxis* _r = o->axisX(reinterpret_cast<QAbstractSeries*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractAxis"; } break;
        case 7: { QAbstractAxis* _r = o->axisY();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractAxis"; } break;
        case 8: { QAbstractAxis* _r = o->axisY(reinterpret_cast<QAbstractSeries*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractAxis"; } break;
        case 9: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->backgroundBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QPen *_r = new QPen(o->backgroundPen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { double _r = o->backgroundRoundness();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { qint64 _r = o->chartType(); // HACK for ChartType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: o->createDefaultAxes();
                stack[0].type = PlastiQ::Void; break;
        case 14: { bool _r = o->isBackgroundVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isDropShadowEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isPlotAreaBackgroundVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isZoomed();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { QLegend* _r = o->legend();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QLegend"; } break;
        case 19: { /* COPY OBJECT */
            QLocale *_r = new QLocale(o->locale());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { bool _r = o->localizeNumbers();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToPosition((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToPosition((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QAbstractSeries*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToValue((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToValue((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QAbstractSeries*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->margins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->plotArea());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->plotAreaBackgroundBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QPen *_r = new QPen(o->plotAreaBackgroundPen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: o->removeAllSeries();
                stack[0].type = PlastiQ::Void; break;
        case 30: o->removeAxis(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->removeSeries(reinterpret_cast<QAbstractSeries*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->scroll(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setAnimationDuration(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setAnimationEasingCurve((*reinterpret_cast< QEasingCurve(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setAnimationOptions(QChart::AnimationOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setAxisX(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setAxisX(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractSeries*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setAxisY(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setAxisY(reinterpret_cast<QAbstractAxis*>(stack[1].s_voidp),
                    reinterpret_cast<QAbstractSeries*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setBackgroundBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setBackgroundPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setBackgroundRoundness(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setBackgroundVisible();
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setBackgroundVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setDropShadowEnabled();
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setDropShadowEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setLocale((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setLocalizeNumbers(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setMargins((*reinterpret_cast< QMargins(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setPlotAreaBackgroundBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setPlotAreaBackgroundPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setPlotAreaBackgroundVisible();
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setPlotAreaBackgroundVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 54: o->setTheme(QChart::ChartTheme(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 55: o->setTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 56: o->setTitleBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 57: o->setTitleFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 58: { qint64 _r = o->theme(); // HACK for QChart::ChartTheme 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 59: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 60: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->titleBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 61: { /* COPY OBJECT */
            QFont *_r = new QFont(o->titleFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 62: o->zoom(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 63: o->zoomIn();
                stack[0].type = PlastiQ::Void; break;
        case 64: o->zoomIn((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 65: o->zoomOut();
                stack[0].type = PlastiQ::Void; break;
        case 66: o->zoomReset();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQGraphicsWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QChart *o = reinterpret_cast<QChart*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QChart::plotAreaChanged,
            [=](const QRectF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QRectF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRectF";
                PlastiQ_activate(sender, "plotAreaChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QChart *o = reinterpret_cast<QChart*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QChart *o = reinterpret_cast<QChart*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QChart *o = reinterpret_cast<QChart*>(object->plastiq_data());

        if(className == "QGraphicsWidget") {
            stack[0].s_voidp = static_cast<QGraphicsWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQChart::~PlastiQQChart() {
    QChart* o = reinterpret_cast<QChart*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
