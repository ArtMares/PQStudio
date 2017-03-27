#include "plastiqmethod.h"
#include "plastiqqdateedit.h"

#include "widgets/PlastiQQDateTimeEdit/plastiqqdatetimeedit.h"
#include <QDateEdit> 

QHash<QByteArray, PlastiQMethod> PlastiQQDateEdit::plastiqConstructors = {
    { "QDateEdit()", { "QDateEdit", "", "QDateEdit*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateEdit(QWidget*)", { "QDateEdit", "QWidget*", "QDateEdit*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateEdit(QDate&)", { "QDateEdit", "QDate&", "QDateEdit*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateEdit(QDate&,QWidget*)", { "QDateEdit", "QDate&,QWidget*", "QDateEdit*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateEdit::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateEdit::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDateEdit::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDateEdit::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDateEdit::plastiqInherits = { &PlastiQQDateTimeEdit::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDateEdit::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDateEdit::plastiq_static_metaObject = {
    { &PlastiQQDateTimeEdit::plastiq_static_metaObject, &plastiqInherits, "QDateEdit", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDateEdit::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDateEdit::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDateEdit *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDateEdit(); break;
        case 1: o = new QDateEdit(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new QDateEdit((*reinterpret_cast< QDate(*) >(stack[1].s_voidp))); break;
        case 3: o = new QDateEdit((*reinterpret_cast< QDate(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDateEdit *p = new PlastiQQDateEdit();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDateEdit *p = new PlastiQQDateEdit();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQDateTimeEdit::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDateEdit *o = sc ? Q_NULLPTR : reinterpret_cast<QDateEdit*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQDateTimeEdit::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDateEdit *o = reinterpret_cast<QDateEdit*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDateEdit *o = reinterpret_cast<QDateEdit*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDateEdit *o = reinterpret_cast<QDateEdit*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDateEdit *o = reinterpret_cast<QDateEdit*>(object->plastiq_data());

        if(className == "QDateTimeEdit") {
            stack[0].s_voidp = static_cast<QDateTimeEdit*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDateEdit::~PlastiQQDateEdit() {
    QDateEdit* o = reinterpret_cast<QDateEdit*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
