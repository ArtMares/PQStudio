#include "plastiqmethod.h"
#include "plastiqqmetadatawritercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMetaDataWriterControl> 
#include <QStringList>
#include <QVariant>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMetaDataWriterControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMetaDataWriterControl::plastiqMethods = {
    { "availableMetaData()", { "availableMetaData", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMetaDataAvailable()", { "isMetaDataAvailable", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWritable()", { "isWritable", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData(QString)", { "metaData", "QString&", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMetaData(QString,QVariant)", { "setMetaData", "QString&,QVariant&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMetaDataWriterControl::plastiqSignals = {
    { "metaDataAvailableChanged(bool)", { "metaDataAvailableChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged()", { "metaDataChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged(QString,QVariant)", { "metaDataChanged", "QString&,QVariant&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "writableChanged(bool)", { "writableChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMetaDataWriterControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMetaDataWriterControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMetaDataWriterControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMetaDataWriterControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMetaDataWriterControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMetaDataWriterControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMetaDataWriterControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMetaDataWriterControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMetaDataWriterControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMetaDataWriterControl *p = new PlastiQQMetaDataWriterControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMetaDataWriterControl *p = new PlastiQQMetaDataWriterControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMetaDataWriterControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMetaDataWriterControl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->availableMetaData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->isMetaDataAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isWritable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->metaData(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setMetaData(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMetaDataWriterControl *o = reinterpret_cast<QMetaDataWriterControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMetaDataWriterControl::metaDataAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "metaDataAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QMetaDataWriterControl::*)()>(&QMetaDataWriterControl::metaDataChanged),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QMetaDataWriterControl::*)(const QString&,const QVariant&)>(&QMetaDataWriterControl::metaDataChanged),
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

        case 3: QObject::connect(o, &QMetaDataWriterControl::writableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "writableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMetaDataWriterControl *o = reinterpret_cast<QMetaDataWriterControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMetaDataWriterControl *o = reinterpret_cast<QMetaDataWriterControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMetaDataWriterControl *o = reinterpret_cast<QMetaDataWriterControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMetaDataWriterControl::~PlastiQQMetaDataWriterControl() {
    QMetaDataWriterControl* o = reinterpret_cast<QMetaDataWriterControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
