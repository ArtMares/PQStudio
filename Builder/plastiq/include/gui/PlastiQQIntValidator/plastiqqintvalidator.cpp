#include "plastiqmethod.h"
#include "plastiqqintvalidator.h"

#include "gui/PlastiQQValidator/plastiqqvalidator.h"
#include <QIntValidator> 

QHash<QByteArray, PlastiQMethod> PlastiQQIntValidator::plastiqConstructors = {
    { "QIntValidator()", { "QIntValidator", "", "QIntValidator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIntValidator(QObject*)", { "QIntValidator", "QObject*", "QIntValidator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIntValidator(int,int)", { "QIntValidator", "int,int", "QIntValidator*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QIntValidator(int,int,QObject*)", { "QIntValidator", "int,int,QObject*", "QIntValidator*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIntValidator::plastiqMethods = {
    { "bottom()", { "bottom", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottom(int)", { "setBottom", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(int,int)", { "setRange", "int,int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTop(int)", { "setTop", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "top()", { "top", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIntValidator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQIntValidator::plastiqProperties = {
    { "bottom", { "bottom", "int", "setBottom", "bottom" } },
    { "top", { "top", "int", "setTop", "top" } },

};

QHash<QByteArray, long> PlastiQQIntValidator::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQIntValidator::plastiqInherits = { &PlastiQQValidator::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQIntValidator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQIntValidator::plastiq_static_metaObject = {
    { &PlastiQQValidator::plastiq_static_metaObject, &plastiqInherits, "QIntValidator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQIntValidator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQIntValidatorWrapper : public QIntValidator {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQIntValidatorWrapper(QObject *parent = Q_NULLPTR)
         : QIntValidator(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQIntValidatorWrapper(int minimum, int maximum, QObject *parent = Q_NULLPTR)
         : QIntValidator(minimum,maximum,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void setRange(int bottom, int top) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setRange(int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = bottom;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = top;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QIntValidator::setRange(bottom,top);
    }

    void PlastiQParentCall_setRange(int bottom, int top) {
        return QIntValidator::setRange(bottom,top);
    }

};

void PlastiQQIntValidator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQIntValidatorWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQIntValidatorWrapper(); break;
        case 1: o = new PlastiQQIntValidatorWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQIntValidatorWrapper(stack[1].s_int,
                    stack[2].s_int); break;
        case 3: o = new PlastiQQIntValidatorWrapper(stack[1].s_int,
                    stack[2].s_int,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQIntValidator *p = new PlastiQQIntValidator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQIntValidator *p = new PlastiQQIntValidator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQValidator::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QIntValidator *o = sc ? Q_NULLPTR : reinterpret_cast<QIntValidator*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->bottom();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: o->setBottom(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQIntValidatorWrapper*)o)->PlastiQParentCall_setRange(stack[1].s_int,
                    stack[2].s_int);
                else o->setRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setTop(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: { int _r = o->top();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QIntValidator *o = reinterpret_cast<QIntValidator*>(object->plastiq_data());

        if(className == "QValidator") {
            stack[0].s_voidp = static_cast<QValidator*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQIntValidator::~PlastiQQIntValidator() {
    QIntValidator* o = reinterpret_cast<QIntValidator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
