#include "plastiqmethod.h"
#include "plastiqqdatawidgetmapper.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QDataWidgetMapper> 
#include <QAbstractItemDelegate>
#include <QByteArray>
#include <QWidget>
#include <QAbstractItemModel>
#include <QModelIndex>

QHash<QByteArray, PlastiQMethod> PlastiQQDataWidgetMapper::plastiqConstructors = {
    { "QDataWidgetMapper()", { "QDataWidgetMapper", "", "QDataWidgetMapper*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDataWidgetMapper(QObject*)", { "QDataWidgetMapper", "QObject*", "QDataWidgetMapper*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDataWidgetMapper::plastiqMethods = {
    { "addMapping(QWidget*,int)", { "addMapping", "QWidget*,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMapping(QWidget*,int,QByteArray)", { "addMapping", "QWidget*,int,QByteArray&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearMapping()", { "clearMapping", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemDelegate()", { "itemDelegate", "", "QAbstractItemDelegate*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mappedPropertyName(QWidget*)", { "mappedPropertyName", "QWidget*", "QByteArray", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mappedSection(QWidget*)", { "mappedSection", "QWidget*", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mappedWidgetAt(int)", { "mappedWidgetAt", "int", "QWidget*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "model()", { "model", "", "QAbstractItemModel*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeMapping(QWidget*)", { "removeMapping", "QWidget*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootIndex()", { "rootIndex", "", "QModelIndex", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemDelegate(QAbstractItemDelegate*)", { "setItemDelegate", "QAbstractItemDelegate*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModel(QAbstractItemModel*)", { "setModel", "QAbstractItemModel*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRootIndex(QModelIndex&)", { "setRootIndex", "QModelIndex&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSubmitPolicy(enum)", { "setSubmitPolicy", "SubmitPolicy", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "submitPolicy()", { "submitPolicy", "", "SubmitPolicy", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "revert()", { "revert", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentModelIndex(QModelIndex&)", { "setCurrentModelIndex", "QModelIndex&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "submit()", { "submit", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "toFirst()", { "toFirst", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "toLast()", { "toLast", "", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "toNext()", { "toNext", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "toPrevious()", { "toPrevious", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDataWidgetMapper::plastiqSignals = {
    { "currentIndexChanged(int)", { "currentIndexChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDataWidgetMapper::plastiqProperties = {
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },
    { "orientation", { "orientation", "long", "setOrientation", "orientation" } },
    { "submitPolicy", { "submitPolicy", "long", "setSubmitPolicy", "submitPolicy" } },

};

QHash<QByteArray, long> PlastiQQDataWidgetMapper::plastiqConstants = {

    /* QDataWidgetMapper::SubmitPolicy */
   { "AutoSubmit", QDataWidgetMapper::AutoSubmit },
   { "ManualSubmit", QDataWidgetMapper::ManualSubmit },

};

QVector<PlastiQMetaObject*> PlastiQQDataWidgetMapper::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDataWidgetMapper::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQDataWidgetMapper::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QDataWidgetMapper", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDataWidgetMapper::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDataWidgetMapper::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDataWidgetMapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDataWidgetMapper(); break;
        case 1: o = new QDataWidgetMapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDataWidgetMapper *p = new PlastiQQDataWidgetMapper();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDataWidgetMapper *p = new PlastiQQDataWidgetMapper();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 26) {
            id -= 26;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDataWidgetMapper *o = sc ? Q_NULLPTR : reinterpret_cast<QDataWidgetMapper*>(object->plastiq_data());

        switch(id) {
        case 0: o->addMapping(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addMapping(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->clearMapping();
                stack[0].type = PlastiQ::Void; break;
        case 3: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QAbstractItemDelegate* _r = o->itemDelegate();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemDelegate"; } break;
        case 5: { QByteArray _r = o->mappedPropertyName(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 6: { int _r = o->mappedSection(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { QWidget* _r = o->mappedWidgetAt(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 8: { QAbstractItemModel* _r = o->model();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractItemModel"; } break;
        case 9: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: o->removeMapping(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: { /* COPY OBJECT */
            QModelIndex *_r = new QModelIndex(o->rootIndex());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QModelIndex";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->setItemDelegate(reinterpret_cast<QAbstractItemDelegate*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setModel(reinterpret_cast<QAbstractItemModel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setRootIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setSubmitPolicy(QDataWidgetMapper::SubmitPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: { qint64 _r = o->submitPolicy(); // HACK for SubmitPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 18: o->revert();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setCurrentIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setCurrentModelIndex((*reinterpret_cast< QModelIndex(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: { bool _r = o->submit();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: o->toFirst();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->toLast();
                stack[0].type = PlastiQ::Void; break;
        case 24: o->toNext();
                stack[0].type = PlastiQ::Void; break;
        case 25: o->toPrevious();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDataWidgetMapper *o = reinterpret_cast<QDataWidgetMapper*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDataWidgetMapper::currentIndexChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentIndexChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDataWidgetMapper *o = reinterpret_cast<QDataWidgetMapper*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDataWidgetMapper *o = reinterpret_cast<QDataWidgetMapper*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDataWidgetMapper *o = reinterpret_cast<QDataWidgetMapper*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDataWidgetMapper::~PlastiQQDataWidgetMapper() {
    QDataWidgetMapper* o = reinterpret_cast<QDataWidgetMapper*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
