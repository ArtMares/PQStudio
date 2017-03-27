#include "plastiqmethod.h"
#include "plastiqqstyleoptiondockwidget.h"

#include "widgets/PlastiQQStyleOption/plastiqqstyleoption.h"
#include <QStyleOptionDockWidget> 

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionDockWidget::plastiqConstructors = {
    { "QStyleOptionDockWidget()", { "QStyleOptionDockWidget", "", "QStyleOptionDockWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStyleOptionDockWidget(QStyleOptionDockWidget&)", { "QStyleOptionDockWidget", "QStyleOptionDockWidget&", "QStyleOptionDockWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionDockWidget::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleOptionDockWidget::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleOptionDockWidget::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleOptionDockWidget::plastiqConstants = {

    /* QStyleOptionDockWidget::StyleOptionType */
   { "Type", QStyleOptionDockWidget::Type },

    /* QStyleOptionDockWidget::StyleOptionVersion */
   { "Version", QStyleOptionDockWidget::Version },

};

QVector<PlastiQMetaObject*> PlastiQQStyleOptionDockWidget::plastiqInherits = { &PlastiQQStyleOption::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleOptionDockWidget::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleOptionDockWidget::plastiq_static_metaObject = {
    { &PlastiQQStyleOption::plastiq_static_metaObject, &plastiqInherits, "QStyleOptionDockWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleOptionDockWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleOptionDockWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleOptionDockWidget *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStyleOptionDockWidget(); break;
        case 1: o = new QStyleOptionDockWidget((*reinterpret_cast< QStyleOptionDockWidget(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleOptionDockWidget *p = new PlastiQQStyleOptionDockWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleOptionDockWidget *p = new PlastiQQStyleOptionDockWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQStyleOption::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleOptionDockWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleOptionDockWidget*>(object->plastiq_data());

        switch(id) {

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
        QStyleOptionDockWidget *o = reinterpret_cast<QStyleOptionDockWidget*>(object->plastiq_data());

        if(className == "QStyleOption") {
            stack[0].s_voidp = static_cast<QStyleOption*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleOptionDockWidget::~PlastiQQStyleOptionDockWidget() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
