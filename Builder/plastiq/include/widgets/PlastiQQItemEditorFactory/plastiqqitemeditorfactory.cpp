#include "plastiqmethod.h"
#include "plastiqqitemeditorfactory.h"

#include <QItemEditorFactory> 
#include <QWidget>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQItemEditorFactory::plastiqConstructors = {
    { "QItemEditorFactory()", { "QItemEditorFactory", "", "QItemEditorFactory*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQItemEditorFactory::plastiqMethods = {
    { "createEditor(int,QWidget*)", { "createEditor", "int,QWidget*", "QWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerEditor(int,QItemEditorCreatorBase*)", { "registerEditor", "int,QItemEditorCreatorBase*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valuePropertyName(int)", { "valuePropertyName", "int", "QByteArray", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultFactory()", { "defaultFactory", "", "const QItemEditorFactory*", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDefaultFactory(QItemEditorFactory*)", { "setDefaultFactory", "QItemEditorFactory*", "void", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQItemEditorFactory::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQItemEditorFactory::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQItemEditorFactory::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQItemEditorFactory::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQItemEditorFactory::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQItemEditorFactory::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QItemEditorFactory", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQItemEditorFactory::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQItemEditorFactoryWrapper : public QItemEditorFactory {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQItemEditorFactoryWrapper()
         : QItemEditorFactory(),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QWidget* createEditor(int userType, QWidget *parent) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWidget* createEditor(int,QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_int = userType;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_voidp = reinterpret_cast<void*>(parent);
            stack[2].name = QByteArrayLiteral("QWidget");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWidget* _r = reinterpret_cast<QWidget*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QItemEditorFactory::createEditor(userType,parent);
    }

    QWidget* PlastiQParentCall_createEditor(int userType, QWidget *parent) const {
        return QItemEditorFactory::createEditor(userType,parent);
    }

    QByteArray valuePropertyName(int userType) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QByteArray valuePropertyName(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = userType;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QByteArray _r = stack[0].s_bytearray;
            delete [] stack;
            return _r;
        }
        else return QItemEditorFactory::valuePropertyName(userType);
    }

    QByteArray PlastiQParentCall_valuePropertyName(int userType) const {
        return QItemEditorFactory::valuePropertyName(userType);
    }

};

void PlastiQQItemEditorFactory::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQItemEditorFactoryWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQItemEditorFactoryWrapper(); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQItemEditorFactory *p = new PlastiQQItemEditorFactory();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQItemEditorFactory *p = new PlastiQQItemEditorFactory();
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
        QItemEditorFactory *o = sc ? Q_NULLPTR : reinterpret_cast<QItemEditorFactory*>(object->plastiq_data());

        switch(id) {
        case 0: { QWidget* _r;
                if (isWrapper) _r = ((PlastiQQItemEditorFactoryWrapper*)o)->PlastiQParentCall_createEditor(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                else _r = o->createEditor(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 1: o->registerEditor(stack[1].s_int,
                    reinterpret_cast<QItemEditorCreatorBase*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { QByteArray _r;
                if (isWrapper) _r = ((PlastiQQItemEditorFactoryWrapper*)o)->PlastiQParentCall_valuePropertyName(stack[1].s_int);
                else _r = o->valuePropertyName(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 3: { QItemEditorFactory* _r = sc ? const_cast<QItemEditorFactory*>(QItemEditorFactory::defaultFactory()) : const_cast<QItemEditorFactory*>(o->defaultFactory());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QItemEditorFactory"; } break;
        case 4: if(sc) { QItemEditorFactory::setDefaultFactory(reinterpret_cast<QItemEditorFactory*>(stack[1].s_voidp)); } else { o->setDefaultFactory(reinterpret_cast<QItemEditorFactory*>(stack[1].s_voidp)); }
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
        QItemEditorFactory *o = reinterpret_cast<QItemEditorFactory*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQItemEditorFactory::~PlastiQQItemEditorFactory() {
    QItemEditorFactory* o = reinterpret_cast<QItemEditorFactory*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
