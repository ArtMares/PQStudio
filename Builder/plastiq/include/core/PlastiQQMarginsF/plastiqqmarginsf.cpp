#include "plastiqmethod.h"
#include "plastiqqmarginsf.h"

#include <QMarginsF> 
#include <QMargins>

QHash<QByteArray, PlastiQMethod> PlastiQQMarginsF::plastiqConstructors = {
    { "QMarginsF()", { "QMarginsF", "", "QMarginsF*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMarginsF(double,double,double,double)", { "QMarginsF", "qreal,qreal,qreal,qreal", "QMarginsF*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMarginsF(QMargins&)", { "QMarginsF", "QMargins&", "QMarginsF*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMarginsF::plastiqMethods = {
    { "bottom()", { "bottom", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left()", { "left", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right()", { "right", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottom(double)", { "setBottom", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeft(double)", { "setLeft", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRight(double)", { "setRight", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTop(double)", { "setTop", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toMargins()", { "toMargins", "", "QMargins", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "top()", { "top", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMarginsF::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMarginsF::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMarginsF::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMarginsF::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMarginsF::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMarginsF::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMarginsF", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMarginsF::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMarginsF::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMarginsF *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMarginsF(); break;
        case 1: o = new QMarginsF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 2: o = new QMarginsF((*reinterpret_cast< QMargins(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMarginsF *p = new PlastiQQMarginsF();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMarginsF *p = new PlastiQQMarginsF();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMarginsF *o = sc ? Q_NULLPTR : reinterpret_cast<QMarginsF*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->bottom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { double _r = o->left();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->right();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: o->setBottom(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setLeft(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setRight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setTop(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->toMargins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { double _r = o->top();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QMarginsF *o = reinterpret_cast<QMarginsF*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMarginsF::~PlastiQQMarginsF() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
