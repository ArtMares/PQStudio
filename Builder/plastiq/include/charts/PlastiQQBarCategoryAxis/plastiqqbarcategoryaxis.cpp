#include "plastiqmethod.h"
#include "plastiqqbarcategoryaxis.h"

#include "charts/PlastiQQAbstractAxis/plastiqqabstractaxis.h"
#include <QBarCategoryAxis> 
#include <QString>
#include <QStringList>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQBarCategoryAxis::plastiqConstructors = {
    { "QBarCategoryAxis()", { "QBarCategoryAxis", "", "QBarCategoryAxis*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBarCategoryAxis(QObject*)", { "QBarCategoryAxis", "QObject*", "QBarCategoryAxis*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBarCategoryAxis::plastiqMethods = {
    { "append(QStringList&)", { "append", "QStringList&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QString)", { "append", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(int)", { "at", "int", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "categories()", { "categories", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(int,QString)", { "insert", "int,QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "max()", { "max", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "min()", { "min", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(QString,QString)", { "replace", "QString&,QString&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCategories(QStringList&)", { "setCategories", "QStringList&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMax(QString)", { "setMax", "QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMin(QString)", { "setMin", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(QString,QString)", { "setRange", "QString&,QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBarCategoryAxis::plastiqSignals = {
    { "categoriesChanged()", { "categoriesChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "countChanged()", { "countChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maxChanged(QString)", { "maxChanged", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minChanged(QString)", { "minChanged", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rangeChanged(QString,QString)", { "rangeChanged", "QString&,QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQBarCategoryAxis::plastiqProperties = {
    { "categories", { "categories", "QStringList", "setCategories", "categories" } },
    { "count", { "count", "int", "countChanged", "count" } },
    { "max", { "max", "QString", "setMax", "max" } },
    { "min", { "min", "QString", "setMin", "min" } },

};

QHash<QByteArray, long> PlastiQQBarCategoryAxis::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBarCategoryAxis::plastiqInherits = { &PlastiQQAbstractAxis::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBarCategoryAxis::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQBarCategoryAxis::plastiq_static_metaObject = {
    { &PlastiQQAbstractAxis::plastiq_static_metaObject, &plastiqInherits, "QBarCategoryAxis", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBarCategoryAxis::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBarCategoryAxis::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBarCategoryAxis *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBarCategoryAxis(); break;
        case 1: o = new QBarCategoryAxis(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBarCategoryAxis *p = new PlastiQQBarCategoryAxis();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBarCategoryAxis *p = new PlastiQQBarCategoryAxis();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQAbstractAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBarCategoryAxis *o = sc ? Q_NULLPTR : reinterpret_cast<QBarCategoryAxis*>(object->plastiq_data());

        switch(id) {
        case 0: o->append((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->append(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 2: { QString _r = o->at(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->categories());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 5: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->insert(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: { QString _r = o->max();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->min();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: o->remove(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->replace(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setCategories((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setMax(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setMin(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setRange(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQAbstractAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QBarCategoryAxis *o = reinterpret_cast<QBarCategoryAxis*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QBarCategoryAxis::categoriesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "categoriesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QBarCategoryAxis::countChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "countChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QBarCategoryAxis::maxChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "maxChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QBarCategoryAxis::minChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "minChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QBarCategoryAxis::rangeChanged,
            [=](const QString& arg0, const QString& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                PlastiQ_activate(sender, "rangeChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QBarCategoryAxis *o = reinterpret_cast<QBarCategoryAxis*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QBarCategoryAxis *o = reinterpret_cast<QBarCategoryAxis*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QBarCategoryAxis *o = reinterpret_cast<QBarCategoryAxis*>(object->plastiq_data());

        if(className == "QAbstractAxis") {
            stack[0].s_voidp = static_cast<QAbstractAxis*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBarCategoryAxis::~PlastiQQBarCategoryAxis() {
    QBarCategoryAxis* o = reinterpret_cast<QBarCategoryAxis*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
