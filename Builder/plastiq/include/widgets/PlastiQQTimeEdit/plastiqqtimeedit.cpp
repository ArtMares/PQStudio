#include "plastiqmethod.h"
#include "plastiqqtimeedit.h"

#include "widgets/PlastiQQDateTimeEdit/plastiqqdatetimeedit.h"
#include <QTimeEdit> 

QHash<QByteArray, PlastiQMethod> PlastiQQTimeEdit::plastiqConstructors = {
    { "QTimeEdit()", { "QTimeEdit", "", "QTimeEdit*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeEdit(QWidget*)", { "QTimeEdit", "QWidget*", "QTimeEdit*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeEdit(QTime&)", { "QTimeEdit", "QTime&", "QTimeEdit*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTimeEdit(QTime&,QWidget*)", { "QTimeEdit", "QTime&,QWidget*", "QTimeEdit*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimeEdit::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTimeEdit::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTimeEdit::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTimeEdit::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTimeEdit::plastiqInherits = { &PlastiQQDateTimeEdit::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTimeEdit::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTimeEdit::plastiq_static_metaObject = {
    { &PlastiQQDateTimeEdit::plastiq_static_metaObject, &plastiqInherits, "QTimeEdit", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTimeEdit::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTimeEdit::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTimeEdit *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTimeEdit(); break;
        case 1: o = new QTimeEdit(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new QTimeEdit((*reinterpret_cast< QTime(*) >(stack[1].s_voidp))); break;
        case 3: o = new QTimeEdit((*reinterpret_cast< QTime(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTimeEdit *p = new PlastiQQTimeEdit();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTimeEdit *p = new PlastiQQTimeEdit();
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
        QTimeEdit *o = sc ? Q_NULLPTR : reinterpret_cast<QTimeEdit*>(object->plastiq_data());

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
        QTimeEdit *o = reinterpret_cast<QTimeEdit*>(object->plastiq_data());

        if(className == "QDateTimeEdit") {
            stack[0].s_voidp = static_cast<QDateTimeEdit*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTimeEdit::~PlastiQQTimeEdit() {
    QTimeEdit* o = reinterpret_cast<QTimeEdit*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
