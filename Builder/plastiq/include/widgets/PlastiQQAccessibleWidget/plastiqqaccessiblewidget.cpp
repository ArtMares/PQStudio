#include "plastiqmethod.h"
#include "plastiqqaccessiblewidget.h"

#include "gui/PlastiQQAccessibleObject/plastiqqaccessibleobject.h"
#include <QAccessibleWidget> 
#include <QObject>
#include <QWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleWidget::plastiqConstructors = {
    { "QAccessibleWidget(QWidget*)", { "QAccessibleWidget", "QWidget*", "QAccessibleWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleWidget(QWidget*,enum)", { "QAccessibleWidget", "QWidget*,QAccessible::Role", "QAccessibleWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleWidget(QWidget*,enum,QString)", { "QAccessibleWidget", "QWidget*,QAccessible::Role,QString&", "QAccessibleWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleWidget::plastiqMethods = {
    { "addControllingSignal(QString)", { "addControllingSignal", "QString&", "void", 0, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "parentObject()", { "parentObject", "", "QObject*", 1, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 2, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleWidget::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleWidget::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleWidget::plastiqInherits = { &PlastiQQAccessibleObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleWidget::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleWidget::plastiq_static_metaObject = {
    { &PlastiQQAccessibleObject::plastiq_static_metaObject, &plastiqInherits, "QAccessibleWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleWidget *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 1: o = new QAccessibleWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    QAccessible::Role(stack[2].s_int64)); break;
        case 2: o = new QAccessibleWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    QAccessible::Role(stack[2].s_int64),
                    stack[3].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleWidget *p = new PlastiQQAccessibleWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleWidget *p = new PlastiQQAccessibleWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQAccessibleObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleWidget*>(object->plastiq_data());

        switch(id) {
        case 0: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 1: { QObject* _r; stack[0].type = PlastiQ::Error; } break;
        case 2: { QWidget* _r; stack[0].type = PlastiQ::Error; } break;

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
        QAccessibleWidget *o = reinterpret_cast<QAccessibleWidget*>(object->plastiq_data());

        if(className == "QAccessibleObject") {
            stack[0].s_voidp = static_cast<QAccessibleObject*>(o);
        }
        else if(className == "QAccessibleActionInterface") {
            stack[0].s_voidp = static_cast<QAccessibleActionInterface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleWidget::~PlastiQQAccessibleWidget() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
