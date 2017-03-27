#include "plastiqmethod.h"
#include "plastiqqaccessiblevalueinterface.h"

#include <QAccessibleValueInterface> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleValueInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleValueInterface::plastiqMethods = {
    { "currentValue()", { "currentValue", "", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumValue()", { "maximumValue", "", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumStepSize()", { "minimumStepSize", "", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumValue()", { "minimumValue", "", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCurrentValue(QVariant)", { "setCurrentValue", "QVariant&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleValueInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleValueInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleValueInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleValueInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessibleValueInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleValueInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessibleValueInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleValueInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleValueInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleValueInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleValueInterface *p = new PlastiQQAccessibleValueInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleValueInterface *p = new PlastiQQAccessibleValueInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleValueInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleValueInterface*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->currentValue());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->maximumValue());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->minimumStepSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->minimumValue());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setCurrentValue(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;

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
        QAccessibleValueInterface *o = reinterpret_cast<QAccessibleValueInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessibleValueInterface::~PlastiQQAccessibleValueInterface() {
    QAccessibleValueInterface* o = reinterpret_cast<QAccessibleValueInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
