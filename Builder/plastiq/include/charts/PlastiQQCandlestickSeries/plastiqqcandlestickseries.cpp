#include "plastiqmethod.h"
#include "plastiqqcandlestickseries.h"

#include "charts/PlastiQQAbstractSeries/plastiqqabstractseries.h"
#include <QCandlestickSeries> 
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QList>
#include <QCandlestickSet>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickSeries::plastiqConstructors = {
    { "QCandlestickSeries()", { "QCandlestickSeries", "", "QCandlestickSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCandlestickSeries(QObject*)", { "QCandlestickSeries", "QObject*", "QCandlestickSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickSeries::plastiqMethods = {
    { "append(QCandlestickSet*)", { "append", "QCandlestickSet*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QList<QCandlestickSet*>&)", { "append", "QList<QCandlestickSet*>&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bodyOutlineVisible()", { "bodyOutlineVisible", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bodyWidth()", { "bodyWidth", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capsVisible()", { "capsVisible", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capsWidth()", { "capsWidth", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "decreasingColor()", { "decreasingColor", "", "QColor", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "increasingColor()", { "increasingColor", "", "QColor", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QCandlestickSet*)", { "insert", "int,QCandlestickSet*", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumColumnWidth()", { "maximumColumnWidth", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumColumnWidth()", { "minimumColumnWidth", "", "qreal", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QCandlestickSet*)", { "remove", "QCandlestickSet*", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QList<QCandlestickSet*>&)", { "remove", "QList<QCandlestickSet*>&", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBodyOutlineVisible(bool)", { "setBodyOutlineVisible", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBodyWidth(double)", { "setBodyWidth", "qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCapsVisible(bool)", { "setCapsVisible", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCapsWidth(double)", { "setCapsWidth", "qreal", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDecreasingColor(QColor&)", { "setDecreasingColor", "QColor&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIncreasingColor(QColor&)", { "setIncreasingColor", "QColor&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumColumnWidth(double)", { "setMaximumColumnWidth", "qreal", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumColumnWidth(double)", { "setMinimumColumnWidth", "qreal", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "take(QCandlestickSet*)", { "take", "QCandlestickSet*", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickSeries::plastiqSignals = {
    { "bodyOutlineVisibilityChanged()", { "bodyOutlineVisibilityChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "bodyWidthChanged()", { "bodyWidthChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "brushChanged()", { "brushChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "candlestickSetsAdded(QList<QCandlestickSet*>&)", { "candlestickSetsAdded", "QList<QCandlestickSet*>&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "candlestickSetsRemoved(QList<QCandlestickSet*>&)", { "candlestickSetsRemoved", "QList<QCandlestickSet*>&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "capsVisibilityChanged()", { "capsVisibilityChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "capsWidthChanged()", { "capsWidthChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(QCandlestickSet*)", { "clicked", "QCandlestickSet*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "countChanged()", { "countChanged", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "decreasingColorChanged()", { "decreasingColorChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked(QCandlestickSet*)", { "doubleClicked", "QCandlestickSet*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool,QCandlestickSet*)", { "hovered", "bool,QCandlestickSet*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "increasingColorChanged()", { "increasingColorChanged", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maximumColumnWidthChanged()", { "maximumColumnWidthChanged", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minimumColumnWidthChanged()", { "minimumColumnWidthChanged", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged()", { "penChanged", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed(QCandlestickSet*)", { "pressed", "QCandlestickSet*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released(QCandlestickSet*)", { "released", "QCandlestickSet*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCandlestickSeries::plastiqProperties = {
    { "bodyOutlineVisible", { "bodyOutlineVisible", "bool", "setBodyOutlineVisible", "bodyOutlineVisible" } },
    { "bodyWidth", { "bodyWidth", "qreal", "setBodyWidth", "bodyWidth" } },
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "capsVisible", { "capsVisible", "bool", "setCapsVisible", "capsVisible" } },
    { "capsWidth", { "capsWidth", "qreal", "setCapsWidth", "capsWidth" } },
    { "count", { "count", "int", "countChanged", "count" } },
    { "decreasingColor", { "decreasingColor", "QColor", "setDecreasingColor", "decreasingColor" } },
    { "increasingColor", { "increasingColor", "QColor", "setIncreasingColor", "increasingColor" } },
    { "maximumColumnWidth", { "maximumColumnWidth", "qreal", "setMaximumColumnWidth", "maximumColumnWidth" } },
    { "minimumColumnWidth", { "minimumColumnWidth", "qreal", "setMinimumColumnWidth", "minimumColumnWidth" } },
    { "pen", { "pen", "QPen", "setPen", "pen" } },

};

QHash<QByteArray, long> PlastiQQCandlestickSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCandlestickSeries::plastiqInherits = { &PlastiQQAbstractSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCandlestickSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCandlestickSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractSeries::plastiq_static_metaObject, &plastiqInherits, "QCandlestickSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCandlestickSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCandlestickSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCandlestickSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCandlestickSeries(); break;
        case 1: o = new QCandlestickSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCandlestickSeries *p = new PlastiQQCandlestickSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCandlestickSeries *p = new PlastiQQCandlestickSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCandlestickSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QCandlestickSeries*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->append(reinterpret_cast<QCandlestickSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->append((*reinterpret_cast< QList<QCandlestickSet*>(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->bodyOutlineVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { double _r = o->bodyWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { bool _r = o->capsVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { double _r = o->capsWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 8: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { /* COPY OBJECT */
            QColor *_r = new QColor(o->decreasingColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QColor *_r = new QColor(o->increasingColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { bool _r = o->insert(stack[1].s_int,
                    reinterpret_cast<QCandlestickSet*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { double _r = o->maximumColumnWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { double _r = o->minimumColumnWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { bool _r = o->remove(reinterpret_cast<QCandlestickSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->remove((*reinterpret_cast< QList<QCandlestickSet*>(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: o->setBodyOutlineVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setBodyWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setCapsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setCapsWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setDecreasingColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setIncreasingColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setMaximumColumnWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setMinimumColumnWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: { bool _r = o->take(reinterpret_cast<QCandlestickSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 18) {
            id -= 18;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCandlestickSeries *o = reinterpret_cast<QCandlestickSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCandlestickSeries::bodyOutlineVisibilityChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "bodyOutlineVisibilityChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCandlestickSeries::bodyWidthChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "bodyWidthChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCandlestickSeries::brushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "brushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCandlestickSeries::candlestickSetsAdded,
            [=](const QList<QCandlestickSet*>& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&const_cast<QList<QCandlestickSet*>&>(arg0));
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QCandlestickSet*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "candlestickSetsAdded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QCandlestickSeries::candlestickSetsRemoved,
            [=](const QList<QCandlestickSet*>& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&const_cast<QList<QCandlestickSet*>&>(arg0));
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QCandlestickSet*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "candlestickSetsRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QCandlestickSeries::capsVisibilityChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "capsVisibilityChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QCandlestickSeries::capsWidthChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "capsWidthChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QCandlestickSeries::clicked,
            [=](QCandlestickSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QCandlestickSet";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QCandlestickSeries::countChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "countChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QCandlestickSeries::decreasingColorChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "decreasingColorChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QCandlestickSeries::doubleClicked,
            [=](QCandlestickSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QCandlestickSet";
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QCandlestickSeries::hovered,
            [=](bool arg0, QCandlestickSet* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QCandlestickSet";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QCandlestickSeries::increasingColorChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "increasingColorChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QCandlestickSeries::maximumColumnWidthChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "maximumColumnWidthChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QCandlestickSeries::minimumColumnWidthChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "minimumColumnWidthChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QCandlestickSeries::penChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 16: QObject::connect(o, &QCandlestickSeries::pressed,
            [=](QCandlestickSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QCandlestickSet";
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 17: QObject::connect(o, &QCandlestickSeries::released,
            [=](QCandlestickSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QCandlestickSet";
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCandlestickSeries *o = reinterpret_cast<QCandlestickSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCandlestickSeries *o = reinterpret_cast<QCandlestickSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCandlestickSeries *o = reinterpret_cast<QCandlestickSeries*>(object->plastiq_data());

        if(className == "QAbstractSeries") {
            stack[0].s_voidp = static_cast<QAbstractSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCandlestickSeries::~PlastiQQCandlestickSeries() {
    QCandlestickSeries* o = reinterpret_cast<QCandlestickSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
