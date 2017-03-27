#include "plastiqmethod.h"
#include "plastiqqstackedlayout.h"

#include "widgets/PlastiQQLayout/plastiqqlayout.h"
#include <QStackedLayout> 
#include <QWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQStackedLayout::plastiqConstructors = {
    { "QStackedLayout()", { "QStackedLayout", "", "QStackedLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStackedLayout(QWidget*)", { "QStackedLayout", "QWidget*", "QStackedLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStackedLayout(QLayout*)", { "QStackedLayout", "QLayout*", "QStackedLayout*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStackedLayout::plastiqMethods = {
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentWidget()", { "currentWidget", "", "QWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*)", { "insertWidget", "int,QWidget*", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStackingMode(enum)", { "setStackingMode", "StackingMode", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stackingMode()", { "stackingMode", "", "StackingMode", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget(int)", { "widget", "int", "QWidget*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentWidget(QWidget*)", { "setCurrentWidget", "QWidget*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStackedLayout::plastiqSignals = {
    { "currentChanged(int)", { "currentChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "widgetRemoved(int)", { "widgetRemoved", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQStackedLayout::plastiqProperties = {
    { "count", { "count", "int", "", "count" } },
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },
    { "stackingMode", { "stackingMode", "long", "setStackingMode", "stackingMode" } },

};

QHash<QByteArray, long> PlastiQQStackedLayout::plastiqConstants = {

    /* QStackedLayout::StackingMode */
   { "StackOne", QStackedLayout::StackOne },
   { "StackAll", QStackedLayout::StackAll },

};

QVector<PlastiQMetaObject*> PlastiQQStackedLayout::plastiqInherits = { &PlastiQQLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStackedLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQStackedLayout::plastiq_static_metaObject = {
    { &PlastiQQLayout::plastiq_static_metaObject, &plastiqInherits, "QStackedLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStackedLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStackedLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStackedLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStackedLayout(); break;
        case 1: o = new QStackedLayout(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new QStackedLayout(reinterpret_cast<QLayout*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStackedLayout *p = new PlastiQQStackedLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStackedLayout *p = new PlastiQQStackedLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStackedLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QStackedLayout*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QWidget* _r = o->currentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 3: { int _r = o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setStackingMode(QStackedLayout::StackingMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: { qint64 _r = o->stackingMode(); // HACK for StackingMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { QWidget* _r = o->widget(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 7: o->setCurrentIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setCurrentWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStackedLayout *o = reinterpret_cast<QStackedLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QStackedLayout::currentChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QStackedLayout::widgetRemoved,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "widgetRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStackedLayout *o = reinterpret_cast<QStackedLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStackedLayout *o = reinterpret_cast<QStackedLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStackedLayout *o = reinterpret_cast<QStackedLayout*>(object->plastiq_data());

        if(className == "QLayout") {
            stack[0].s_voidp = static_cast<QLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStackedLayout::~PlastiQQStackedLayout() {
    QStackedLayout* o = reinterpret_cast<QStackedLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
