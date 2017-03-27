#include "plastiqmethod.h"
#include "plastiqqsslcertificateextension.h"

#include <QSslCertificateExtension> 
#include <QString>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQSslCertificateExtension::plastiqConstructors = {
    { "QSslCertificateExtension()", { "QSslCertificateExtension", "", "QSslCertificateExtension*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSslCertificateExtension(QSslCertificateExtension&)", { "QSslCertificateExtension", "QSslCertificateExtension&", "QSslCertificateExtension*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslCertificateExtension::plastiqMethods = {
    { "isCritical()", { "isCritical", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSupported()", { "isSupported", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "oid()", { "oid", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QSslCertificateExtension&)", { "swap", "QSslCertificateExtension&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "QVariant", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSslCertificateExtension::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSslCertificateExtension::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSslCertificateExtension::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSslCertificateExtension::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQSslCertificateExtension::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQSslCertificateExtension::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QSslCertificateExtension", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSslCertificateExtension::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSslCertificateExtension::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSslCertificateExtension *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSslCertificateExtension(); break;
        case 1: o = new QSslCertificateExtension((*reinterpret_cast< QSslCertificateExtension(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSslCertificateExtension *p = new PlastiQQSslCertificateExtension();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSslCertificateExtension *p = new PlastiQQSslCertificateExtension();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSslCertificateExtension *o = sc ? Q_NULLPTR : reinterpret_cast<QSslCertificateExtension*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isCritical();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isSupported();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->oid();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: o->swap((*reinterpret_cast< QSslCertificateExtension(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->value());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QSslCertificateExtension *o = reinterpret_cast<QSslCertificateExtension*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQSslCertificateExtension::~PlastiQQSslCertificateExtension() {
    QSslCertificateExtension* o = reinterpret_cast<QSslCertificateExtension*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
