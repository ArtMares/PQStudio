#include "plastiqmethod.h"
#include "plastiqqcategoryaxis.h"

#include "charts/PlastiQQValueAxis/plastiqqvalueaxis.h"
#include <QCategoryAxis> 
#include <QStringList>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQCategoryAxis::plastiqConstructors = {
    { "QCategoryAxis()", { "QCategoryAxis", "", "QCategoryAxis*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCategoryAxis(QObject*)", { "QCategoryAxis", "QObject*", "QCategoryAxis*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCategoryAxis::plastiqMethods = {
    { "append(QString,double)", { "append", "QString&,qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "categoriesLabels()", { "categoriesLabels", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endValue(QString)", { "endValue", "QString&", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsPosition()", { "labelsPosition", "", "QCategoryAxis::AxisLabelsPosition", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceLabel(QString,QString)", { "replaceLabel", "QString&,QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsPosition(enum)", { "setLabelsPosition", "QCategoryAxis::AxisLabelsPosition", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStartValue(double)", { "setStartValue", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startValue()", { "startValue", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startValue(QString)", { "startValue", "QString&", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCategoryAxis::plastiqSignals = {
    { "categoriesChanged()", { "categoriesChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsPositionChanged(enum)", { "labelsPositionChanged", "QCategoryAxis::AxisLabelsPosition", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCategoryAxis::plastiqProperties = {
    { "categoriesLabels", { "categoriesLabels", "QStringList", "", "categoriesLabels" } },
    { "count", { "count", "int", "", "count" } },
    { "labelsPosition", { "labelsPosition", "long", "setLabelsPosition", "labelsPosition" } },
    { "startValue", { "startValue", "qreal", "setStartValue", "startValue" } },

};

QHash<QByteArray, long> PlastiQQCategoryAxis::plastiqConstants = {

    /* QCategoryAxis::AxisLabelsPosition */
   { "AxisLabelsPositionCenter", QCategoryAxis::AxisLabelsPositionCenter },
   { "AxisLabelsPositionOnValue", QCategoryAxis::AxisLabelsPositionOnValue },

};

QVector<PlastiQMetaObject*> PlastiQQCategoryAxis::plastiqInherits = { &PlastiQQValueAxis::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCategoryAxis::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCategoryAxis::plastiq_static_metaObject = {
    { &PlastiQQValueAxis::plastiq_static_metaObject, &plastiqInherits, "QCategoryAxis", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCategoryAxis::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCategoryAxis::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCategoryAxis *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCategoryAxis(); break;
        case 1: o = new QCategoryAxis(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCategoryAxis *p = new PlastiQQCategoryAxis();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCategoryAxis *p = new PlastiQQCategoryAxis();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQValueAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCategoryAxis *o = sc ? Q_NULLPTR : reinterpret_cast<QCategoryAxis*>(object->plastiq_data());

        switch(id) {
        case 0: o->append(stack[1].s_string,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->categoriesLabels());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { double _r = o->endValue(stack[1].s_string);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { qint64 _r = o->labelsPosition(); // HACK for QCategoryAxis::AxisLabelsPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: o->remove(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->replaceLabel(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setLabelsPosition(QCategoryAxis::AxisLabelsPosition(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setStartValue(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: { double _r = o->startValue();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { double _r = o->startValue(stack[1].s_string);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQValueAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCategoryAxis *o = reinterpret_cast<QCategoryAxis*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCategoryAxis::categoriesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "categoriesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCategoryAxis::labelsPositionChanged,
            [=](QCategoryAxis::AxisLabelsPosition arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCategoryAxis::AxisLabelsPosition";
                PlastiQ_activate(sender, "labelsPositionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCategoryAxis *o = reinterpret_cast<QCategoryAxis*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCategoryAxis *o = reinterpret_cast<QCategoryAxis*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCategoryAxis *o = reinterpret_cast<QCategoryAxis*>(object->plastiq_data());

        if(className == "QValueAxis") {
            stack[0].s_voidp = static_cast<QValueAxis*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCategoryAxis::~PlastiQQCategoryAxis() {
    QCategoryAxis* o = reinterpret_cast<QCategoryAxis*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
