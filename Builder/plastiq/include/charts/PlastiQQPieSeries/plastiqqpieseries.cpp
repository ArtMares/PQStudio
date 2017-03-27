#include "plastiqmethod.h"
#include "plastiqqpieseries.h"

#include "charts/PlastiQQAbstractSeries/plastiqqabstractseries.h"
#include <QPieSeries> 
#include <QPieSlice>
#include <QList>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQPieSeries::plastiqConstructors = {
    { "QPieSeries()", { "QPieSeries", "", "QPieSeries*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPieSeries(QObject*)", { "QPieSeries", "QObject*", "QPieSeries*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPieSeries::plastiqMethods = {
    { "append(QPieSlice*)", { "append", "QPieSlice*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QList<QPieSlice*>)", { "append", "QList<QPieSlice*>", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QString,double)", { "append", "QString,qreal", "QPieSlice*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "holeSize()", { "holeSize", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "horizontalPosition()", { "horizontalPosition", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QPieSlice*)", { "insert", "int,QPieSlice*", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pieEndAngle()", { "pieEndAngle", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pieSize()", { "pieSize", "", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pieStartAngle()", { "pieStartAngle", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QPieSlice*)", { "remove", "QPieSlice*", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHoleSize(double)", { "setHoleSize", "qreal", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHorizontalPosition(double)", { "setHorizontalPosition", "qreal", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsPosition(enum)", { "setLabelsPosition", "QPieSlice::LabelPosition", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsVisible()", { "setLabelsVisible", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsVisible(bool)", { "setLabelsVisible", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPieEndAngle(double)", { "setPieEndAngle", "qreal", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPieSize(double)", { "setPieSize", "qreal", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPieStartAngle(double)", { "setPieStartAngle", "qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalPosition(double)", { "setVerticalPosition", "qreal", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sum()", { "sum", "", "qreal", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "take(QPieSlice*)", { "take", "QPieSlice*", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalPosition()", { "verticalPosition", "", "qreal", 24, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPieSeries::plastiqSignals = {
    { "added(QList<QPieSlice*>)", { "added", "QList<QPieSlice*>", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(QPieSlice*)", { "clicked", "QPieSlice*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "countChanged()", { "countChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked(QPieSlice*)", { "doubleClicked", "QPieSlice*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(QPieSlice*,bool)", { "hovered", "QPieSlice*,bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed(QPieSlice*)", { "pressed", "QPieSlice*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released(QPieSlice*)", { "released", "QPieSlice*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "removed(QList<QPieSlice*>)", { "removed", "QList<QPieSlice*>", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sumChanged()", { "sumChanged", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQPieSeries::plastiqProperties = {
    { "count", { "count", "int", "countChanged", "count" } },
    { "endAngle", { "endAngle", "qreal", "setPieEndAngle", "pieEndAngle" } },
    { "holeSize", { "holeSize", "qreal", "setHoleSize", "holeSize" } },
    { "horizontalPosition", { "horizontalPosition", "qreal", "setHorizontalPosition", "horizontalPosition" } },
    { "size", { "size", "qreal", "setPieSize", "pieSize" } },
    { "startAngle", { "startAngle", "qreal", "setPieStartAngle", "pieStartAngle" } },
    { "sum", { "sum", "qreal", "sumChanged", "sum" } },
    { "verticalPosition", { "verticalPosition", "qreal", "setVerticalPosition", "verticalPosition" } },

};

QHash<QByteArray, long> PlastiQQPieSeries::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPieSeries::plastiqInherits = { &PlastiQQAbstractSeries::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPieSeries::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPieSeries::plastiq_static_metaObject = {
    { &PlastiQQAbstractSeries::plastiq_static_metaObject, &plastiqInherits, "QPieSeries", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPieSeries::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPieSeries::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPieSeries *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPieSeries(); break;
        case 1: o = new QPieSeries(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPieSeries *p = new PlastiQQPieSeries();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPieSeries *p = new PlastiQQPieSeries();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPieSeries *o = sc ? Q_NULLPTR : reinterpret_cast<QPieSeries*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->append(reinterpret_cast<QPieSlice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: /* o->append(UNSUPPORTED_TYPE_QList<QPieSlice*>) | ret: `bool` */ break;
        case 2: { QPieSlice* _r = o->append(stack[1].s_string,
                    stack[2].s_double);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPieSlice"; } break;
        case 3: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { double _r = o->holeSize();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->horizontalPosition();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { bool _r = o->insert(stack[1].s_int,
                    reinterpret_cast<QPieSlice*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { double _r = o->pieEndAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { double _r = o->pieSize();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: { double _r = o->pieStartAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { bool _r = o->remove(reinterpret_cast<QPieSlice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: o->setHoleSize(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setHorizontalPosition(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setLabelsPosition(QPieSlice::LabelPosition(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setLabelsVisible();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setLabelsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setPieEndAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setPieSize(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setPieStartAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setVerticalPosition(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: { double _r = o->sum();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 23: { bool _r = o->take(reinterpret_cast<QPieSlice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { double _r = o->verticalPosition();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQAbstractSeries::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPieSeries *o = reinterpret_cast<QPieSeries*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QPieSeries::added,
            [=](QList<QPieSlice*> arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QPieSlice*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "added", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QPieSeries::clicked,
            [=](QPieSlice* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QPieSlice";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QPieSeries::countChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "countChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QPieSeries::doubleClicked,
            [=](QPieSlice* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QPieSlice";
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QPieSeries::hovered,
            [=](QPieSlice* arg0, bool arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QPieSlice";
                    cstack[1].s_bool = arg1;
                    cstack[1].type = PlastiQ::Bool; cstack[1].name = "bool";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QPieSeries::pressed,
            [=](QPieSlice* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QPieSlice";
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QPieSeries::released,
            [=](QPieSlice* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QPieSlice";
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QPieSeries::removed,
            [=](QList<QPieSlice*> arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QList<QPieSlice*>";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "removed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QPieSeries::sumChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "sumChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPieSeries *o = reinterpret_cast<QPieSeries*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPieSeries *o = reinterpret_cast<QPieSeries*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPieSeries *o = reinterpret_cast<QPieSeries*>(object->plastiq_data());

        if(className == "QAbstractSeries") {
            stack[0].s_voidp = static_cast<QAbstractSeries*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPieSeries::~PlastiQQPieSeries() {
    QPieSeries* o = reinterpret_cast<QPieSeries*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
