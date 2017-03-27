#include "plastiqmethod.h"
#include "plastiqqtextobjectinterface.h"

#include <QTextObjectInterface> 
#include <QSizeF>

QHash<QByteArray, PlastiQMethod> PlastiQQTextObjectInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextObjectInterface::plastiqMethods = {
    { "drawObject(QPainter*,QRectF&,QTextDocument*,int,QTextFormat&)", { "drawObject", "QPainter*,QRectF&,QTextDocument*,int,QTextFormat&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intrinsicSize(QTextDocument*,int,QTextFormat&)", { "intrinsicSize", "QTextDocument*,int,QTextFormat&", "QSizeF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextObjectInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextObjectInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextObjectInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextObjectInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextObjectInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextObjectInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextObjectInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextObjectInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextObjectInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextObjectInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextObjectInterface *p = new PlastiQQTextObjectInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextObjectInterface *p = new PlastiQQTextObjectInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextObjectInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QTextObjectInterface*>(object->plastiq_data());

        switch(id) {
        case 0: o->drawObject(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRectF(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QTextDocument*>(stack[3].s_voidp),
                    stack[4].s_int,
                    (*reinterpret_cast< QTextFormat(*) >(stack[5].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->intrinsicSize(reinterpret_cast<QTextDocument*>(stack[1].s_voidp),
                    stack[2].s_int,
                    (*reinterpret_cast< QTextFormat(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
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
        QTextObjectInterface *o = reinterpret_cast<QTextObjectInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextObjectInterface::~PlastiQQTextObjectInterface() {
    QTextObjectInterface* o = reinterpret_cast<QTextObjectInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
