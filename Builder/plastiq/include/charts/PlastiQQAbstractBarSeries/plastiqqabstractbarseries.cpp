#include "plastiqmethod.h"
#include "plastiqqabstractbarseries.h"

#include "charts/PlastiQQAbstractSeries/plastiqqabstractseries.h"
#include <QAbstractBarSeries> 
#include <QString>
#include <QList>
#include <QBarSet>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractBarSeries::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractBarSeries::plastiqMethods = {
    { "append(QBarSet*)", { "append", "QBarSet*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QList<QBarSet*>)", { "append", "QList<QBarSet*>", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "barWidth()", { "barWidth", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QBarSet*)", { "insert", "int,QBarSet*", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLabelsVisible()", { "isLabelsVisible", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsAngle()", { "labelsAngle", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsFormat()", { "labelsFormat", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsPosition()", { "labelsPosition", "", "QAbstractBarSeries::LabelsPosition", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QBarSet*)", { "remove", "QBarSet*", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBarWidth(double)", { "setBarWidth", "qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsAngle(double)", { "setLabelsAngle", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsFormat(QString)", { "setLabelsFormat", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsPosition(enum)", { "setLabelsPosition", "QAbstractBarSeries::LabelsPosition", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsVisible()", { "setLabelsVisible", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsVisible(bool)", { "setLabelsVisible", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "take(QBarSet*)", { "take", "QBarSet*", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractBarSeries::plastiqSignals = {
    { "barsetsAdded(QList<QBarSet*>)", { "barsetsAdded", "QList<QBarSet*>", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "barsetsRemoved(QList<QBarSet*>)", { "barsetsRemoved", "QList<QBarSet*>", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(int,QBarSet*)", { "clicked", "int,QBarSet*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "countChanged()", { "countChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked(int,QBarSet*)", { "doubleClicked", "int,QBarSet*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool,int,QBarSet*)", { "hovered", "bool,int,QBarSet*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsAngleChanged(double)", { "labelsAngleChanged", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsFormatChanged(QString)", { "labelsFormatChanged", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsPositionChanged(enum)", { "labelsPositionChanged", "QAbstractBarSeries::LabelsPosition", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsVisibleChanged()", { "labelsVisibleChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed(int,QBarSet*)", { "pressed", "int,QBarSet*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released(int,QBarSet*)", { "released", "int,QBarSet*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractBarSeries::plastiqProperties = {
    { "barWidth", { "barWidth", "qreal", "setBarWidth", "barWidth" } },
    { "count", { "count", "int", "countChanged", "count" } },
    { "labelsAngle", { "labelsAngle", "qreal", "setLabelsAngle", "labelsAngle" } },
    { "labelsFormat", { "labelsFormat", "QString", "setLabelsFormat", "labelsFormat" } },
    { "labelsPosition", { "labelsPosition", "long", "setLabelsPosition", "labelsPosition" } },
    { "labelsVisible", { "labelsVisible", "bool", "setLabelsVisible", "isLabelsVisible" } },

};

QHash<QByteArray, long> PlastiQQAbstractBarSeries::plastiqConstants = {

    /* QAbstractBarSeries::LabelsPosition */
   { "LabelsCenter", QAbstractBarSeries::LabelsCenter },
   { "LabelsInsideEnd", QAbstractBarSeries::LabelsInsideEnd },
   { "LabelsInsideBase", QAbstractBarSeries::LabelsInsideBase },
   { "LabelsOutsideEnd", QAbstractBarSeries::LabelsOutsideEnd },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractBarSeries::plastiqInherits = { &PlastiQQAbstractSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractBarSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractBarSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractSeries::plastiq_static_metaObject, &plastiqInherits, "QAbstractBarSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractBarSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractBarSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractBarSeries *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractBarSeries *p = new PlastiQQAbstractBarSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractBarSeries *p = new PlastiQQAbstractBarSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractBarSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractBarSeries*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->append(reinterpret_cast<QBarSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: /* o->append(UNSUPPORTED_TYPE_QList<QBarSet*>) | ret: `bool` */ break;
        case 2: { double _r = o->barWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { bool _r = o->insert(stack[1].s_int,
                    reinterpret_cast<QBarSet*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isLabelsVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { double _r = o->labelsAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { QString _r = o->labelsFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { qint64 _r = o->labelsPosition(); // HACK for QAbstractBarSeries::LabelsPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { bool _r = o->remove(reinterpret_cast<QBarSet*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: o->setBarWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setLabelsAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setLabelsFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setLabelsPosition(QAbstractBarSeries::LabelsPosition(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setLabelsVisible();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setLabelsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: { bool _r = o->take(reinterpret_cast<QBarSet*>(stack[1].s_voidp));
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

        QAbstractBarSeries *o = reinterpret_cast<QAbstractBarSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractBarSeries::barsetsAdded,
            [=](QList<QBarSet*> arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QBarSet*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "barsetsAdded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractBarSeries::barsetsRemoved,
            [=](QList<QBarSet*> arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QBarSet*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "barsetsRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractBarSeries::clicked,
            [=](int arg0, QBarSet* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QBarSet";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractBarSeries::countChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "countChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAbstractBarSeries::doubleClicked,
            [=](int arg0, QBarSet* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QBarSet";
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QAbstractBarSeries::hovered,
            [=](bool arg0, int arg1, QBarSet* arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                    cstack[2].s_voidp = reinterpret_cast<void*>(arg2);
                    cstack[2].type = PlastiQ::QtObjectStar; cstack[2].name = "QBarSet";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QAbstractBarSeries::labelsAngleChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "labelsAngleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QAbstractBarSeries::labelsFormatChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "labelsFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QAbstractBarSeries::labelsPositionChanged,
            [=](QAbstractBarSeries::LabelsPosition arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QAbstractBarSeries::LabelsPosition";
                PlastiQ_activate(sender, "labelsPositionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QAbstractBarSeries::labelsVisibleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelsVisibleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QAbstractBarSeries::pressed,
            [=](int arg0, QBarSet* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QBarSet";
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QAbstractBarSeries::released,
            [=](int arg0, QBarSet* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QBarSet";
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractBarSeries *o = reinterpret_cast<QAbstractBarSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractBarSeries *o = reinterpret_cast<QAbstractBarSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractBarSeries *o = reinterpret_cast<QAbstractBarSeries*>(object->plastiq_data());

        if(className == "QAbstractSeries") {
            stack[0].s_voidp = static_cast<QAbstractSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractBarSeries::~PlastiQQAbstractBarSeries() {
    QAbstractBarSeries* o = reinterpret_cast<QAbstractBarSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
