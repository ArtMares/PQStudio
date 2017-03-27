#include "plastiqmethod.h"
#include "plastiqqaccessibleeditabletextinterface.h"

#include <QAccessibleEditableTextInterface> 

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleEditableTextInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleEditableTextInterface::plastiqMethods = {
    { "deleteText(int,int)", { "deleteText", "int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertText(int,QString)", { "insertText", "int,QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceText(int,int,QString)", { "replaceText", "int,int,QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleEditableTextInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleEditableTextInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleEditableTextInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleEditableTextInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessibleEditableTextInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleEditableTextInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessibleEditableTextInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleEditableTextInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleEditableTextInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleEditableTextInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleEditableTextInterface *p = new PlastiQQAccessibleEditableTextInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleEditableTextInterface *p = new PlastiQQAccessibleEditableTextInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleEditableTextInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleEditableTextInterface*>(object->plastiq_data());

        switch(id) {
        case 0: o->deleteText(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->insertText(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->replaceText(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_string);
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
        QAccessibleEditableTextInterface *o = reinterpret_cast<QAccessibleEditableTextInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessibleEditableTextInterface::~PlastiQQAccessibleEditableTextInterface() {
    QAccessibleEditableTextInterface* o = reinterpret_cast<QAccessibleEditableTextInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
