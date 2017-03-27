#include "plastiqmethod.h"
#include "plastiqqnetworkinterface.h"

#include <QNetworkInterface> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkInterface::plastiqConstructors = {
    { "QNetworkInterface()", { "QNetworkInterface", "", "QNetworkInterface*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkInterface(QNetworkInterface&)", { "QNetworkInterface", "QNetworkInterface&", "QNetworkInterface*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkInterface::plastiqMethods = {
    { "flags()", { "flags", "", "InterfaceFlags", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hardwareAddress()", { "hardwareAddress", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "humanReadableName()", { "humanReadableName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "index()", { "index", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkInterface&)", { "swap", "QNetworkInterface&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "interfaceFromIndex(int)", { "interfaceFromIndex", "int", "QNetworkInterface", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "interfaceFromName(QString)", { "interfaceFromName", "QString&", "QNetworkInterface", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "interfaceIndexFromName(QString)", { "interfaceIndexFromName", "QString&", "int", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "interfaceNameFromIndex(int)", { "interfaceNameFromIndex", "int", "QString", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkInterface::plastiqConstants = {

    /* QNetworkInterface::InterfaceFlag */
   { "IsUp", QNetworkInterface::IsUp },
   { "IsRunning", QNetworkInterface::IsRunning },
   { "CanBroadcast", QNetworkInterface::CanBroadcast },
   { "IsLoopBack", QNetworkInterface::IsLoopBack },
   { "IsPointToPoint", QNetworkInterface::IsPointToPoint },
   { "CanMulticast", QNetworkInterface::CanMulticast },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkInterface *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkInterface(); break;
        case 1: o = new QNetworkInterface((*reinterpret_cast< QNetworkInterface(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkInterface *p = new PlastiQQNetworkInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkInterface *p = new PlastiQQNetworkInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkInterface*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->flags(); // HACK for InterfaceFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r = o->hardwareAddress();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->humanReadableName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { int _r = o->index();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: o->swap((*reinterpret_cast< QNetworkInterface(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: { /* COPY OBJECT */
            QNetworkInterface *_r = sc ? new QNetworkInterface(QNetworkInterface::interfaceFromIndex(stack[1].s_int)) : new QNetworkInterface(o->interfaceFromIndex(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkInterface";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QNetworkInterface *_r = sc ? new QNetworkInterface(QNetworkInterface::interfaceFromName(stack[1].s_string)) : new QNetworkInterface(o->interfaceFromName(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkInterface";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { int _r = sc ? QNetworkInterface::interfaceIndexFromName(stack[1].s_string) : o->interfaceIndexFromName(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { QString _r = sc ? QNetworkInterface::interfaceNameFromIndex(stack[1].s_int) : o->interfaceNameFromIndex(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QNetworkInterface *o = reinterpret_cast<QNetworkInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkInterface::~PlastiQQNetworkInterface() {
    QNetworkInterface* o = reinterpret_cast<QNetworkInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
