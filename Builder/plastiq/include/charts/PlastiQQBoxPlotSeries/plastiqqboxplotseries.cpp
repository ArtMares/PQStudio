#include "plastiqmethod.h"
#include "plastiqqboxplotseries.h"

#include "charts/PlastiQQAbstractSeries/plastiqqabstractseries.h"
#include <QBoxPlotSeries> 
#include <QBrush>
#include <QPen>
#include <QList>
#include <QBoxSet>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQBoxPlotSeries::plastiqConstructors = {
    { "QBoxPlotSeries()", { "QBoxPlotSeries", "", "QBoxPlotSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBoxPlotSeries(QObject*)", { "QBoxPlotSeries", "QObject*", "QBoxPlotSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBoxPlotSeries::plastiqMethods = {
    { "append(QBoxSet*)", { "append", "QBoxSet*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QList<QBoxSet*>)", { "append", "QList<QBoxSet*>", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boxOutlineVisible()", { "boxOutlineVisible", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boxWidth()", { "boxWidth", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QBoxSet*)", { "insert", "int,QBoxSet*", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QBoxSet*)", { "remove", "QBoxSet*", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBoxOutlineVisible(bool)", { "setBoxOutlineVisible", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBoxWidth(double)", { "setBoxWidth", "qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "take(QBoxSet*)", { "take", "QBoxSet*", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBoxPlotSeries::plastiqSignals = {
    { "boxOutlineVisibilityChanged()", { "boxOutlineVisibilityChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "boxWidthChanged()", { "boxWidthChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "boxsetsAdded(QList<QBoxSet*>)", { "boxsetsAdded", "QList<QBoxSet*>", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "boxsetsRemoved(QList<QBoxSet*>)", { "boxsetsRemoved", "QList<QBoxSet*>", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "brushChanged()", { "brushChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(QBoxSet*)", { "clicked", "QBoxSet*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "countChanged()", { "countChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked(QBoxSet*)", { "doubleClicked", "QBoxSet*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool,QBoxSet*)", { "hovered", "bool,QBoxSet*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged()", { "penChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed(QBoxSet*)", { "pressed", "QBoxSet*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released(QBoxSet*)", { "released", "QBoxSet*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQBoxPlotSeries::plastiqProperties = {
    { "boxOutlineVisible", { "boxOutlineVisible", "bool", "setBoxOutlineVisible", "boxOutlineVisible" } },
    { "boxWidth", { "boxWidth", "qreal", "setBoxWidth", "boxWidth" } },
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "count", { "count", "int", "countChanged", "count" } },
    { "pen", { "pen", "QPen", "setPen", "pen" } },

};

QHash<QByteArray, long> PlastiQQBoxPlotSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBoxPlotSeries::plastiqInherits = { &PlastiQQAbstractSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBoxPlotSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQBoxPlotSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractSeries::plastiq_static_metaObject, &plastiqInherits, "QBoxPlotSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBoxPlotSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBoxPlotSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBoxPlotSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBoxPlotSeries(); break;
        case 1: o = new QBoxPlotSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBoxPlotSeries *p = new PlastiQQBoxPlotSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBoxPlotSeries *p = new PlastiQQBoxPlotSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBoxPlotSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QBoxPlotSeries*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->append(reinterpret_cast<QBoxSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: /* o->append(UNSUPPORTED_TYPE_QList<QBoxSet*>) | ret: `bool` */ break;
        case 2: { bool _r = o->boxOutlineVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { double _r = o->boxWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 6: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { bool _r = o->insert(stack[1].s_int,
                    reinterpret_cast<QBoxSet*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { bool _r = o->remove(reinterpret_cast<QBoxSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->setBoxOutlineVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setBoxWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: { bool _r = o->take(reinterpret_cast<QBoxSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 12) {
            id -= 12;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QBoxPlotSeries *o = reinterpret_cast<QBoxPlotSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QBoxPlotSeries::boxOutlineVisibilityChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "boxOutlineVisibilityChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QBoxPlotSeries::boxWidthChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "boxWidthChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QBoxPlotSeries::boxsetsAdded,
            [=](QList<QBoxSet*> arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QBoxSet*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "boxsetsAdded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QBoxPlotSeries::boxsetsRemoved,
            [=](QList<QBoxSet*> arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QBoxSet*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "boxsetsRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QBoxPlotSeries::brushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "brushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QBoxPlotSeries::clicked,
            [=](QBoxSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QBoxSet";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QBoxPlotSeries::countChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "countChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QBoxPlotSeries::doubleClicked,
            [=](QBoxSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QBoxSet";
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QBoxPlotSeries::hovered,
            [=](bool arg0, QBoxSet* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QBoxSet";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QBoxPlotSeries::penChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QBoxPlotSeries::pressed,
            [=](QBoxSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QBoxSet";
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QBoxPlotSeries::released,
            [=](QBoxSet* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QBoxSet";
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QBoxPlotSeries *o = reinterpret_cast<QBoxPlotSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QBoxPlotSeries *o = reinterpret_cast<QBoxPlotSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QBoxPlotSeries *o = reinterpret_cast<QBoxPlotSeries*>(object->plastiq_data());

        if(className == "QAbstractSeries") {
            stack[0].s_voidp = static_cast<QAbstractSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBoxPlotSeries::~PlastiQQBoxPlotSeries() {
    QBoxPlotSeries* o = reinterpret_cast<QBoxPlotSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
