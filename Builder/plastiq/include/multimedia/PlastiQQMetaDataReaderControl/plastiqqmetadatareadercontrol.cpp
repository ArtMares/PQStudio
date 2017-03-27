#include "plastiqmethod.h"
#include "plastiqqmetadatareadercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMetaDataReaderControl> 
#include <QStringList>
#include <QVariant>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMetaDataReaderControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMetaDataReaderControl::plastiqMethods = {
    { "availableMetaData()", { "availableMetaData", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMetaDataAvailable()", { "isMetaDataAvailable", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData(QString)", { "metaData", "QString&", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMetaDataReaderControl::plastiqSignals = {
    { "metaDataAvailableChanged(bool)", { "metaDataAvailableChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged()", { "metaDataChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged(QString,QVariant)", { "metaDataChanged", "QString&,QVariant&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMetaDataReaderControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMetaDataReaderControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMetaDataReaderControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMetaDataReaderControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMetaDataReaderControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMetaDataReaderControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMetaDataReaderControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMetaDataReaderControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMetaDataReaderControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMetaDataReaderControl *p = new PlastiQQMetaDataReaderControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMetaDataReaderControl *p = new PlastiQQMetaDataReaderControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMetaDataReaderControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMetaDataReaderControl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->availableMetaData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->isMetaDataAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->metaData(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMetaDataReaderControl *o = reinterpret_cast<QMetaDataReaderControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMetaDataReaderControl::metaDataAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "metaDataAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QMetaDataReaderControl::*)()>(&QMetaDataReaderControl::metaDataChanged),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QMetaDataReaderControl::*)(const QString&,const QVariant&)>(&QMetaDataReaderControl::metaDataChanged),
            [=](const QString& arg0, const QVariant& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                    cstack[1].s_voidp = new QVariant(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QVariant";
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMetaDataReaderControl *o = reinterpret_cast<QMetaDataReaderControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMetaDataReaderControl *o = reinterpret_cast<QMetaDataReaderControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMetaDataReaderControl *o = reinterpret_cast<QMetaDataReaderControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMetaDataReaderControl::~PlastiQQMetaDataReaderControl() {
    QMetaDataReaderControl* o = reinterpret_cast<QMetaDataReaderControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
